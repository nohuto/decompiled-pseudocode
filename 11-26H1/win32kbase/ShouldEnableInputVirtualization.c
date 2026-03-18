/*
 * XREFs of ShouldEnableInputVirtualization @ 0x14021FC0C
 * Callers:
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     RIMRegQueryDWord @ 0x1400EDB14 (RIMRegQueryDWord.c)
 *     RIMIsRunningOnDesktop @ 0x1400F0800 (RIMIsRunningOnDesktop.c)
 *     HviGetHypervisorFeatures @ 0x14024A67C (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

char __fastcall ShouldEnableInputVirtualization(int a1, int a2, int a3)
{
  __int64 v3; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  char v8; // di
  char v9; // bl
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-20h] BYREF

  if ( RIMIsRunningOnDesktop(a1, a2, a3) )
  {
    if ( (unsigned int)W32GetCurrentWin32kSessionId(v3) == 1 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
      v22 = 0;
      RIMRegQueryDWord((__int64)&DestinationString, L"IsVailContainer", 0, &v22);
      v8 = v22;
      if ( (v22 & 0x1F) != 0 )
      {
        v9 = v22 & 1;
        *(_BYTE *)(W32GetUserSessionState(v6, v5, v7) + 19392) = v9;
        *(_BYTE *)(W32GetUserSessionState(v11, v10, v12) + 19393) = (v8 & 2) != 0;
        *(_BYTE *)(W32GetUserSessionState(v14, v13, v15) + 19394) = (v8 & 4) != 0;
        *(_BYTE *)(W32GetUserSessionState(v17, v16, v18) + 19395) = (v8 & 8) != 0;
        *(_BYTE *)(W32GetUserSessionState(v20, v19, v21) + 19396) = (v8 & 0x10) != 0;
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
