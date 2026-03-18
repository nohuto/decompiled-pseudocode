/*
 * XREFs of ShouldEnableInputVirtualization @ 0x14018DC68
 * Callers:
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     RIMIsRunningOnDesktop @ 0x1400B29E8 (RIMIsRunningOnDesktop.c)
 *     RIMRegQueryDWord @ 0x14013BC98 (RIMRegQueryDWord.c)
 *     HviGetHypervisorFeatures @ 0x140240C1C (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

char __fastcall ShouldEnableInputVirtualization(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-20h] BYREF

  if ( RIMIsRunningOnDesktop(a1, a2) )
  {
    if ( (unsigned int)W32GetCurrentWin32kSessionId() == 1 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
      v15 = 0;
      RIMRegQueryDWord((__int64)&DestinationString, L"IsVailContainer", 0, &v15);
      v5 = v15;
      if ( (v15 & 0x1F) != 0 )
      {
        v6 = v15 & 1;
        *(_BYTE *)(W32GetUserSessionState(v4, v3) + 19360) = v6;
        *(_BYTE *)(W32GetUserSessionState(v8, v7) + 19361) = (v5 & 2) != 0;
        *(_BYTE *)(W32GetUserSessionState(v10, v9) + 19362) = (v5 & 4) != 0;
        *(_BYTE *)(W32GetUserSessionState(v12, v11) + 19363) = (v5 & 8) != 0;
        *(_BYTE *)(W32GetUserSessionState(v14, v13) + 19364) = (v5 & 0x10) != 0;
        return 1;
      }
    }
  }
  else
  {
    DestinationString = 0LL;
    HviGetHypervisorFeatures(&DestinationString);
    if ( (*(_QWORD *)&DestinationString.Length & 0x100000000000LL) != 0
      && (int)RtlIsApiSetImplemented("SchemaExt-Composable-Vail") >= 0 )
    {
      return 1;
    }
  }
  return 0;
}
