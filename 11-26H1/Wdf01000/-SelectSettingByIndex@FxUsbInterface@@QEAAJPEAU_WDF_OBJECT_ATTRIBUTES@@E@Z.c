/*
 * XREFs of ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x140074B20
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007FDA0 (imp_WdfUsbInterfaceSelectSetting.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074C44 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x140074F90 (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 */

__int64 __fastcall FxUsbInterface::SelectSettingByIndex(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        unsigned __int8 SettingIndex)
{
  FxUsbInterfaceSetting *m_Settings; // rax
  unsigned __int16 bNumEndpoints; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v10; // r8
  FX_POOL **v11; // rax
  _URB *v12; // rsi
  unsigned int v13; // ebx
  __m128i v14; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( this->m_ConfiguredPipes && this->m_CurAlternateSetting == SettingIndex )
    return 0LL;
  if ( SettingIndex >= this->m_NumSettings )
    return 3221225485LL;
  _mm_lfence();
  m_Settings = this->m_Settings;
  v14.m128i_i64[0] = 0LL;
  v14.m128i_i64[1] = 64LL;
  bNumEndpoints = m_Settings[SettingIndex].InterfaceDescriptor->bNumEndpoints;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxPoolTrackingOn )
    v10 = retaddr;
  else
    v10 = 0LL;
  v11 = FxPoolAllocator(
          m_Globals,
          &m_Globals->FxPoolFrameworks,
          &v14,
          (unsigned __int16)(24 * bNumEndpoints + 56),
          m_Globals->Tag,
          v10);
  v12 = (_URB *)v11;
  if ( v11 )
  {
    FxUsbInterface::FormatSelectSettingUrb(this, (_URB *)v11, bNumEndpoints, SettingIndex);
    v13 = FxUsbInterface::SelectSetting(this, PipesAttributes, v12);
    FxPoolFree(v12);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
