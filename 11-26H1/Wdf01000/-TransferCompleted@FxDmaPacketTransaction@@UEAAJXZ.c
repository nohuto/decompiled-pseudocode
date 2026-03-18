/*
 * XREFs of ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x140071F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqii @ 0x14008814C (WPP_IFR_SF_qqii.c)
 *     WPP_IFR_SF_qqiid @ 0x140088258 (WPP_IFR_SF_qqiid.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaPacketTransaction::TransferCompleted(FxDmaPacketTransaction *this, __int64 a2, unsigned int a3)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int id; // esi
  _DMA_ADAPTER *AdapterObject; // rdx
  _DMA_OPERATIONS *DmaOperations; // rbx
  $E4A3ECB67F2D0678F53DA0B3123C8A42 *DmaDescription; // rax
  __int64 *p_m_CurrentFragmentLength; // r15
  _MDL **p_m_CurrentFragmentMdl; // r12
  __int64 *p_m_CurrentFragmentOffset; // r13
  _DMA_ADAPTER *v13; // rcx
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  const void *_a3; // rcx
  unsigned __int16 *p_m_ObjectSize; // rbx
  const void *v19; // rdi
  const void *v20; // rdx
  const _GUID *_a2; // [rsp+20h] [rbp-58h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  id = 0;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qqii(
      m_Globals,
      (unsigned __int8)AdapterObject,
      a3,
      0xFu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      _a3,
      this->m_CurrentFragmentMdl,
      this->m_CurrentFragmentOffset,
      this->m_CurrentFragmentLength);
  }
  DmaDescription = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  p_m_CurrentFragmentLength = (__int64 *)&this->m_CurrentFragmentLength;
  p_m_CurrentFragmentMdl = &this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentOffset = (__int64 *)&this->m_CurrentFragmentOffset;
  v13 = this->m_AdapterInfo->AdapterObject;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    LODWORD(_a2) = *(_DWORD *)p_m_CurrentFragmentLength;
    id = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, __int64))DmaOperations->FlushAdapterBuffersEx)(
           v13,
           *p_m_CurrentFragmentMdl,
           this->m_MapRegisterBase,
           *p_m_CurrentFragmentOffset);
    if ( (id & 0x80000000) == 0 )
      return id;
  }
  else
  {
    LODWORD(_a2) = *(_DWORD *)p_m_CurrentFragmentLength;
    if ( ((unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))DmaOperations->FlushAdapterBuffers)(
           v13,
           *p_m_CurrentFragmentMdl,
           this->m_MapRegisterBase,
           (char *)(*p_m_CurrentFragmentMdl)->StartVa
         + (*p_m_CurrentFragmentMdl)->ByteOffset
         + *p_m_CurrentFragmentOffset) )
    {
      return id;
    }
    id = -1073741823;
  }
  p_m_ObjectSize = &this->m_ObjectSize;
  v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v20 = v19;
  if ( !*p_m_ObjectSize )
    v20 = 0LL;
  WPP_IFR_SF_qqiid(
    *p_m_Globals,
    (unsigned __int8)v20,
    v14,
    v15,
    _a2,
    v20,
    *p_m_CurrentFragmentMdl,
    *p_m_CurrentFragmentOffset,
    *p_m_CurrentFragmentLength,
    id);
  if ( !*p_m_ObjectSize )
    v19 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x20u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v19, id);
  FxVerifierDbgBreakPoint(m_Globals);
  return id;
}
