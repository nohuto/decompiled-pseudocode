/*
 * XREFs of ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x140045618
 * Callers:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1400461DC (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x140045334 (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateful(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  int v3; // r9d
  FxCxDeviceInfo *Flink; // rbx
  char v5; // bp
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  FxCxPnpPowerCallbackContext *v8; // rdi
  FxCxDeviceInfo *v9; // rax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  v3 = 0;
  Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  v5 = 0;
  if ( Flink != (FxCxDeviceInfo *)&Device->m_CxDeviceInfoListHead && Flink )
  {
    do
    {
      CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
      v8 = CxPnpPowerCallbackContexts;
      if ( CxPnpPowerCallbackContexts )
      {
        if ( CxPnpPowerCallbackContexts->u.Generic.PreCallback )
        {
          CxPnpPowerCallbackContexts->m_PreCallbackSuccessful = 0;
          if ( !v5 )
          {
            v3 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, FxCxInvokePreCallback);
            if ( v3 < 0 )
              v5 = 1;
            else
              v8->m_PreCallbackSuccessful = 1;
          }
        }
      }
      v9 = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
      Flink = v9;
    }
    while ( v9 != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && v9 );
  }
  return (unsigned int)v3;
}
