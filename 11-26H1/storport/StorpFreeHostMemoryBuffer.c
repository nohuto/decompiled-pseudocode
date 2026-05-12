/*
 * XREFs of StorpFreeHostMemoryBuffer @ 0x140058A68
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400F5474 (NvmeControllerInitHostMemoryBuffer.c)
 *     NvmeFreeHostMemoryBuffer @ 0x1400FE828 (NvmeFreeHostMemoryBuffer.c)
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     MiniportGetNvmeAdapter @ 0x140058B94 (MiniportGetNvmeAdapter.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorpFreeHostMemoryBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 NvmeAdapter; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rbp
  __int64 RaidAdapter; // rax
  struct _MDL *v11; // rcx
  unsigned int *v12; // r14

  v3 = *(_DWORD **)(a1 - 16);
  v4 = 0LL;
  v5 = 0LL;
  if ( (v3[62] & 1) == 0 )
  {
    RaidAdapter = RaMiniportGetRaidAdapter(v3);
    v4 = RaidAdapter;
    if ( RaidAdapter )
    {
      v7 = *(unsigned int **)(RaidAdapter + 5664);
      if ( v7 )
      {
        v8 = *(_QWORD *)(RaidAdapter + 896);
        goto LABEL_10;
      }
      return 3238002689LL;
    }
    return 3238002694LL;
  }
  NvmeAdapter = MiniportGetNvmeAdapter(v3, a2, a3);
  v5 = NvmeAdapter;
  if ( !NvmeAdapter )
    return 3238002694LL;
  v7 = *(unsigned int **)(NvmeAdapter + 1424);
  if ( !v7 )
    return 3238002689LL;
  v8 = *(_QWORD *)(NvmeAdapter + 1160);
  do
  {
LABEL_10:
    v11 = (struct _MDL *)*((_QWORD *)v7 + 1);
    v12 = *(unsigned int **)v7;
    if ( v11 )
    {
      MmFreePagesFromMdl(v11);
      ExFreePoolWithTag(*((PVOID *)v7 + 1), 0);
    }
    if ( *((_QWORD *)v7 + 3) )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v8 + 8) + 24LL))(v8, v7[8], *((_QWORD *)v7 + 2));
    ExFreePoolWithTag(v7, 0);
    v7 = v12;
  }
  while ( v12 );
  if ( v4 )
  {
    *(_QWORD *)(v4 + 5664) = 0LL;
  }
  else if ( v5 )
  {
    *(_QWORD *)(v5 + 1424) = 0LL;
  }
  return 0LL;
}
