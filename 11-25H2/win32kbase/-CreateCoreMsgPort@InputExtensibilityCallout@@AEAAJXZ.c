/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x14020E648
 * Callers:
 *     UserSetMITInputCallbacks @ 0x140218AC8 (UserSetMITInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     CoreMsgCreatePort @ 0x1400FC7E4 (CoreMsgCreatePort.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(InputExtensibilityCallout *this)
{
  char v2; // di
  __int64 v3; // rdx
  int Port; // esi
  char v5; // cl
  __int64 v6; // rdx
  bool v7; // bp
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  bool v11; // bl
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    LODWORD(P) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 140);
  }
  P = 0LL;
  v2 = 1;
  Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
           1LL,
           &P);
  if ( Port < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v2;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        2,
        11,
        (__int64)&WPP_3fde221f8eaf389f7474ab123d689665_Traceguids,
        Port);
    }
  }
  else
  {
    W32AcquirePushLockExclusiveEx((InputExtensibilityCallout *)((char *)this + 8), 0);
    Port = CoreMsgCreatePort(v5, P, L"Kernel\\MIT\\InputPort", (void **)this + 2);
    if ( Port < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v2 = 0;
      }
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
        LOBYTE(v9) = v7;
        LOBYTE(v10) = v2;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v9,
          *(_QWORD *)(v8 + 69144),
          2,
          2,
          10,
          (__int64)&WPP_3fde221f8eaf389f7474ab123d689665_Traceguids,
          Port);
      }
    }
    W32ReleasePushLockExclusiveEx((InputExtensibilityCallout *)((char *)this + 8), 0LL);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Port;
}
