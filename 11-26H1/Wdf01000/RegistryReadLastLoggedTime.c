/*
 * XREFs of RegistryReadLastLoggedTime @ 0x140073798
 * Callers:
 *     IsLoggingEnabledAndNeeded @ 0x1400736FC (IsLoggingEnabledAndNeeded.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140067C5C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     ?_QueryQuadWord@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@@Z @ 0x14007396C (-_QueryQuadWord@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

void __fastcall RegistryReadLastLoggedTime(_FX_DRIVER_GLOBALS *DriverGlobals, _LARGE_INTEGER *LastLoggedTime)
{
  _DRIVER_OBJECT *m_DriverObject; // rcx
  NTSTATUS _a1; // eax
  unsigned __int16 v6; // r9
  FxAutoRegKey hWdf; // [rsp+30h] [rbp-59h] BYREF
  FxAutoRegKey hKey; // [rsp+38h] [rbp-51h] BYREF
  _LARGE_INTEGER value; // [rsp+40h] [rbp-49h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING valueName; // [rsp+58h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  wchar_t parametersPath_buffer[4]; // [rsp+98h] [rbp+Fh] BYREF
  wchar_t valueName_buffer[23]; // [rsp+A0h] [rbp+17h] BYREF

  wcscpy(parametersPath_buffer, L"Wdf");
  hKey.m_Key = 0LL;
  parametersPath.Buffer = parametersPath_buffer;
  wcscpy(&valueName_buffer[20], L"og");
  *(_OWORD *)valueName_buffer = *(_OWORD *)L"TimeOfLastTelemetryLog";
  valueName.Buffer = valueName_buffer;
  LastLoggedTime->QuadPart = 0LL;
  m_DriverObject = DriverGlobals->DriverObject.m_DriverObject;
  hWdf.m_Key = 0LL;
  *(_QWORD *)&parametersPath.Length = 524294LL;
  wmemcpy(&valueName_buffer[8], L"stTelemetryLog", 12);
  *(_QWORD *)&valueName.Length = 3014700LL;
  _a1 = IoOpenDriverRegistryKey(m_DriverObject, 1LL, 131097LL, 0LL, &hWdf);
  if ( _a1 < 0 )
  {
    v6 = 11;
LABEL_3:
    WPP_IFR_SF_D(DriverGlobals, 2u, 0x11u, v6, WPP_FxTelemetryKm_cpp_Traceguids, _a1);
    FxAutoRegKey::~FxAutoRegKey(&hWdf);
    FxAutoRegKey::~FxAutoRegKey(&hKey);
    return;
  }
  ObjectAttributes.RootDirectory = hWdf.m_Key;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &parametersPath;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  _a1 = ZwOpenKey(&hKey.m_Key, 0x20019u, &ObjectAttributes);
  if ( _a1 < 0 )
  {
    v6 = 12;
    goto LABEL_3;
  }
  value.QuadPart = 0LL;
  if ( FxRegKey::_QueryQuadWord(hKey.m_Key, &valueName, &value) >= 0 )
    *LastLoggedTime = value;
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
}
