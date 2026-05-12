/*
 * XREFs of RaCallMiniportBuildIo @ 0x14002BD80
 * Callers:
 *     NvmeAdapterPostScatterGatherExecute @ 0x1400DA750 (NvmeAdapterPostScatterGatherExecute.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaCallMiniportBuildIo(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rax

  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 128LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL);
  else
    return 1LL;
}
