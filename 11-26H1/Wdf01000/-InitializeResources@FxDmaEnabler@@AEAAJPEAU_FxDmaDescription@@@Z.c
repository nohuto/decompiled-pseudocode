/*
 * XREFs of ?InitializeResources@FxDmaEnabler@@AEAAJPEAU_FxDmaDescription@@@Z @ 0x14008A450
 * Callers:
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x140089BC0 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qLqdi @ 0x14008A7E8 (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qii @ 0x14008A9F0 (WPP_IFR_SF_qii.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaEnabler::InitializeResources(FxDmaEnabler *this, _FxDmaDescription *AdapterInfo)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  unsigned int *p_NumberOfMapRegisters; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _DMA_ADAPTER *DmaAdapter; // rax
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  _DMA_ADAPTER *v10; // rcx
  __int64 m_ObjectSize; // rax
  const void *_a1; // rbx
  char v14; // al
  unsigned __int64 *p_PreallocatedSGListSize; // rdx
  int _a2; // eax
  unsigned int v17; // r14d
  unsigned __int16 v18; // dx
  const void *v19; // rbx
  unsigned __int64 id; // rax
  int flags; // edx
  const void *v22; // rdi
  const void *v23; // rcx
  unsigned __int64 m_MaximumLength; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]

  p_m_Globals = &this->m_Globals;
  p_NumberOfMapRegisters = &AdapterInfo->NumberOfMapRegisters;
  m_Globals = this->m_Globals;
  DmaAdapter = IoGetDmaAdapter(this->m_PDO, &AdapterInfo->DeviceDescription, &AdapterInfo->NumberOfMapRegisters);
  AdapterInfo->AdapterObject = DmaAdapter;
  v10 = DmaAdapter;
  if ( !DmaAdapter )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(_WORD)m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaEnabler_cpp_Traceguids, _a1, -1073741823);
    return 3221225473LL;
  }
  v14 = *((_BYTE *)this + 380);
  p_PreallocatedSGListSize = &AdapterInfo->PreallocatedSGListSize;
  if ( (v14 & 8) != 0 )
  {
    traceGuid = (const _GUID *)&AdapterInfo->PreallocatedSGListSize;
    _a2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD))v10->DmaOperations->CalculateScatterGatherList)(
            v10,
            0LL,
            0LL,
            *p_NumberOfMapRegisters << 12);
    v17 = _a2;
    if ( _a2 < 0 )
    {
      v18 = this->m_ObjectSize;
      v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v18 )
        v19 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaEnabler_cpp_Traceguids, v19, _a2);
      return v17;
    }
  }
  else if ( (v14 & 4) != 0 )
  {
    *p_PreallocatedSGListSize = 40LL;
  }
  else
  {
    *p_PreallocatedSGListSize = 24LL * *p_NumberOfMapRegisters + 16;
  }
  id = this->m_MaximumLength;
  flags = *p_NumberOfMapRegisters;
  if ( id >= (unsigned __int64)(*p_NumberOfMapRegisters - 1) << 12 )
    id = (unsigned __int64)(unsigned int)(flags - 1) << 12;
  AdapterInfo->MaximumFragmentLength = id;
  v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( m_Globals->FxVerboseOn )
  {
    v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v23 = 0LL;
    WPP_IFR_SF_qLqdi(m_Globals, flags, v8, v9, traceGuid, v23, this->m_Profile, AdapterInfo->AdapterObject, flags, id);
  }
  m_MaximumLength = this->m_MaximumLength;
  if ( AdapterInfo->MaximumFragmentLength < m_MaximumLength && m_Globals->FxVerboseOn )
  {
    if ( !this->m_ObjectSize )
      v22 = 0LL;
    WPP_IFR_SF_qii(
      m_Globals,
      5u,
      v8,
      0x18u,
      WPP_FxDmaEnabler_cpp_Traceguids,
      v22,
      m_MaximumLength,
      AdapterInfo->MaximumFragmentLength);
  }
  return 0LL;
}
