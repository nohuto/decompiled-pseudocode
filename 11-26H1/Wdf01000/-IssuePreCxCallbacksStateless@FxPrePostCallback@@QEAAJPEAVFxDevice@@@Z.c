/*
 * XREFs of ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x14004520C
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x140045168 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 * Callees:
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x140045334 (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateless(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  int v3; // edi
  FxCxDeviceInfo *Flink; // rbx
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  FxCxDeviceInfo *v7; // rcx
  int v9; // eax

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
        if ( CxPnpPowerCallbackContexts->u.Generic.PreCallback )
        {
          v9 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, FxCxInvokePreCallback);
          if ( v3 >= 0 )
            v3 = v9;
        }
      }
      v7 = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
      Flink = v7;
    }
    while ( v7 != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && v7 );
  }
  return (unsigned int)v3;
}
