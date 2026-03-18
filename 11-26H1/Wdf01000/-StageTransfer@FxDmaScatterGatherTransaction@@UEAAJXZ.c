/*
 * XREFs of ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x14005BAE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqdid @ 0x14005BF20 (WPP_IFR_SF_qqdid.c)
 *     ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1400887A4 (-GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@P.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StageTransfer(FxDmaScatterGatherTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int v2; // r14d
  unsigned int level; // r13d
  const void *_a4; // rbp
  _MDL *globals; // r8
  unsigned __int64 *p_m_CurrentFragmentLength; // rdi
  unsigned __int64 m_CurrentFragmentOffset; // rcx
  unsigned __int64 m_CurrentFragmentLength_low; // rdx
  unsigned __int64 ByteCount; // rax
  unsigned __int64 m_Remaining; // r12
  unsigned __int64 m_MaxFragmentLength; // rax
  _MDL *v13; // rcx
  int ByteOffset; // r9d
  unsigned int v15; // r15d
  unsigned int v16; // r11d
  unsigned int v17; // r10d
  unsigned int v18; // edx
  FxDmaEnabler *m_DmaEnabler; // rax
  unsigned __int64 v20; // r12
  FxDmaEnabler *v21; // rax
  unsigned int m_CurrentFragmentLength; // r14d
  unsigned __int64 v23; // r15
  _MDL *m_CurrentFragmentMdl; // rdi
  unsigned int m_SgListBufferSize; // r13d
  KIRQL v26; // al
  FxDmaEnabler *v27; // r11
  KIRQL v28; // r12
  _DMA_ADAPTER *AdapterObject; // r10
  unsigned int m_Flags; // r8d
  _WDF_BIND_INFO *WdfBindInfo; // rdx
  int v32; // eax
  int ScatterGatherList; // edi
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  void (__fastcall *traceGuid)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *); // [rsp+20h] [rbp-88h]
  int v39; // [rsp+48h] [rbp-60h]
  void *m_SGListBuffer; // [rsp+B0h] [rbp+8h]

  m_Globals = this->m_Globals;
  v2 = 0;
  level = -1;
  _a4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a4 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xEu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, _a4);
  globals = this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentLength = &this->m_CurrentFragmentLength;
  m_CurrentFragmentOffset = this->m_CurrentFragmentOffset;
  m_CurrentFragmentLength_low = LODWORD(this->m_CurrentFragmentLength);
  ByteCount = globals->ByteCount - m_CurrentFragmentOffset;
  if ( m_CurrentFragmentLength_low >= ByteCount )
  {
    do
    {
      globals = globals->Next;
      m_CurrentFragmentLength_low -= ByteCount;
      ByteCount = globals->ByteCount;
    }
    while ( m_CurrentFragmentLength_low >= ByteCount );
  }
  else
  {
    m_CurrentFragmentLength_low += m_CurrentFragmentOffset;
  }
  this->m_CurrentFragmentMdl = globals;
  this->m_CurrentFragmentOffset = m_CurrentFragmentLength_low;
  m_Remaining = this->m_Remaining;
  m_MaxFragmentLength = m_Remaining;
  if ( m_Remaining >= this->m_MaxFragmentLength )
    m_MaxFragmentLength = this->m_MaxFragmentLength;
  *p_m_CurrentFragmentLength = m_MaxFragmentLength;
  if ( this->m_RequireSingleTransfer )
    goto LABEL_17;
  v13 = globals;
  ByteOffset = ((_WORD)m_CurrentFragmentLength_low + LOWORD(globals->StartVa) + LOWORD(globals->ByteOffset)) & 0xFFF;
  v15 = *(_DWORD *)p_m_CurrentFragmentLength;
  v16 = globals->ByteCount - m_CurrentFragmentLength_low;
  v17 = v16;
  v18 = 0;
  if ( v16 < *(_DWORD *)p_m_CurrentFragmentLength )
  {
    do
    {
      v13 = v13->Next;
      if ( !v13 )
        break;
      v35 = v17 + 4095;
      v17 = v13->ByteCount;
      v36 = ByteOffset + v35;
      ByteOffset = v13->ByteOffset;
      v18 += v36 >> 12;
      v37 = v16;
      if ( v18 > this->m_AdapterInfo->NumberOfMapRegisters )
        v37 = v2;
      v16 += v17;
      v2 = v37;
    }
    while ( v16 < v15 );
    p_m_CurrentFragmentLength = &this->m_CurrentFragmentLength;
  }
  if ( v16 + 4096 >= ByteOffset + v15 )
  {
    v18 += (v15 + v17 + ByteOffset - v16 + 4095) >> 12;
    if ( v18 <= this->m_AdapterInfo->NumberOfMapRegisters )
      v2 += v15 + v17 - v16;
    if ( p_m_CurrentFragmentLength )
      *(_DWORD *)p_m_CurrentFragmentLength = v2;
    level = v18;
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( level <= m_DmaEnabler->m_MaxSGElements )
  {
LABEL_17:
    v20 = m_Remaining - *p_m_CurrentFragmentLength;
    v21 = this->m_DmaEnabler;
    m_CurrentFragmentLength = this->m_CurrentFragmentLength;
    v23 = this->m_CurrentFragmentOffset;
    m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
    this->m_Remaining = v20;
    if ( (*((_BYTE *)v21 + 380) & 0x20) != 0 )
    {
      m_SgListBufferSize = this->m_SgListBufferSize;
      m_SGListBuffer = this->m_SGListBuffer;
      v26 = KfRaiseIrql(2u);
      v27 = this->m_DmaEnabler;
      v28 = v26;
      AdapterObject = this->m_AdapterInfo->AdapterObject;
      if ( v27->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      {
        m_Flags = 0;
        WdfBindInfo = this->m_Globals->WdfBindInfo;
        if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xF )
          m_Flags = this->m_Flags;
        v32 = AdapterObject->DmaOperations->BuildScatterGatherListEx(
                AdapterObject,
                v27->m_FDO,
                this->m_TransferContext,
                m_CurrentFragmentMdl,
                v23,
                m_CurrentFragmentLength,
                m_Flags,
                FxDmaScatterGatherTransaction::_AdapterListControl,
                this,
                this->m_DmaDirection,
                m_SGListBuffer,
                m_SgListBufferSize,
                0LL,
                0LL,
                0LL);
      }
      else
      {
        v32 = AdapterObject->DmaOperations->BuildScatterGatherList(
                AdapterObject,
                v27->m_FDO,
                m_CurrentFragmentMdl,
                (char *)m_CurrentFragmentMdl->StartVa + m_CurrentFragmentMdl->ByteOffset + v23,
                m_CurrentFragmentLength,
                FxDmaScatterGatherTransaction::_AdapterListControl,
                this,
                this->m_DmaDirection,
                m_SGListBuffer,
                m_SgListBufferSize);
      }
      ScatterGatherList = v32;
      KeLowerIrql(v28);
    }
    else
    {
      ScatterGatherList = FxDmaScatterGatherTransaction::GetScatterGatherList(
                            this,
                            m_CurrentFragmentMdl,
                            v23,
                            m_CurrentFragmentLength,
                            traceGuid,
                            this);
    }
    if ( ScatterGatherList < 0 )
    {
      WPP_IFR_SF_qd(
        m_Globals,
        2u,
        0xFu,
        0x10u,
        WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
        _a4,
        ScatterGatherList);
      this->m_Remaining += this->m_CurrentFragmentLength;
    }
    else if ( m_Globals->FxVerifierOn )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qd(
          m_Globals,
          5u,
          0xFu,
          0x11u,
          WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
          _a4,
          ScatterGatherList);
    }
    return (unsigned int)ScatterGatherList;
  }
  else
  {
    WPP_IFR_SF_qqdid(
      m_Globals,
      v18,
      (unsigned int)globals,
      0xFu,
      (const _GUID *)traceGuid,
      _a4,
      globals,
      level,
      m_DmaEnabler->m_MaxSGElements,
      v39);
    return 3223323146LL;
  }
}
