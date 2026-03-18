/*
 * XREFs of ?FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ @ 0x140087640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dq @ 0x140080778 (WPP_IFR_SF_dq.c)
 *     WPP_IFR_SF_dqq @ 0x140087E34 (WPP_IFR_SF_dqq.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaPacketTransaction::FreeMapRegistersAndAdapter(FxDmaPacketTransaction *this)
{
  void *id; // rdi
  _FX_DRIVER_GLOBALS *v3; // rcx
  const void *v4; // rdx
  KIRQL v5; // al
  unsigned __int8 v6; // dl
  unsigned __int16 v7; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  KIRQL v9; // si
  const void *flags; // r8
  __int64 m_MapRegistersReserved; // r8
  const _GUID *v12; // [rsp+20h] [rbp-28h]

  id = this->m_MapRegisterBase;
  if ( id )
  {
    v5 = KfRaiseIrql(2u);
    m_Globals = this->m_Globals;
    v9 = v5;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      flags = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        flags = 0LL;
      WPP_IFR_SF_dqq(m_Globals, v6, (unsigned int)flags, v7, v12, this->m_MapRegistersNeeded, flags, id);
    }
    m_MapRegistersReserved = this->m_MapRegistersReserved;
    if ( !(_DWORD)m_MapRegistersReserved )
      m_MapRegistersReserved = this->m_MapRegistersNeeded;
    this->m_AdapterInfo->AdapterObject->DmaOperations->FreeMapRegisters(
      this->m_AdapterInfo->AdapterObject,
      id,
      m_MapRegistersReserved);
    KeLowerIrql(v9);
  }
  else
  {
    v3 = this->m_Globals;
    if ( v3->FxVerifierOn && v3->FxVerboseOn )
    {
      v4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v4 = 0LL;
      WPP_IFR_SF_dq(v3, 5u, 0xFu, 0x11u, WPP_FxDmaTransactionPacket_hpp_Traceguids, this->m_MapRegistersNeeded, v4);
    }
  }
}
