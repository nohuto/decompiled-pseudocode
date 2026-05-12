/*
 * XREFs of NvmeGetNpemControlInterface @ 0x14008FCE8
 * Callers:
 *     NvmeAdapterQueryLedState @ 0x14008F2B8 (NvmeAdapterQueryLedState.c)
 *     NvmeAdapterSetLedStateByNpem @ 0x14008F4EC (NvmeAdapterSetLedStateByNpem.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidQueryNpemControlInterface @ 0x14009594C (RaidQueryNpemControlInterface.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeGetNpemControlInterface(__int64 a1, __int64 *a2)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 Pool; // rbx
  __int64 v8; // rdx
  int NpemControlInterface; // ebp
  __int64 v10; // rax

  if ( !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    return 3221225473LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 592) + 144LL);
  if ( v6 )
  {
    *a2 = v6;
    return 0LL;
  }
  else
  {
    Pool = RaidAllocatePool(64LL, 64LL, 1347314002LL, a1);
    if ( Pool )
    {
      NpemControlInterface = RaidQueryNpemControlInterface(*(PDEVICE_OBJECT *)(v5 + 32));
      if ( NpemControlInterface < 0
        || (LOBYTE(v8) = 1,
            NpemControlInterface = (*(__int64 (__fastcall **)(_QWORD, __int64))(Pool + 32))(*(_QWORD *)(Pool + 8), v8),
            NpemControlInterface < 0) )
      {
        ExFreePoolWithTag((PVOID)Pool, 0x504E6152u);
        *(_QWORD *)(*(_QWORD *)(v5 + 592) + 144LL) = 0LL;
      }
      else
      {
        v10 = *(_QWORD *)(v5 + 592);
        *a2 = Pool;
        *(_QWORD *)(v10 + 144) = Pool;
      }
      return (unsigned int)NpemControlInterface;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
