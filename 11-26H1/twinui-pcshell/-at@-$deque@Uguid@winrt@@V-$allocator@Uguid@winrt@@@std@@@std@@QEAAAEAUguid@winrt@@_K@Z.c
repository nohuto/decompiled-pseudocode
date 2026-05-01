/*
 * XREFs of ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1800CC7FC
 * Callers:
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800CC514 (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Xran@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@CAXXZ @ 0x1802C7278 (-_Xran@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@CAXXZ.c)
 */

__int64 __fastcall std::deque<winrt::guid>::at(_QWORD *a1, unsigned __int64 a2)
{
  if ( a1[4] <= a2 )
  {
    std::deque<tagPRESENTFRAME>::_Xran(a1, a2, a2);
    JUMPOUT(0x1800CC830LL);
  }
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a2 + a1[3])));
}
