/*
 * XREFs of ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x14006F990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

char __fastcall FxDmaSystemTransaction::PreMapTransfer(FxDmaSystemTransaction *this)
{
  unsigned __int8 (__fastcall *_a1)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // r8
  char v3; // di
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 (__fastcall *Method)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // r10
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  const void *_a3; // rdx

  _a1 = this->m_ConfigureChannelFunction.Method;
  v3 = 1;
  if ( _a1 )
  {
    m_Globals = this->m_Globals;
    Method = _a1;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a3 = 0LL;
      WPP_IFR_SF_qqq(
        m_Globals,
        5u,
        0xFu,
        0xBu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        _a1,
        this->m_ConfigureChannelContext,
        _a3);
      Method = this->m_ConfigureChannelFunction.Method;
    }
    m_DeviceBase = this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( Method )
    {
      v8 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v8 = 0LL;
      v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !this->m_ObjectSize )
        v9 = 0LL;
      return Method(
               (WDFDMATRANSACTION__ *)v9,
               (WDFDEVICE__ *)v8,
               this->m_ConfigureChannelContext,
               this->m_CurrentFragmentMdl,
               this->m_CurrentFragmentOffset,
               this->m_CurrentFragmentLength);
    }
  }
  return v3;
}
