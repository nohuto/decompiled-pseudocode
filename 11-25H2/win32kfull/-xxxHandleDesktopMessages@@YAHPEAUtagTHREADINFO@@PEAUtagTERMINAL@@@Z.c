/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140114EA8
 * Callers:
 *     xxxDesktopThread @ 0x140288970 (xxxDesktopThread.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x140222B10 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebp
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  unsigned __int64 v15; // [rsp+20h] [rbp-68h]
  __int128 v16; // [rsp+50h] [rbp-38h] BYREF
  __int128 v17; // [rsp+60h] [rbp-28h]
  __int128 v18; // [rsp+70h] [rbp-18h]

  v16 = 0LL;
  v4 = 1;
  v17 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    LODWORD(v15) = 1;
    if ( !(unsigned int)xxxInternalGetMessage((__int64)&v16, v15, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)(W32GetUserSessionState(v6, v5) + 68536) )
    {
      v9 = DWORD2(v16);
      if ( DWORD2(v16) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow(a2);
    }
    v9 = DWORD2(v16);
    if ( DWORD2(v16) == 18 )
    {
      v10 = *((_DWORD *)a1 + 236);
      if ( v10 <= 1 )
        break;
    }
LABEL_6:
    if ( v9 == 796 )
    {
      if ( (_QWORD)v17 == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage((struct tagMSG *)&v16);
    }
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v4 = 0;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      8,
      22,
      (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids,
      v10);
  }
  return 0LL;
}
