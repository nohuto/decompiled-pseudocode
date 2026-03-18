/*
 * XREFs of ?xxxGenerateIAMKey@@YAXPEAUtagDESKTOP@@@Z @ 0x140278B68
 * Callers:
 *     xxxSetShellWindow @ 0x14025E314 (xxxSetShellWindow.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C20D0 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x140278994 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     Feature_SetShellWindow__private_IsEnabledDeviceUsageNoInline @ 0x14027A1DC (Feature_SetShellWindow__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall xxxGenerateIAMKey(struct tagDESKTOP *a1)
{
  union _LARGE_INTEGER *v1; // rdi
  __int64 v2; // rdx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  union _LARGE_INTEGER v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = (union _LARGE_INTEGER *)((char *)a1 + 272);
  if ( !(unsigned int)Feature_SetShellWindow__private_IsEnabledDeviceUsageNoInline(a1) )
  {
    v8.QuadPart = 0LL;
    if ( (unsigned int)SystemPrng(&v8, 8LL) )
    {
      v1[1] = v8;
    }
    else if ( xxxCallGenerateIAMKey(v1) < 0 )
    {
      return;
    }
    goto LABEL_7;
  }
  if ( (unsigned int)SystemPrng(&v1[1], 8LL) )
  {
LABEL_7:
    v1->LowPart = 1;
    return;
  }
  v8.LowPart = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 4642);
  v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69160),
      2,
      2,
      115,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
  }
}
