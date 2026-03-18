/*
 * XREFs of MiActOnLargeKernelHalPages @ 0x140863FAC
 * Callers:
 *     MiProtectSystemImage @ 0x140A7935C (MiProtectSystemImage.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140CFE440 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140D002A4 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiActOnLargeKernelHalPages(unsigned __int64 a1)
{
  unsigned __int64 v1; // rsi
  _DWORD *v2; // rax
  int v3; // r8d
  _DWORD *v4; // r14
  __int64 *v5; // rbx
  unsigned __int64 v6; // rbp
  int v7; // edi
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // r15d
  __int64 result; // rax
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]
  int v16; // [rsp+48h] [rbp-50h]
  __int128 v17; // [rsp+4Ch] [rbp-4Ch]
  int v18; // [rsp+5Ch] [rbp-3Ch]

  v1 = a1;
  v2 = RtlImageNtHeader(a1);
  v3 = 0x40000000;
  v15 = 0LL;
  v14 = 0LL;
  v4 = v2;
  v18 = 0x40000000;
  v5 = &v14;
  v6 = v1;
  v7 = *((unsigned __int16 *)v2 + 3) + 1;
  LODWORD(v15) = v2[21];
  v8 = v1;
  v16 = v15;
  v17 = 0LL;
  while ( v7 )
  {
    v9 = *((unsigned int *)v5 + 3) + v1;
    v10 = *((_DWORD *)v5 + 4);
    if ( v10 < *((_DWORD *)v5 + 2) )
      v10 = *((_DWORD *)v5 + 2);
    v11 = *((_DWORD *)v5 + 9) & 0xE0000000;
    v6 = v9 + ((v10 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
    if ( v11 != v3 )
    {
      if ( v8 < v9 )
      {
        result = guard_dispatch_icall_no_overrides(v8, v9);
        if ( (int)result < 0 )
          return result;
      }
      v3 = v11;
      v8 = v9;
    }
    if ( v5 == &v14 )
      v5 = (__int64 *)((char *)v4 + *((unsigned __int16 *)v4 + 10) + 24);
    else
      v5 += 5;
    v1 = a1;
    --v7;
  }
  return guard_dispatch_icall_no_overrides(v8, (v6 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL);
}
