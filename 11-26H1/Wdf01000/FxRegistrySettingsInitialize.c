/*
 * XREFs of FxRegistrySettingsInitialize @ 0x14006C5C8
 * Callers:
 *     FxInitialize @ 0x14006C484 (FxInitialize.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x14003F12C (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14004BEC0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     FxOverrideDefaultVerifierSettings @ 0x14006D37C (FxOverrideDefaultVerifierSettings.c)
 *     ?SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z @ 0x14006D5E0 (-SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z.c)
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1400963E8 (FxDriverGlobalsInitializeDebugExtension.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall FxRegistrySettingsInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *WindowsVerifierOn,
        unsigned __int8 a3)
{
  unsigned int v3; // ebx
  _DRIVER_OBJECT *m_DriverObject; // rcx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  unsigned int v10; // eax
  bool v11; // zf
  _FX_DRIVER_GLOBALS *v12; // rcx
  unsigned int v13; // edx
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  _FX_DRIVER_GLOBALS *v17; // rcx
  _FX_DRIVER_GLOBALS *v18; // rcx
  unsigned int zero; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int timeoutValue; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int allocateFailValue; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int verifierOnValue; // [rsp+3Ch] [rbp-C4h] BYREF
  FxAutoRegKey hWdf; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int trackDriverForMiniDumpLog; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int requestParentOptimizationOn; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int defaultTrue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int verboseValue; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int verifyDownlevelValue; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int forceLogsInMiniDump; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int dsfValue; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int removeLockOptionFlags; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int cxFileCleanupCloseV2; // [rsp+68h] [rbp-98h] BYREF
  unsigned int max; // [rsp+6Ch] [rbp-94h] BYREF
  FxAutoRegKey hDriver; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING ValueName; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING timeoutName; // [rsp+98h] [rbp-68h] BYREF
  _RTL_QUERY_REGISTRY_TABLE paramTable[11]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t parametersPath_buffer[4]; // [rsp+320h] [rbp+220h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+328h] [rbp+228h] BYREF
  __int64 v41; // [rsp+358h] [rbp+258h]
  wchar_t v42; // [rsp+360h] [rbp+260h]
  wchar_t timeoutName_buffer[40]; // [rsp+370h] [rbp+270h] BYREF

  v3 = a3;
  verifierOnValue = 0;
  wcscpy(parametersPath_buffer, L"Wdf");
  m_DriverObject = FxDriverGlobals->DriverObject.m_DriverObject;
  parametersPath.Buffer = parametersPath_buffer;
  verifyDownlevelValue = 0;
  verboseValue = 0;
  allocateFailValue = 0;
  forceLogsInMiniDump = 0;
  trackDriverForMiniDumpLog = 0;
  requestParentOptimizationOn = 0;
  dsfValue = 0;
  removeLockOptionFlags = 0;
  zero = 0;
  max = -1;
  defaultTrue = 1;
  cxFileCleanupCloseV2 = 0;
  hDriver.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  *(_QWORD *)&parametersPath.Length = 524294LL;
  if ( (int)IoOpenDriverRegistryKey(m_DriverObject, 0LL, 131097LL, 0LL, &hDriver) < 0
    || (ObjectAttributes.RootDirectory = hDriver.m_Key,
        *(_QWORD *)&ObjectAttributes.Length = 48LL,
        ObjectAttributes.ObjectName = &parametersPath,
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) < 0) )
  {
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v6, 9u) )
    {
      _FX_DRIVER_GLOBALS::SetVerifierState(v17, v3);
      if ( FxDriverGlobals->FxVerifierOn )
        FxDriverGlobalsInitializeDebugExtension(v18, 0LL);
    }
  }
  else
  {
    memset(paramTable, 0, sizeof(paramTable));
    allocateFailValue = -1;
    paramTable[0].Name = L"VerboseOn";
    paramTable[0].DefaultLength = 4;
    paramTable[0].EntryContext = &verboseValue;
    paramTable[1].DefaultLength = 4;
    paramTable[0].DefaultData = &zero;
    paramTable[0].Flags = 288;
    paramTable[1].Name = L"VerifierAllocateFailCount";
    paramTable[0].DefaultType = 0x4000000;
    paramTable[1].EntryContext = &allocateFailValue;
    paramTable[1].Flags = 288;
    paramTable[1].DefaultData = &max;
    paramTable[1].DefaultType = 0x4000000;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v7, 9u) )
      verifierOnValue = v3;
    paramTable[2].Name = L"VerifierOn";
    paramTable[2].Flags = v8;
    paramTable[2].EntryContext = &verifierOnValue;
    paramTable[3].Flags = v8;
    paramTable[2].DefaultData = &verifierOnValue;
    paramTable[3].Name = L"VerifyDownLevel";
    paramTable[3].EntryContext = &verifyDownlevelValue;
    paramTable[3].DefaultData = &zero;
    paramTable[4].Name = L"ForceLogsInMiniDump";
    paramTable[4].EntryContext = &forceLogsInMiniDump;
    paramTable[4].DefaultData = &zero;
    paramTable[5].Name = L"TrackDriverForMiniDumpLog";
    paramTable[5].EntryContext = &trackDriverForMiniDumpLog;
    paramTable[5].DefaultData = &defaultTrue;
    paramTable[6].Name = L"RequestParentOptimizationOn";
    paramTable[6].EntryContext = &requestParentOptimizationOn;
    paramTable[6].DefaultData = &defaultTrue;
    paramTable[7].Name = L"DsfOn";
    paramTable[7].EntryContext = &dsfValue;
    paramTable[7].DefaultData = &zero;
    paramTable[8].Name = L"RemoveLockOptionFlags";
    paramTable[8].EntryContext = &removeLockOptionFlags;
    paramTable[8].DefaultData = &zero;
    paramTable[9].Name = L"CxFileCleanupCloseV2";
    paramTable[9].EntryContext = &cxFileCleanupCloseV2;
    paramTable[4].Flags = v8;
    paramTable[5].Flags = v8;
    paramTable[6].Flags = v8;
    paramTable[7].Flags = v8;
    paramTable[8].Flags = v8;
    paramTable[9].Flags = v8;
    paramTable[9].DefaultData = &zero;
    paramTable[2].DefaultType = v9;
    paramTable[2].DefaultLength = 4;
    paramTable[3].DefaultType = v9;
    paramTable[3].DefaultLength = 4;
    paramTable[4].DefaultType = v9;
    paramTable[4].DefaultLength = 4;
    trackDriverForMiniDumpLog = 1;
    paramTable[5].DefaultType = v9;
    paramTable[5].DefaultLength = 4;
    requestParentOptimizationOn = 1;
    paramTable[6].DefaultType = v9;
    paramTable[6].DefaultLength = 4;
    paramTable[7].DefaultType = v9;
    paramTable[7].DefaultLength = 4;
    paramTable[8].DefaultType = v9;
    paramTable[8].DefaultLength = 4;
    paramTable[9].DefaultType = v9;
    paramTable[9].DefaultLength = 4;
    if ( (int)RtlQueryRegistryValuesEx(3221225472LL, hWdf.m_Key, paramTable, 0LL, 0LL) >= 0 )
    {
      FxDriverGlobals->FxVerboseOn = verboseValue != 0;
      v10 = -1;
      if ( allocateFailValue != -1 )
        v10 = allocateFailValue;
      v11 = verifierOnValue == 0;
      FxDriverGlobals->WdfVerifierAllocateFailCount = v10;
      _FX_DRIVER_GLOBALS::SetVerifierState(FxDriverGlobals, !v11);
      if ( FxDriverGlobals->FxVerifierOn )
        FxDriverGlobalsInitializeDebugExtension(v12, hWdf.m_Key);
      FxDriverGlobals->FxVerifyDownlevel = verifyDownlevelValue != 0;
      FxOverrideDefaultVerifierSettings(hWdf.m_Key, (wchar_t *)L"VerifyOn", &FxDriverGlobals->FxVerifyOn);
      if ( FxDriverGlobals->FxVerifyOn )
        FxDriverGlobals->Public.DriverFlags |= 4u;
      FxOverrideDefaultVerifierSettings(
        hWdf.m_Key,
        (wchar_t *)L"DbgBreakOnError",
        &FxDriverGlobals->FxVerifierDbgBreakOnError);
      FxOverrideDefaultVerifierSettings(
        hWdf.m_Key,
        (wchar_t *)L"DbgBreakOnDeviceStateError",
        &FxDriverGlobals->FxVerifierDbgBreakOnDeviceStateError);
      if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      {
        ObjectAttributes = *(_OBJECT_ATTRIBUTES *)L"DbgWaitForSignalTimeoutInSec";
        v42 = aDbgwaitforsign[28];
        timeoutValue = 0;
        *(_QWORD *)&ValueName.Length = 3801144LL;
        ValueName.Buffer = (wchar_t *)&ObjectAttributes;
        v41 = *(_QWORD *)L"nSec";
        if ( FxRegKey::_QueryULong(hWdf.m_Key, &ValueName, &timeoutValue) >= 0 )
          FxDriverGlobals->FxVerifierDbgWaitForSignalTimeoutInSec = timeoutValue;
      }
      wcscpy(timeoutName_buffer, L"DbgWaitForWakeInterruptIsrTimeoutInSec");
      timeoutValue = 0;
      *(_QWORD *)&timeoutName.Length = 5111884LL;
      timeoutName.Buffer = timeoutName_buffer;
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, v13, 0xDu)
        && FxRegKey::_QueryULong(hWdf.m_Key, &timeoutName, &timeoutValue) >= 0 )
      {
        FxDriverGlobals->DbgWaitForWakeInterruptIsrTimeoutInSec = timeoutValue;
      }
      v11 = trackDriverForMiniDumpLog == 0;
      FxDriverGlobals->FxForceLogsInMiniDump = forceLogsInMiniDump != 0;
      v14 = !v11;
      v11 = requestParentOptimizationOn == 0;
      FxDriverGlobals->FxTrackDriverForMiniDumpLog = v14;
      v15 = !v11;
      v11 = dsfValue == 0;
      FxDriverGlobals->FxRequestParentOptimizationOn = v15;
      v16 = !v11;
      v11 = cxFileCleanupCloseV2 == 0;
      FxDriverGlobals->FxDsfOn = v16;
      FxDriverGlobals->RemoveLockOptionFlags = removeLockOptionFlags;
      FxDriverGlobals->CxFileCleanupCloseV2 = !v11;
    }
  }
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hDriver.m_Key )
    ZwClose(hDriver.m_Key);
}
