/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x140217FF8
 * Callers:
 *     UserSetMITInputCallbacks @ 0x14021D998 (UserSetMITInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     CoreMsgCreatePort @ 0x1400DA000 (CoreMsgCreatePort.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(InputExtensibilityCallout *this)
{
  char v2; // di
  int v3; // edx
  int Port; // esi
  int v5; // r8d
  char v6; // cl
  int v7; // edx
  int v8; // r8d
  bool v9; // bp
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    LODWORD(P) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 140);
  }
  P = 0LL;
  v2 = 1;
  Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
           1LL,
           &P);
  if ( Port < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v2 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v3, v5);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v2;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        2,
        11,
        (__int64)&WPP_c2f073e2c1ab327e55acdcb197bc3d24_Traceguids,
        Port);
    }
  }
  else
  {
    W32AcquirePushLockExclusiveEx((InputExtensibilityCallout *)((char *)this + 8));
    Port = CoreMsgCreatePort(v6, P, L"Kernel\\MIT\\InputPort", (void **)this + 2);
    if ( Port < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v2 = 0;
      }
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v2;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v11,
          *(_QWORD *)(v10 + 69136),
          2,
          2,
          10,
          (__int64)&WPP_c2f073e2c1ab327e55acdcb197bc3d24_Traceguids,
          Port);
      }
    }
    W32ReleasePushLockExclusiveEx((InputExtensibilityCallout *)((char *)this + 8));
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Port;
}
