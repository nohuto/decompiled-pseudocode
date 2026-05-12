/*
 * XREFs of NvmeAdapterFindNvmeController @ 0x1400D55CC
 * Callers:
 *     NvmeAdapterDisconnectController @ 0x140199708 (NvmeAdapterDisconnectController.c)
 *     NvmeAdapterGetNamespaces @ 0x14019C0D0 (NvmeAdapterGetNamespaces.c)
 *     NvmeAdapterGetNvmeControllerDiscoveryEntries @ 0x14019C654 (NvmeAdapterGetNvmeControllerDiscoveryEntries.c)
 *     NvmeAdapterRemoveController @ 0x14019DFFC (NvmeAdapterRemoveController.c)
 * Callees:
 *     NvmeAdapterGetNvmeController @ 0x1400D8D98 (NvmeAdapterGetNvmeController.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400E0BE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 */

__int64 __fastcall NvmeAdapterFindNvmeController(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 NvmeController; // r15
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *i; // r14
  _QWORD *v12; // rsi

  NvmeController = 0LL;
  if ( !a3 || a4 )
  {
    if ( a4 )
      *a4 = 0LL;
    v8 = *(_QWORD *)(a1 + 608);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v8 + 24), 1u);
    v9 = *(_QWORD **)(a1 + 608);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 != v9 )
    {
      do
      {
        if ( (int)NvmeAdapterHostGatewayAcquireRundown(v10 - 3) >= 0 )
        {
          ExAcquireResourceSharedLite((PERESOURCE)(v10 + 45), 1u);
          for ( i = (_QWORD *)v10[42]; i != v10 + 42; i = (_QWORD *)*i )
          {
            v12 = i - 1;
            if ( (int)NvmeAdapterSubsystemPortAcquireRundown(i - 1) >= 0 )
            {
              NvmeController = NvmeAdapterGetNvmeController(i - 1, a2);
              if ( NvmeController )
              {
                if ( a3 )
                  *a4 = v12;
                else
                  ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v12[5]);
                break;
              }
              ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v12[5]);
            }
          }
          ExReleaseResourceLite((PERESOURCE)(v10 + 45));
          ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v10[4]);
          if ( NvmeController )
            break;
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != *(_QWORD **)(a1 + 608) );
    }
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 608) + 24LL));
    KeLeaveCriticalRegion();
  }
  return NvmeController;
}
