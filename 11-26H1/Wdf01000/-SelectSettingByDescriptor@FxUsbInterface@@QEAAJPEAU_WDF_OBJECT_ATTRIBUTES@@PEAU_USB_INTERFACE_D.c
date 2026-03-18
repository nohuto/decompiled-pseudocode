/*
 * XREFs of ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1400A0250
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007FDA0 (imp_WdfUsbInterfaceSelectSetting.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074C44 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x140074F90 (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxUsbInterface::SelectSettingByDescriptor(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  int m_InterfaceNumber; // eax
  _FX_DRIVER_GLOBALS **p_m_Globals; // r11
  int _a4; // ecx
  int _a3; // r10d
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbx
  _FX_DRIVER_GLOBALS *v13; // rcx
  __int64 bNumEndpoints; // rax
  void *v15; // r8
  ULONG Tag; // r10d
  FX_POOL **v17; // rax
  _FILE_OBJECT *v18; // rsi
  unsigned int v19; // ebx
  __m128i v20; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == InterfaceDescriptor->bAlternateSetting )
    return 0LL;
  m_InterfaceNumber = this->m_InterfaceNumber;
  p_m_Globals = &this->m_Globals;
  _a4 = InterfaceDescriptor->bInterfaceNumber;
  if ( (_BYTE)_a4 == (_BYTE)m_InterfaceNumber )
  {
    v13 = *p_m_Globals;
    bNumEndpoints = InterfaceDescriptor->bNumEndpoints;
    v15 = retaddr;
    v20 = 0LL;
    Tag = v13->Tag;
    v20.m128i_i64[1] = 64LL;
    if ( !v13->FxPoolTrackingOn )
      v15 = 0LL;
    v17 = FxPoolAllocator(v13, &v13->FxPoolFrameworks, &v20, 24 * bNumEndpoints + 56, Tag, v15);
    v18 = (_FILE_OBJECT *)v17;
    if ( v17 )
    {
      FxUsbInterface::FormatSelectSettingUrb(
        this,
        (_URB *)v17,
        InterfaceDescriptor->bNumEndpoints,
        InterfaceDescriptor->bAlternateSetting);
      v19 = FxUsbInterface::SelectSetting(this, PipesAttributes, v18);
      FxPoolFree(v18);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v19;
  }
  else
  {
    _a3 = m_InterfaceNumber;
    m_ObjectSize = this->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qddd(
      *p_m_Globals,
      (unsigned __int8)PipesAttributes,
      0xEu,
      0xEu,
      WPP_FxUsbInterface_cpp_Traceguids,
      _a2,
      _a3,
      _a4,
      -1073741811);
    return 3221225485LL;
  }
}
