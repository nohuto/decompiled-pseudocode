/*
 * XREFs of ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1400452A0
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x140045168 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1400461DC (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x140045334 (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePostCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  int v3; // edi
  FxCxDeviceInfo *Flink; // rbx
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  __int64 v7; // r8
  FxCxDeviceInfo *v8; // rcx
  int v10; // eax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  v3 = 0;
  Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  if ( Flink != (FxCxDeviceInfo *)&Device->m_CxDeviceInfoListHead && Flink )
  {
    do
    {
      CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
      if ( CxPnpPowerCallbackContexts )
      {
        if ( CxPnpPowerCallbackContexts->u.Generic.PostCallback )
        {
          LOBYTE(v7) = 1;
          v10 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, (FxCxInvokeCallbackSubType)v7);
          if ( v3 >= 0 )
            v3 = v10;
        }
      }
      v8 = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
      Flink = v8;
    }
    while ( v8 != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && v8 );
  }
  return (unsigned int)v3;
}
