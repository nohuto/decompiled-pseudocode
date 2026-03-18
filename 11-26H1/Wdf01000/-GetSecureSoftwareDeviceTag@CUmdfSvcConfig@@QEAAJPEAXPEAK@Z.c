/*
 * XREFs of ?GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z @ 0x14007FB9C
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x14001CE90 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x140079330 (-_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

__int64 __fastcall CUmdfSvcConfig::GetSecureSoftwareDeviceTag(
        CUmdfSvcConfig *this,
        void *DeviceKey,
        unsigned int *SoftwareDeviceTag)
{
  NTSTATUS v4; // ebx
  unsigned int swDeviceTag; // [rsp+20h] [rbp-49h] BYREF
  void *hWudfKey; // [rsp+28h] [rbp-41h] BYREF
  _UNICODE_STRING wudfKeyName; // [rsp+30h] [rbp-39h] BYREF
  _UNICODE_STRING softwareDeviceTagKeyName; // [rsp+40h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  wchar_t wudfKeyName_buffer[8]; // [rsp+80h] [rbp+17h] BYREF
  wchar_t softwareDeviceTagKeyName_buffer[20]; // [rsp+90h] [rbp+27h] BYREF

  wcscpy(wudfKeyName_buffer, L"WUDF");
  wudfKeyName.Buffer = wudfKeyName_buffer;
  softwareDeviceTagKeyName.Buffer = softwareDeviceTagKeyName_buffer;
  wcscpy(softwareDeviceTagKeyName_buffer, L"SoftwareDeviceTag");
  ObjectAttributes.RootDirectory = DeviceKey;
  ObjectAttributes.ObjectName = &wudfKeyName;
  swDeviceTag = 0;
  *(_QWORD *)&wudfKeyName.Length = 655368LL;
  *(_QWORD *)&softwareDeviceTagKeyName.Length = 2359330LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  hWudfKey = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&hWudfKey, 0x20019u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v4 = CUmdfSvcConfig::_QueryULong(hWudfKey, &softwareDeviceTagKeyName, &swDeviceTag);
    if ( v4 >= 0 )
      *SoftwareDeviceTag = swDeviceTag;
  }
  if ( hWudfKey )
    ZwClose(hWudfKey);
  return (unsigned int)v4;
}
