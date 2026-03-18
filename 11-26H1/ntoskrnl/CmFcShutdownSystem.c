/*
 * XREFs of CmFcShutdownSystem @ 0x140854C94
 * Callers:
 *     CmShutdownSystem0 @ 0x1406E2248 (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x14071C85C (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x140860B28 (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140ABF83C (CmFcpManagerPublishFeatureUsageData.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    if ( !LODWORD(stru_140F10828.KernelShadowStackInitial) )
      CmFcpManagerPublishFeatureUsageData(&CmpFreezeListLock.WaitBlockFill11[144], 0LL);
    TlgAggregateFlush((__int64)&dword_140E09EB0);
  }
}
