/*
 * XREFs of ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAU_WDF_COMMON_BUFFER_CONFIG@@PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1400898E8
 * Callers:
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z @ 0x1400ABE20 (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A6A0 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_IFR_SF_qi @ 0x14008A920 (WPP_IFR_SF_qi.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaEnabler::AllocateCommonBuffer(
        FxDmaEnabler *this,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config,
        void **BufferVA,
        _LARGE_INTEGER *BufferPA)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v8; // esi
  _DMA_ADAPTER *AdapterObject; // rdi
  __int64 v10; // r9
  _LARGE_INTEGER MinimumAddress; // rdx
  _MEMORY_CACHING_TYPE *p_CacheType; // r9
  void *v13; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *globals; // rcx

  m_Globals = this->m_Globals;
  *BufferVA = 0LL;
  v8 = Length;
  BufferPA->QuadPart = 0LL;
  if ( Length > 0xFFFFFFFF )
  {
    m_ObjectSize = this->m_ObjectSize;
    globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      globals = 0LL;
    WPP_IFR_SF_qi(m_Globals, Length, (unsigned int)Config, 0x1Du, WPP_FxDmaEnabler_cpp_Traceguids, globals, Length);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    AdapterObject = this->m_SimplexAdapterInfo.AdapterObject;
    if ( Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline()
      && Config
      && ((MinimumAddress = Config->MinimumAddress, MinimumAddress.QuadPart)
       || Config->MaximumAddress.QuadPart
       || Config->CacheType != MmMaximumCacheType) )
    {
      p_CacheType = &Config->CacheType;
      if ( Config->CacheType == MmMaximumCacheType )
        p_CacheType = 0LL;
      v13 = AdapterObject->DmaOperations->AllocateCommonBufferWithBounds(
              AdapterObject,
              (_LARGE_INTEGER *)((unsigned __int64)&Config->MinimumAddress & -(__int64)(MinimumAddress.QuadPart != 0)),
              (_LARGE_INTEGER *)((unsigned __int64)&Config->MaximumAddress & -(__int64)(Config->MaximumAddress.QuadPart != 0)),
              v8,
              0,
              p_CacheType,
              0,
              BufferPA);
    }
    else
    {
      LOBYTE(v10) = 1;
      v13 = AdapterObject->DmaOperations->AllocateCommonBuffer(AdapterObject, v8, BufferPA, v10);
    }
    *BufferVA = v13;
  }
}
