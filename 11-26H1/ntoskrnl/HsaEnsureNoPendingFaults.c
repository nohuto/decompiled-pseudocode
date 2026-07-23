/*
 * XREFs of HsaEnsureNoPendingFaults @ 0x1405ABDBC
 * Callers:
 *     HsaSetPasidAddressSpace @ 0x1405AD1A0 (HsaSetPasidAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaEnsureNoPendingFaults(__int64 *a1, int a2)
{
  unsigned __int64 v2; // r11
  __int64 v3; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // edx

  v2 = a1[14];
  v3 = a1[12];
  v5 = *a1;
  v6 = v2 >> 4;
  v7 = *(_QWORD *)(v5 + 8240);
  v8 = (*(_QWORD *)(v5 + 8248) >> 4) & 0x7FFFLL;
  while ( 1 )
  {
    v9 = (v7 >> 4) & 0x7FFF;
    if ( v9 == v8 )
      break;
    v10 = v3 + 16 * v9;
    if ( *(_QWORD *)v10 >> 60 == 1
      && *(unsigned __int16 *)(v10 + 2) == a2
      && (*(_QWORD *)v10 & 0x24020000000000LL) != 0x20000000000LL )
    {
      return v3 + 16 * v9;
    }
    v11 = 0;
    if ( ((v7 >> 4) & 0x7FFF) + 1 != (_DWORD)v6 )
      v11 = ((v7 >> 4) & 0x7FFF) + 1;
    v7 = (16LL * v11) ^ ((16LL * v11) ^ v7) & 0xFFFFFFFFFFF8000FuLL;
  }
  return 0LL;
}
