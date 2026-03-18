/*
 * XREFs of ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x14001CE90
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x14001B8C8 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140018EB8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x14003F1C0 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x140054FF4 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     GetNameFromPath @ 0x140075728 (GetNameFromPath.c)
 *     ?IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z @ 0x1400792A8 (-IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z.c)
 *     ?OpenServiceKey@CUmdfSvcConfig@@QEAAJPEBGKPEAPEAX@Z @ 0x140079508 (-OpenServiceKey@CUmdfSvcConfig@@QEAAJPEBGKPEAPEAX@Z.c)
 *     WPP_IFR_SF_Zd @ 0x14007F05C (WPP_IFR_SF_Zd.c)
 *     ?GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z @ 0x14007FB9C (-GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x140083830 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

char __fastcall FxCompanionLibrary::IsCompanionRequiredForDevice(
        FxCompanionLibrary *this,
        FxDevice *Device,
        const wchar_t **CompanionName)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  char v6; // r12
  char v7; // r13
  NTSTATUS _a1; // eax
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
  NTSTATUS v12; // eax
  unsigned __int8 v13; // dl
  CUmdfSvcConfig *v14; // rcx
  unsigned int Tag; // ecx
  void *v16; // rax
  void *v17; // r15
  signed int IsCompanionSecure; // eax
  unsigned int v19; // r8d
  unsigned __int16 v20; // r9
  int v21; // eax
  unsigned __int16 v22; // r9
  FxPropertyType traceGuid; // [rsp+20h] [rbp-E0h]
  unsigned __int8 secureCompanionFromInf[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int dataLength; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int dataType; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int propertyType; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int devCapSecureDevice; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int requiredSize; // [rsp+64h] [rbp-9Ch] BYREF
  FxAutoRegKey kmdfSvcKey; // [rsp+68h] [rbp-98h] BYREF
  FxAutoRegKey deviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  _WDF_DEVICE_PROPERTY_DATA deviceData; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int128 v34; // [rsp+A0h] [rbp-60h]
  FxAutoRegKey companionRegKey; // [rsp+B0h] [rbp-50h] BYREF
  _UNICODE_STRING companionServiceListKeyName; // [rsp+B8h] [rbp-48h] BYREF
  void *companionSvcKey; // [rsp+C8h] [rbp-38h] BYREF
  _UNICODE_STRING companionKeyName; // [rsp+D0h] [rbp-30h] BYREF
  _UNICODE_STRING serviceNameUnicodeString; // [rsp+E0h] [rbp-20h] BYREF
  CUmdfSvcConfig umdfSvcConfig; // [rsp+F0h] [rbp-10h] BYREF
  FxDevice *v41; // [rsp+100h] [rbp+0h]
  wchar_t companionServiceListKeyName_buffer[24]; // [rsp+108h] [rbp+8h] BYREF
  wchar_t companionKeyName_buffer[32]; // [rsp+138h] [rbp+38h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  m_Globals = Device->m_Globals;
  serviceNameUnicodeString = 0LL;
  companionKeyName.Buffer = companionKeyName_buffer;
  wcscpy(companionKeyName_buffer, L"WUDF\\CompanionConfigurations");
  v41 = Device;
  deviceRegKey.m_Key = 0LL;
  companionRegKey.m_Key = 0LL;
  kmdfSvcKey.m_Key = 0LL;
  companionSvcKey = 0LL;
  wcscpy(companionServiceListKeyName_buffer, L"CompanionServiceList");
  *(_QWORD *)&companionKeyName.Length = 3801144LL;
  *(_QWORD *)&companionServiceListKeyName.Length = 2752552LL;
  companionServiceListKeyName.Buffer = companionServiceListKeyName_buffer;
  requiredSize = 0;
  dataLength = 0;
  dataType = 0;
  umdfSvcConfig.m_Key = 0LL;
  umdfSvcConfig.m_AutoClose = 1;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
  secureCompanionFromInf[0] = 0;
  devCapSecureDevice = 0;
  propertyType = 0;
  v6 = 0;
  v7 = 0;
  _a1 = IoOpenDeviceRegistryKey(SafePhysicalDevice, 1u, 0x20000u, &deviceRegKey.m_Key);
  if ( _a1 >= 0 )
  {
    deviceData.PropertyKey = (const _DEVPROPKEY *)deviceRegKey.m_Key;
    *(_QWORD *)&deviceData.Size = 48LL;
    *(_QWORD *)&deviceData.Lcid = &companionKeyName;
    v33 = 576LL;
    v34 = 0LL;
    _a1 = ZwOpenKey(&companionRegKey.m_Key, 0x80000000, (POBJECT_ATTRIBUTES)&deviceData);
    if ( _a1 < 0 )
    {
      if ( _a1 == -1073741772 )
        goto LABEL_5;
      v9 = 23;
      goto LABEL_3;
    }
    GetNameFromPath(&m_Globals->Driver->m_RegistryPath, &serviceNameUnicodeString);
    if ( !serviceNameUnicodeString.Length )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0x18u, WPP_FxCompanionLibrary_cpp_Traceguids);
      goto LABEL_5;
    }
    deviceData.PropertyKey = (const _DEVPROPKEY *)companionRegKey.m_Key;
    *(_QWORD *)&deviceData.Size = 48LL;
    *(_QWORD *)&deviceData.Lcid = &serviceNameUnicodeString;
    v33 = 576LL;
    v34 = 0LL;
    v12 = ZwOpenKey(&kmdfSvcKey.m_Key, 0x80000000, (POBJECT_ATTRIBUTES)&deviceData);
    if ( v12 < 0 )
    {
      if ( v12 != -1073741772 )
        WPP_IFR_SF_Zd(
          m_Globals,
          v13,
          0xCu,
          0x19u,
          WPP_FxCompanionLibrary_cpp_Traceguids,
          &serviceNameUnicodeString,
          v12);
      goto LABEL_5;
    }
    _a1 = CUmdfSvcConfig::GetSecureSoftwareDeviceTag(v14, deviceRegKey.m_Key, &requiredSize);
    if ( _a1 >= 0 )
    {
      WPP_IFR_SF_(m_Globals, 4u, 0x11u, 0x1Au, WPP_FxCompanionLibrary_cpp_Traceguids);
      v7 = 1;
    }
    else if ( _a1 != -1073741772 )
    {
      v9 = 27;
      goto LABEL_32;
    }
    _a1 = FxRegKey::_QueryValue(m_Globals, kmdfSvcKey.m_Key, &companionServiceListKeyName, 0, 0LL, &dataLength, 0LL);
    if ( (int)(_a1 + 0x80000000) >= 0 && _a1 != -2147483643 )
    {
      v9 = 28;
LABEL_32:
      v10 = 17;
      goto LABEL_4;
    }
    Tag = m_Globals->Tag;
    v16 = retaddr;
    *(_QWORD *)&deviceData.Size = 0LL;
    deviceData.PropertyKey = (const _DEVPROPKEY *)256;
    if ( !m_Globals->FxPoolTrackingOn )
      v16 = 0LL;
    v17 = FxPoolAllocator(
            m_Globals,
            &m_Globals->FxPoolFrameworks,
            (FxPoolTypeOrPoolFlags *)&deviceData,
            dataLength,
            Tag,
            v16);
    if ( !v17 )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0x11u, 0x1Du, WPP_FxCompanionLibrary_cpp_Traceguids, 0xC000009A);
      goto LABEL_5;
    }
    IsCompanionSecure = FxRegKey::_QueryValue(
                          m_Globals,
                          kmdfSvcKey.m_Key,
                          &companionServiceListKeyName,
                          dataLength,
                          v17,
                          &dataLength,
                          &dataType);
    if ( IsCompanionSecure >= 0 && dataType == 7 )
    {
      if ( FxRegKey::_VerifyMultiSzString(m_Globals, &companionServiceListKeyName, (wchar_t *)v17, dataLength) < 0 )
      {
$exit_0:
        *CompanionName = 0LL;
        goto LABEL_55;
      }
      IsCompanionSecure = CUmdfSvcConfig::OpenServiceKey(&umdfSvcConfig, (const wchar_t *)v17, v19, &companionSvcKey);
      if ( IsCompanionSecure < 0 )
      {
        v20 = 31;
      }
      else
      {
        IsCompanionSecure = CUmdfSvcConfig::IsCompanionSecure(companionSvcKey, secureCompanionFromInf);
        if ( IsCompanionSecure >= 0 )
        {
          if ( !v7 && secureCompanionFromInf[0] )
          {
            deviceData.PropertyKey = &DEVPKEY_Device_Capabilities;
            *(_QWORD *)&deviceData.Size = 24LL;
            *(_QWORD *)&deviceData.Lcid = 0LL;
            v21 = FxDevice::_QueryPropertyEx(
                    m_Globals,
                    0LL,
                    v41,
                    &deviceData,
                    traceGuid,
                    4u,
                    &devCapSecureDevice,
                    &requiredSize,
                    &propertyType);
            if ( v21 < 0 )
            {
              v22 = 33;
LABEL_48:
              WPP_IFR_SF_D(m_Globals, 2u, 0x11u, v22, WPP_FxCompanionLibrary_cpp_Traceguids, v21);
LABEL_51:
              *CompanionName = 0LL;
LABEL_55:
              FxPoolFree(v17);
              goto LABEL_6;
            }
            v21 = propertyType;
            if ( propertyType != 7 )
            {
              v22 = 34;
              goto LABEL_48;
            }
            if ( (devCapSecureDevice & 0x400) == 0 )
            {
              WPP_IFR_SF_(m_Globals, 4u, 0x11u, 0x23u, WPP_FxCompanionLibrary_cpp_Traceguids);
              goto LABEL_51;
            }
          }
          v6 = 1;
          *CompanionName = (const wchar_t *)v17;
          goto LABEL_6;
        }
        v20 = 32;
      }
    }
    else
    {
      v20 = 30;
    }
    WPP_IFR_SF_D(m_Globals, 2u, 0x11u, v20, WPP_FxCompanionLibrary_cpp_Traceguids, IsCompanionSecure);
    goto $exit_0;
  }
  v9 = 22;
LABEL_3:
  v10 = 12;
LABEL_4:
  WPP_IFR_SF_D(m_Globals, 2u, v10, v9, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
LABEL_5:
  *CompanionName = 0LL;
LABEL_6:
  if ( umdfSvcConfig.m_AutoClose && umdfSvcConfig.m_Key )
    ZwClose(umdfSvcConfig.m_Key);
  if ( kmdfSvcKey.m_Key )
    ZwClose(kmdfSvcKey.m_Key);
  if ( companionRegKey.m_Key )
    ZwClose(companionRegKey.m_Key);
  if ( deviceRegKey.m_Key )
    ZwClose(deviceRegKey.m_Key);
  return v6;
}
