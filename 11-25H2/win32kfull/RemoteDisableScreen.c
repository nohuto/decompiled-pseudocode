/*
 * XREFs of RemoteDisableScreen @ 0x14022C670
 * Callers:
 *     xxxRemoteStopScreenUpdates @ 0x140126958 (xxxRemoteStopScreenUpdates.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  char v9; // si
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  void *v14; // rbx
  __int64 v15; // rdx
  _QWORD v17[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]
  _QWORD v19[3]; // [rsp+58h] [rbp-30h] BYREF

  v8 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      14,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  if ( a1 == a2 )
  {
    if ( a2 )
      *a4 = 1;
  }
  else if ( a2 )
  {
    v14 = (void *)a2[5];
    LockObjectAssignment(a3, a1);
    *a4 = 1;
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v19, v14);
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v17, a2);
    v8 = xxxSwitchDesktop((__int64)v14, (__int64)a2, 2, 0);
    if ( v18 != -1 )
    {
      PopAndFreeW32ThreadLock((__int64)v17, v15);
      v18 = -1LL;
    }
    if ( v19[2] != -1LL )
      PopAndFreeW32ThreadLock((__int64)v19, v15);
  }
  return v8;
}
