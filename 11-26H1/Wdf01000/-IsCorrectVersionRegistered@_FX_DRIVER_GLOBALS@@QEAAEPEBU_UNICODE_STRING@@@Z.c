/*
 * XREFs of ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x14006D3E0
 * Callers:
 *     FxInitialize @ 0x14006C484 (FxInitialize.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x14003F12C (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140067C5C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall _FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(
        _FX_DRIVER_GLOBALS *this,
        const _UNICODE_STRING *ServiceKeyName)
{
  _DRIVER_OBJECT *m_DriverObject; // rcx
  NTSTATUS v4; // eax
  void *m_Key; // rcx
  FxAutoRegKey hWdf; // [rsp+30h] [rbp-79h] BYREF
  FxAutoRegKey hDriver; // [rsp+38h] [rbp-71h] BYREF
  unsigned int registeredMajor; // [rsp+40h] [rbp-69h] BYREF
  unsigned int registeredMinor; // [rsp+44h] [rbp-65h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+48h] [rbp-61h] BYREF
  _UNICODE_STRING wdfMajorValue; // [rsp+58h] [rbp-51h] BYREF
  _UNICODE_STRING wdfMinorValue; // [rsp+68h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-31h] BYREF
  wchar_t parametersPath_buffer[4]; // [rsp+A8h] [rbp-1h] BYREF
  wchar_t wdfMajorValue_buffer[16]; // [rsp+B0h] [rbp+7h] BYREF
  wchar_t wdfMinorValue_buffer[16]; // [rsp+D0h] [rbp+27h] BYREF

  m_DriverObject = this->DriverObject.m_DriverObject;
  wcscpy(parametersPath_buffer, L"Wdf");
  hDriver.m_Key = 0LL;
  parametersPath.Buffer = parametersPath_buffer;
  hWdf.m_Key = 0LL;
  wdfMajorValue.Buffer = wdfMajorValue_buffer;
  wcscpy(wdfMajorValue_buffer, L"WdfMajorVersion");
  wdfMinorValue.Buffer = wdfMinorValue_buffer;
  *(_QWORD *)&parametersPath.Length = 524294LL;
  *(_QWORD *)&wdfMajorValue.Length = 2097182LL;
  wcscpy(wdfMinorValue_buffer, L"WdfMinorVersion");
  *(_QWORD *)&wdfMinorValue.Length = 2097182LL;
  registeredMajor = 0;
  registeredMinor = 0;
  if ( (int)IoOpenDriverRegistryKey(m_DriverObject, 0LL, 131097LL, 0LL, &hDriver) < 0 )
    goto LABEL_4;
  ObjectAttributes.RootDirectory = hDriver.m_Key;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &parametersPath;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes);
  m_Key = hWdf.m_Key;
  if ( v4 < 0 )
  {
LABEL_5:
    if ( m_Key )
      ZwClose(m_Key);
    if ( hDriver.m_Key )
      ZwClose(hDriver.m_Key);
    return 0;
  }
  if ( FxRegKey::_QueryULong(hWdf.m_Key, &wdfMajorValue, &registeredMajor) < 0
    || registeredMajor != this->WdfBindInfo->Version.Major )
  {
LABEL_4:
    m_Key = hWdf.m_Key;
    goto LABEL_5;
  }
  if ( FxRegKey::_QueryULong(hWdf.m_Key, &wdfMinorValue, &registeredMinor) < 0
    || registeredMinor != this->WdfBindInfo->Version.Minor )
  {
    FxAutoRegKey::~FxAutoRegKey(&hWdf);
    FxAutoRegKey::~FxAutoRegKey(&hDriver);
    return 0;
  }
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hDriver.m_Key )
    ZwClose(hDriver.m_Key);
  return 1;
}
