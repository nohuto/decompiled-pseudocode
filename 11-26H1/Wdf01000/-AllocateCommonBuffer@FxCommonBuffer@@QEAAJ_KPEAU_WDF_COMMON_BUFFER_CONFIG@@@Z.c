/*
 * XREFs of ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_KPEAU_WDF_COMMON_BUFFER_CONFIG@@@Z @ 0x1400ABE20
 * Callers:
 *     imp_WdfCommonBufferCreate @ 0x14001B0B0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x140081770 (imp_WdfCommonBufferCreateWithConfig.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAU_WDF_COMMON_BUFFER_CONFIG@@PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1400898E8 (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAU_WDF_COMMON_BUFFER_CONFIG@@PEAPEAXPEAT_LARGE_INTE.c)
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A6A0 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_IFR_SF_qi @ 0x14008A920 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x14008A9F0 (WPP_IFR_SF_qii.c)
 */

__int64 __fastcall FxCommonBuffer::AllocateCommonBuffer(
        FxCommonBuffer *this,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  __int64 result; // rax
  unsigned int v8; // esi
  unsigned int v9; // edx
  _LARGE_INTEGER v10; // r8
  unsigned __int64 m_Alignment; // r10
  unsigned __int64 *p_m_RawLength; // r15
  unsigned __int64 v13; // rax
  _LARGE_INTEGER *p_m_BufferRawLA; // r13
  char *m_BufferRawVA; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 QuadPart; // r10
  unsigned __int64 v18; // r8
  unsigned __int16 v19; // ax
  const void *v20; // rdi
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // r9
  const void *v23; // rdi
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 level; // [rsp+30h] [rbp-38h]
  __int64 v26; // [rsp+38h] [rbp-30h]

  m_Globals = this->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  v8 = result;
  if ( (int)result >= 0 )
  {
    this->m_Length = Length;
    if ( Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline() && Config )
      this->m_Alignment = Config->AlignmentRequirement;
    m_Alignment = this->m_Alignment;
    if ( m_Alignment <= 0xFFF && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v9, 0xBu) )
    {
      p_m_RawLength = &this->m_RawLength;
      v13 = Length;
    }
    else
    {
      v13 = m_Alignment + Length;
      p_m_RawLength = &this->m_RawLength;
      if ( m_Alignment + Length < Length )
      {
        *p_m_RawLength = -1LL;
        m_ObjectSize = this->m_ObjectSize;
        v22 = 10;
        v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v26 = m_Alignment;
        level = Length;
        if ( !m_ObjectSize )
          v23 = 0LL;
        goto LABEL_25;
      }
      v8 = 0;
      Length += m_Alignment;
    }
    p_m_BufferRawLA = &this->m_BufferRawLA;
    *p_m_RawLength = v13;
    FxDmaEnabler::AllocateCommonBuffer(this->m_DmaEnabler, Length, Config, &this->m_BufferRawVA, &this->m_BufferRawLA);
    m_BufferRawVA = (char *)this->m_BufferRawVA;
    if ( !m_BufferRawVA )
    {
      this->m_Length = 0LL;
      result = 3221225626LL;
      *p_m_RawLength = 0LL;
      this->m_BufferAlignedVA = 0LL;
      this->m_BufferAlignedLA.QuadPart = 0LL;
      return result;
    }
    v16 = this->m_Alignment;
    QuadPart = p_m_BufferRawLA->QuadPart;
    v10.QuadPart = ~v16 & (p_m_BufferRawLA->QuadPart + v16);
    this->m_BufferAlignedVA = (void *)(~v16 & (unsigned __int64)&m_BufferRawVA[v16]);
    this->m_BufferAlignedLA = v10;
    if ( v16 <= 0xFFF )
      return v8;
    if ( v10.QuadPart >= QuadPart )
    {
      v18 = v10.QuadPart - QuadPart;
      if ( v18 <= 0xFFFFFFFF )
      {
        v8 = 0;
        this->m_BufferAlignedVA = &m_BufferRawVA[(unsigned int)v18];
        return v8;
      }
      v19 = this->m_ObjectSize;
      v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v19 )
        v20 = 0LL;
      WPP_IFR_SF_qi(m_Globals, v16, v18, 0xCu, WPP_FxCommonBuffer_cpp_Traceguids, v20, v18);
      goto LABEL_26;
    }
    v21 = this->m_ObjectSize;
    v22 = 11;
    v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v26 = v10.QuadPart;
    level = QuadPart;
    if ( !v21 )
      v23 = 0LL;
LABEL_25:
    WPP_IFR_SF_qii(m_Globals, 2u, v10.LowPart, v22, WPP_FxCommonBuffer_cpp_Traceguids, v23, level, v26);
LABEL_26:
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225621LL;
  }
  return result;
}
