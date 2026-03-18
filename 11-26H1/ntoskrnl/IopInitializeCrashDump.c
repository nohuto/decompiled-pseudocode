/*
 * XREFs of IopInitializeCrashDump @ 0x140793598
 * Callers:
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1407930B8 (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x140CBD560 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x14050DC74 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopLoadCrashdumpDriver @ 0x14050F1D4 (IopLoadCrashdumpDriver.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140518534 (SecureDump_GetSecureDumpSettings.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x1405C92D0 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopReadDumpRegistry @ 0x1405C9ADC (IopReadDumpRegistry.c)
 *     IopInitializeRemovePagesArray @ 0x1405D56F0 (IopInitializeRemovePagesArray.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     RtlUnicodeStringToAnsiString @ 0x14096C2C0 (RtlUnicodeStringToAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140A76B60 (ExUuidCreate.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140B39144 (FsRtlIssueFileNotificationFsctl.c)
 */

char __fastcall IopInitializeCrashDump(__int64 Handle, UNICODE_STRING *a2)
{
  NTSTATUS v4; // eax
  int CrashdumpDriver; // eax
  __int64 v7; // rdx
  int v8; // eax
  HANDLE v9; // rcx
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+38h] [rbp-41h] BYREF
  int v12; // [rsp+40h] [rbp-39h]
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v14[3]; // [rsp+60h] [rbp-19h] BYREF
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  char v17; // [rsp+80h] [rbp+7h]
  __int16 v18; // [rsp+81h] [rbp+8h]
  char v19; // [rsp+83h] [rbp+Ah]

  LODWORD(Object) = 0;
  v11 = 0LL;
  v12 = 0;
  if ( ForceDumpDisabled || !AllowCrashDump )
    return 0;
  if ( dword_140E0AA24 == -1073741811 )
  {
    v4 = ExUuidCreate(&Uuid);
    dword_140E0AA24 = v4;
    if ( v4 == 1073872982 )
    {
      dword_140E0AA24 = 0;
      v4 = 0;
    }
    if ( v4 >= 0 )
    {
      *(_QWORD *)&SourceString.Length = 5111808LL;
      SourceString.Buffer = (wchar_t *)v14;
      dword_140E0AA24 = RtlStringFromGUIDEx(&Uuid, &SourceString, 0LL);
      if ( dword_140E0AA24 >= 0 )
        dword_140E0AA24 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
    }
  }
  IopReadDumpRegistry(Handle, &Object);
  if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
    return 1;
  if ( CrashdmpImageEntry || (CrashdumpDriver = IopLoadCrashdumpDriver(), CrashdumpDriver >= 0) )
  {
    if ( (int)SecureDump_GetSecureDumpSettings((__int64)&v11) < 0 )
      return 0;
    if ( (_BYTE)v11 )
    {
      if ( !qword_140E65EB8 )
        return 0;
      v15 = HIDWORD(v11);
      v16 = v12;
      v17 = BYTE1(v11);
      v14[1] = SecureDump_Get_SecureDumpHeader;
      v14[2] = SecureDump_Encrypt_DmpData;
      v14[0] = 40LL;
      v18 = 0;
      v19 = 0;
      if ( (int)guard_dispatch_icall_no_overrides((__int64)v14, v7) < 0 )
        return 0;
    }
    SourceString = *a2;
    v8 = guard_dispatch_icall_no_overrides(Handle, (__int64)&CrashdmpDumpBlock);
    if ( v8 < 0 )
    {
      CrashdmpDumpBlock = 0LL;
      IopDumpTraceInitializeCrashDumpFailure(v8);
      return 0;
    }
    CrashdmpInitialized = 1;
    *(_DWORD *)(CrashdmpDumpBlock + 1436) = dword_140E0AA24;
    *(UUID *)(CrashdmpDumpBlock + 1440) = Uuid;
    *(STRING *)(CrashdmpDumpBlock + 1456) = DestinationString;
    v9 = *(HANDLE *)(CrashdmpDumpBlock + 1352);
    if ( !v9 )
    {
      if ( !Handle )
      {
LABEL_29:
        if ( *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
        {
          if ( UseRemovePagesArray )
            IopInitializeRemovePagesArray();
        }
        return 1;
      }
      v9 = (HANDLE)Handle;
    }
    Object = 0LL;
    if ( ObReferenceObjectByHandle(v9, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
    {
      FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)Object);
      ObfDereferenceObject(Object);
    }
    goto LABEL_29;
  }
  IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
  return 0;
}
