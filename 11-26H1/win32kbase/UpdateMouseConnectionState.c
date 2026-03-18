/*
 * XREFs of UpdateMouseConnectionState @ 0x140163FC4
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x140163F00 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     UserIsRemoteConnection @ 0x14000C100 (UserIsRemoteConnection.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMApiSetIsMouseDeviceOnIgnoreList @ 0x1400EEEBC (RIMApiSetIsMouseDeviceOnIgnoreList.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x14016C4B0 (WPP_RECORDER_AND_TRACE_SF_l.c)
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x1401C6258 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 */

__int64 UpdateMouseConnectionState()
{
  int v0; // ebp
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  char v4; // si
  char v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 i; // rdi
  int v15; // ecx
  bool v16; // bl
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 result; // rax
  int v21; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+28h] [rbp-40h]
  int v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+38h] [rbp-30h]

  v0 = 0;
  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  if ( UserIsRemoteConnection() )
  {
    v4 = 1;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v5 = 0;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v1, v3);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        2,
        10,
        (__int64)&WPP_2f1627e9cdb73d4d6f02f75a8604347d_Traceguids);
    }
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v2, v1, v3) + 16832) + 1232LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v10, 0LL);
    v4 = 1;
    for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 16832) + 1240LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( !*(_DWORD *)(i + 48)
        && !*(_WORD *)(i + 864)
        && (*(_DWORD *)(i + 168) & 0x400) == 0
        && !(unsigned int)RIMApiSetIsMouseDeviceOnIgnoreList(i) )
      {
        v0 = 1;
        break;
      }
    }
    ExReleasePushLockSharedEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  v15 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v1, v3);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v4;
    WPP_RECORDER_AND_TRACE_SF_l(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 69136),
      v21,
      v22,
      v23,
      v24,
      v0);
  }
  result = W32GetUserSessionState(v15, v1, v3);
  *(_DWORD *)(result + 16772) = (4 * v0) | *(_DWORD *)(result + 16772) & 0xFFFFFFFB;
  return result;
}
