/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1800C1AB0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800833B0 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlQueryPackageClaims @ 0x1800C24B0 (RtlQueryPackageClaims.c)
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 *     RtlCaptureContext @ 0x180126D40 (RtlCaptureContext.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180137A98 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180137B40 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180137C60 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x180137DB0 (LdrpAppxGetRemediationRegistryKey.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  int RemediationRegistryKey; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v8[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v10[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v11)(_QWORD); // [rsp+90h] [rbp-70h]
  struct _CONTEXT ContextRecord; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v13[4]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v14; // [rsp+5F4h] [rbp+4F4h]
  int v15; // [rsp+5F8h] [rbp+4F8h]
  _BYTE v16[256]; // [rsp+640h] [rbp+540h] BYREF

  v8[1] = L"BinaryHash";
  Handle = 0LL;
  v9 = 256LL;
  v6 = 0LL;
  v5 = 0;
  v7 = 0LL;
  v8[0] = 1441812LL;
  v8[2] = 0LL;
  RemediationRegistryKey = RtlQueryPackageClaims(-4LL, v16, &v9);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetRemediationRegistryKey(a1, v16, &Handle);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetBinaryNameKeyInformation(Handle, &v6, &v7);
  if ( RemediationRegistryKey >= 0 )
  {
    memset_thunk_772440563353939046(v13, 0, 0x50uLL);
    RemediationRegistryKey = NtQueryValueKey(Handle, v8, 2LL, v13, 80, &v5);
    if ( RemediationRegistryKey >= 0 )
    {
      if ( v14 == 3 && v15 )
        LdrpAppxEtwIntegrityFailure(a1, v16, v6);
      else
        RemediationRegistryKey = -1073739509;
    }
    RtlFreeHeap_0();
  }
  NtClose(Handle);
  if ( RemediationRegistryKey < 0 )
LABEL_11:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)RemediationRegistryKey);
  if ( a1 != -1073740673 )
  {
    memset_thunk_772440563353939046(v10, 0, 0x98uLL);
    v10[0] = 101457950;
    v11 = LdrAppxHandleIntegrityFailure;
    v10[1] = 1;
    memset_thunk_772440563353939046(&ContextRecord, 0, 0x4D0uLL);
    RtlCaptureContext(&ContextRecord);
    RtlReportException(v10, &ContextRecord, 2LL);
    ZwTerminateProcess(-1LL, v10[0]);
  }
  return 3221225781LL;
}
