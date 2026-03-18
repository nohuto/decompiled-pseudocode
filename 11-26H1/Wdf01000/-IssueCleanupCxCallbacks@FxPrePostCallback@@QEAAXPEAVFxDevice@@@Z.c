/*
 * XREFs of ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1400837B4
 * Callers:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1400461DC (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x140045334 (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPrePostCallback::IssueCleanupCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  FxCxDeviceInfo *Flink; // rbx
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  FxCxDeviceInfo *v6; // rax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  if ( Flink != (FxCxDeviceInfo *)&Device->m_CxDeviceInfoListHead && Flink )
  {
    do
    {
      CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
      if ( CxPnpPowerCallbackContexts
        && CxPnpPowerCallbackContexts->u.Generic.CleanupCallback
        && CxPnpPowerCallbackContexts->m_PreCallbackSuccessful == 1 )
      {
        this->InvokeCxCleanupCallback(this, CxPnpPowerCallbackContexts);
      }
      v6 = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
      Flink = v6;
    }
    while ( v6 != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && v6 );
  }
}
