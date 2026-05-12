/*
 * XREFs of NvmeAdapterFindSubsystemPort @ 0x1400D5754
 * Callers:
 *     NvmeAdapterAddController @ 0x1401971E8 (NvmeAdapterAddController.c)
 *     NvmeAdapterConnectController @ 0x140197E74 (NvmeAdapterConnectController.c)
 *     NvmeAdapterGetControllers @ 0x14019A7FC (NvmeAdapterGetControllers.c)
 *     NvmeAdapterRemoveSubsystemPort @ 0x14019E8F8 (NvmeAdapterRemoveSubsystemPort.c)
 * Callees:
 *     NvmeAdapterGetSubsystemPort @ 0x1400D8E34 (NvmeAdapterGetSubsystemPort.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400E0BE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 */

__int64 __fastcall NvmeAdapterFindSubsystemPort(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v9; // rbx
  _QWORD *i; // r14
  _QWORD *v11; // rbx
  __int64 SubsystemPort; // rax

  v4 = 0LL;
  if ( !a3 || a4 )
  {
    if ( a4 )
      *a4 = 0LL;
    v9 = *(_QWORD *)(a1 + 608);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v9 + 24), 1u);
    for ( i = **(_QWORD ***)(a1 + 608); i != *(_QWORD **)(a1 + 608); i = (_QWORD *)*i )
    {
      v11 = i - 3;
      if ( (int)NvmeAdapterHostGatewayAcquireRundown(i - 3) >= 0 )
      {
        SubsystemPort = NvmeAdapterGetSubsystemPort(i - 3, a2);
        v4 = SubsystemPort;
        if ( SubsystemPort )
        {
          if ( (int)NvmeAdapterSubsystemPortAcquireRundown(SubsystemPort) < 0 )
          {
            v4 = 0LL;
          }
          else if ( a3 )
          {
            *a4 = v11;
            break;
          }
          ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v11[7]);
          break;
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v11[7]);
      }
    }
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 608) + 24LL));
    KeLeaveCriticalRegion();
  }
  return v4;
}
