/*
 * XREFs of GetEnhancedVerifierOptions @ 0x14003D1A8
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x140077428 (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x14003F12C (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140067C5C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

void __fastcall GetEnhancedVerifierOptions(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _DRIVER_OBJECT *m_DriverObject; // rcx
  unsigned int value; // [rsp+30h] [rbp-59h] BYREF
  FxAutoRegKey hWdf; // [rsp+38h] [rbp-51h] BYREF
  FxAutoRegKey hKey; // [rsp+40h] [rbp-49h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING valueName; // [rsp+58h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  wchar_t parametersPath_buffer[4]; // [rsp+98h] [rbp+Fh] BYREF
  wchar_t valueName_buffer[24]; // [rsp+A0h] [rbp+17h] BYREF

  m_DriverObject = FxDriverGlobals->DriverObject.m_DriverObject;
  wcscpy(parametersPath_buffer, L"Wdf");
  value = 0;
  parametersPath.Buffer = parametersPath_buffer;
  hKey.m_Key = 0LL;
  wcscpy(valueName_buffer, L"EnhancedVerifierOptions");
  valueName.Buffer = valueName_buffer;
  hWdf.m_Key = 0LL;
  *(_QWORD *)&parametersPath.Length = 524294LL;
  *(_QWORD *)&valueName.Length = 3145774LL;
  if ( (int)IoOpenDriverRegistryKey(m_DriverObject, 0LL, 131097LL, 0LL, &hWdf) < 0
    || (ObjectAttributes.RootDirectory = hWdf.m_Key,
        *(_QWORD *)&ObjectAttributes.Length = 48LL,
        ObjectAttributes.ObjectName = &parametersPath,
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&hKey.m_Key, 0x20019u, &ObjectAttributes) < 0) )
  {
    FxAutoRegKey::~FxAutoRegKey(&hWdf);
    FxAutoRegKey::~FxAutoRegKey(&hKey);
  }
  else
  {
    if ( FxRegKey::_QueryULong(hKey.m_Key, &valueName, &value) >= 0 )
      FxDriverGlobals->FxEnhancedVerifierOptions = value;
    if ( hWdf.m_Key )
      ZwClose(hWdf.m_Key);
    if ( hKey.m_Key )
      ZwClose(hKey.m_Key);
  }
}
