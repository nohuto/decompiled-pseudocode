/*
 * XREFs of ?CreateCoreMsgPort@CoreMessagingKPort@@QEAAJXZ @ 0x1401AAC50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     CoreMsgCreatePort @ 0x1400FC7E4 (CoreMsgCreatePort.c)
 */

__int64 __fastcall CoreMessagingKPort::CreateCoreMsgPort(void **this)
{
  struct W32_PUSH_LOCK *v1; // rbx
  char v4; // di
  __int64 v5; // rdx
  int Port; // esi
  char v7; // cl
  __int64 v8; // rdx
  bool v9; // bp
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct W32_PUSH_LOCK *)(this + 1);
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  if ( *this )
  {
    ExReleasePushLockSharedEx(v1, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    ExReleasePushLockSharedEx(v1, 0LL);
    KeLeaveCriticalRegion();
    P = 0LL;
    v4 = 1;
    Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
             L"D:(A;;GA;;;SY)(A;;0x001F0000;;;WD)(A;;0x001F0000;;;AC)",
             1LL,
             &P);
    if ( Port < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v4 = 0;
      }
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v4;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          3,
          12,
          (__int64)&WPP_dcb43fac889439a026fbb51f02dc5fc0_Traceguids,
          Port);
      }
    }
    else
    {
      W32AcquirePushLockExclusiveEx(v1, 0);
      Port = CoreMsgCreatePort(v7, P, L"Kernel\\SystemCoreMessagingPort", this);
      if ( Port < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v4 = 0;
        }
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
          LOBYTE(v11) = v9;
          LOBYTE(v12) = v4;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v12,
            v11,
            *(_QWORD *)(v10 + 69144),
            2,
            3,
            11,
            (__int64)&WPP_dcb43fac889439a026fbb51f02dc5fc0_Traceguids,
            Port);
        }
      }
      W32ReleasePushLockExclusiveEx(v1, 0LL);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)Port;
  }
}
