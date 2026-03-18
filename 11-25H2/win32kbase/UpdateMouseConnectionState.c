/*
 * XREFs of UpdateMouseConnectionState @ 0x14012F3A8
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x14012F2E0 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserIsRemoteConnection @ 0x14007F600 (UserIsRemoteConnection.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400B1910 (RIMApiSetIsMouseDeviceOnIgnoreList.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x140132920 (WPP_RECORDER_AND_TRACE_SF_l.c)
 *     Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline @ 0x1401B4F6C (Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 UpdateMouseConnectionState()
{
  int v0; // ebp
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct W32_PUSH_LOCK *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  __int64 i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // bl
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 j; // rdi
  void *v18; // rcx
  bool v19; // bl
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 result; // rax
  int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+28h] [rbp-40h]
  int v26; // [rsp+30h] [rbp-38h]
  int v27; // [rsp+38h] [rbp-30h]

  v0 = 0;
  if ( !(unsigned int)Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v2, v1) + 16840) + 1232LL);
    W32AcquirePushLockSharedEx(v3, 0);
    v6 = 1;
    for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 16840) + 1240LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( !*(_DWORD *)(i + 48)
        && !*(_WORD *)(i + 864)
        && (*(_DWORD *)(i + 168) & 0x400) == 0
        && !(unsigned int)RIMApiSetIsMouseDeviceOnIgnoreList(i) )
      {
        goto LABEL_26;
      }
    }
LABEL_27:
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_28;
  }
  if ( !UserIsRemoteConnection(v2, v1) )
  {
    v3 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 16840) + 1232LL);
    W32AcquirePushLockSharedEx(v3, 0);
    v6 = 1;
    for ( j = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 16840) + 1240LL); j; j = *(_QWORD *)(j + 56) )
    {
      if ( !*(_DWORD *)(j + 48)
        && !*(_WORD *)(j + 864)
        && (*(_DWORD *)(j + 168) & 0x400) == 0
        && !(unsigned int)RIMApiSetIsMouseDeviceOnIgnoreList(j) )
      {
LABEL_26:
        v0 = 1;
        goto LABEL_27;
      }
    }
    goto LABEL_27;
  }
  v6 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v10 = 0;
  }
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      10,
      (__int64)&WPP_2b15afcf479f3f86221c34eb2f24255f_Traceguids);
  }
LABEL_28:
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v6 = 0;
  }
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v6;
    WPP_RECORDER_AND_TRACE_SF_l(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 69144),
      v24,
      v25,
      v26,
      v27,
      v0);
  }
  result = W32GetUserSessionState(v18, v8);
  *(_DWORD *)(result + 16780) = (4 * v0) | *(_DWORD *)(result + 16780) & 0xFFFFFFFB;
  return result;
}
