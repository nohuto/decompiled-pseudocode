/*
 * XREFs of ?CreateCoreMsgPort@CoreMessagingKPort@@QEAAJXZ @ 0x1401CDA00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     CoreMsgCreatePort @ 0x1400DA000 (CoreMsgCreatePort.c)
 */

__int64 __fastcall CoreMessagingKPort::CreateCoreMsgPort(void **this)
{
  struct W32_PUSH_LOCK *v2; // rdi
  char v4; // bl
  int v5; // edx
  int Port; // esi
  int v7; // r8d
  char v8; // cl
  int v9; // edx
  int v10; // r8d
  bool v11; // bp
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  bool v15; // di
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct W32_PUSH_LOCK *)(this + 1);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  if ( *this )
  {
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    P = 0LL;
    v4 = 1;
    Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
             L"D:(A;;GA;;;SY)(A;;0x001F0000;;;WD)(A;;0x001F0000;;;AC)",
             1LL,
             &P);
    if ( Port < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v4 = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v7);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v4;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          3,
          12,
          (__int64)&WPP_3ccbe7d519863ea957e7d8c580b69285_Traceguids,
          Port);
      }
    }
    else
    {
      W32AcquirePushLockExclusiveEx(v2);
      Port = CoreMsgCreatePort(v8, P, L"Kernel\\SystemCoreMessagingPort", this);
      if ( Port < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v4 = 0;
        }
        v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
          LOBYTE(v13) = v11;
          LOBYTE(v14) = v4;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v14,
            v13,
            *(_QWORD *)(v12 + 69136),
            2,
            3,
            11,
            (__int64)&WPP_3ccbe7d519863ea957e7d8c580b69285_Traceguids,
            Port);
        }
      }
      W32ReleasePushLockExclusiveEx(v2);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)Port;
  }
}
