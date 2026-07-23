/*
 * XREFs of HalpIommuDmarPageTableMarkHiberPhase @ 0x1405A3180
 * Callers:
 *     HalpIommuDomainMarkHiberLogicalRange @ 0x140590044 (HalpIommuDomainMarkHiberLogicalRange.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall HalpIommuDmarPageTableMarkHiberPhase(
        PVOID MemoryMap,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  int v5; // r12d
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned int v12; // r11d
  unsigned int v13; // edx
  unsigned __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  _OWORD v21[3]; // [rsp+30h] [rbp-88h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 28);
  LODWORD(v6) = 0;
  v7 = 0LL;
  v21[0] = v4;
  memset(&v21[1], 0, 32);
  if ( a4 )
  {
    do
    {
      v12 = *(_DWORD *)(a2 + 24) - 1;
      while ( 1 )
      {
        v13 = *(_DWORD *)(a2 + 4LL * (unsigned int)v6 + 36);
        if ( (unsigned int)v6 >= v12 )
          break;
        v14 = v4 + (1 << v13 << v5);
        if ( v13 < 0x40 )
          v15 = (1LL << v13) - 1;
        else
          v15 = -1;
        v4 = *(_QWORD *)(v14 + 8LL * (v15 & (unsigned int)(a3 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v6 + 60))));
        if ( !v4 )
          return;
        v6 = (unsigned int)(v6 + 1);
        *((_QWORD *)v21 + v6) = v4;
      }
      if ( v13 < 0x40 )
        v16 = (1LL << v13) - 1;
      else
        LODWORD(v16) = -1;
      v17 = v16 & (a3 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v6 + 60));
      v18 = (unsigned int)((1 << *(_DWORD *)(a2 + 4LL * v12 + 36)) - v17);
      if ( a4 - v7 <= v18 )
        v18 = a4 - v7;
      PoSetHiberRange(MemoryMap, 2u, (PVOID)(v4 + (unsigned int)(v17 << v5)), v18 << v5, 0x446C6148u);
      v19 = a3 + (v18 << 12);
      if ( v19 < a3 )
        break;
      v7 += v18;
      if ( (_DWORD)v6 )
      {
        do
        {
          v20 = (unsigned int)(v6 - 1);
          if ( (v19 & (1LL << *(_DWORD *)(a2 + 4 * v20 + 60))) == (a3 & (1LL << *(_DWORD *)(a2 + 4 * v20 + 60))) )
            break;
          LODWORD(v6) = v6 - 1;
        }
        while ( (_DWORD)v20 );
      }
      a3 += v18 << 12;
      v4 = *((_QWORD *)v21 + (unsigned int)v6);
    }
    while ( v7 < a4 );
  }
}
