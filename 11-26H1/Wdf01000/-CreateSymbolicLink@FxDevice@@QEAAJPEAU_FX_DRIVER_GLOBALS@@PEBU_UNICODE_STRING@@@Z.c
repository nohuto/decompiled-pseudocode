/*
 * XREFs of ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1400952F8
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x14007E240 (imp_WdfDeviceCreateSymbolicLink.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140018EB8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1400422F0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x14007C5E4 (--1FxAutoString@@QEAA@XZ.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxDevice::CreateSymbolicLink(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *SymbolicLinkName)
{
  FxAutoString *p_m_DeviceName; // r14
  const void *v7; // rbx
  unsigned __int16 v8; // r9
  bool v9; // zf
  int DeviceProperty; // edi
  __int64 v11; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // r14
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int16 v14; // ax
  const void *_a2; // rbx
  void *v16; // rax
  ULONG Tag; // ecx
  FX_POOL **v18; // rax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // ax
  FxAutoString pdoName; // [rsp+50h] [rbp-20h] BYREF
  __m128i v23; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int length; // [rsp+A0h] [rbp+30h] BYREF

  p_m_DeviceName = (FxAutoString *)&this->m_DeviceName;
  pdoName = 0LL;
  if ( this->m_DeviceName.Buffer )
    goto LABEL_22;
  if ( this->m_Legacy )
  {
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v8 = 12;
    v9 = this->m_ObjectSize == 0;
    DeviceProperty = -1073741436;
LABEL_27:
    if ( v9 )
      v7 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, v8, WPP_FxDeviceKm_cpp_Traceguids, v7, DeviceProperty);
    goto LABEL_30;
  }
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( !SafePhysicalDevice )
  {
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v8 = 13;
    v9 = *(_WORD *)(v11 + 10) == 0;
    DeviceProperty = -1073741436;
    goto LABEL_27;
  }
  length = 0;
  DeviceProperty = IoGetDeviceProperty(SafePhysicalDevice, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &length);
  if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
  {
    m_ObjectSize = this->m_ObjectSize;
    v8 = 14;
    v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v9 = m_ObjectSize == 0;
    goto LABEL_27;
  }
  if ( length <= 0xFFFF )
  {
    if ( !length )
    {
      DeviceProperty = -1073741436;
      v8 = 16;
LABEL_26:
      v20 = this->m_ObjectSize;
      v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v9 = v20 == 0;
      goto LABEL_27;
    }
    v16 = retaddr;
    Tag = FxDriverGlobals->Tag;
    v23.m128i_i64[0] = 0LL;
    v23.m128i_i64[1] = 256LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v16 = 0LL;
    v18 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v23, length, Tag, v16);
    if ( !v18 )
    {
      DeviceProperty = -1073741670;
      v8 = 17;
      goto LABEL_26;
    }
    pdoName.m_UnicodeString.Buffer = (wchar_t *)v18;
    DeviceProperty = IoGetDeviceProperty(
                       SafePhysicalDevice,
                       DevicePropertyPhysicalDeviceObjectName,
                       length,
                       v18,
                       &length);
    if ( DeviceProperty < 0 )
    {
      v19 = this->m_ObjectSize;
      v8 = 18;
      v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v9 = v19 == 0;
      goto LABEL_27;
    }
    p_m_DeviceName = &pdoName;
    pdoName.m_UnicodeString.MaximumLength = length;
    pdoName.m_UnicodeString.Length = length - 2;
LABEL_22:
    DeviceProperty = FxDuplicateUnicodeString(FxDriverGlobals, SymbolicLinkName, &this->m_SymbolicLinkName);
    if ( DeviceProperty >= 0 )
    {
      DeviceProperty = IoCreateSymbolicLink(&this->m_SymbolicLinkName, &p_m_DeviceName->m_UnicodeString);
      if ( DeviceProperty >= 0 )
        goto LABEL_30;
      FxPoolFree((_QWORD *)this->m_SymbolicLinkName.Buffer);
      v8 = 20;
      this->m_SymbolicLinkName = 0LL;
    }
    else
    {
      v8 = 19;
    }
    goto LABEL_26;
  }
  v14 = this->m_ObjectSize;
  _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  DeviceProperty = -1073741675;
  if ( !v14 )
    _a2 = 0LL;
  WPP_IFR_SF_qddd(FxDriverGlobals, 0xFFu, 0x12u, 0xFu, WPP_FxDeviceKm_cpp_Traceguids, _a2, length, 0xFFFF, -1073741675);
LABEL_30:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)DeviceProperty;
}
