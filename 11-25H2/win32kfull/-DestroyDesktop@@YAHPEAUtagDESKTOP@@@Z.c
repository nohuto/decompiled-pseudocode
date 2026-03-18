/*
 * XREFs of ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x140242920
 * Callers:
 *     UnmapDesktop @ 0x140243FD0 (UnmapDesktop.c)
 * Callees:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B30B8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     UnpackAffectedThreadList @ 0x140151F1C (UnpackAffectedThreadList.c)
 *     _PostThreadMessage @ 0x1401AAC30 (_PostThreadMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qS @ 0x1401D31A0 (WPP_RECORDER_AND_TRACE_SF_qS.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x140202C0C (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall DestroyDesktop(_QWORD *Object, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // rbx
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  bool v14; // di
  bool v15; // bp
  const unsigned __int16 *DesktopName; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx

  v3 = Object[5];
  if ( (Object[6] & 8) != 0 )
    return 0LL;
  v5 = (_QWORD *)Object[31];
  if ( v5 )
  {
    v6 = (void *)v5[1];
    if ( v6 )
    {
      Win32FreePool(v6);
      v5[1] = 0LL;
    }
    Win32FreePool(v5);
    Object[31] = 0LL;
  }
  if ( Object == *(_QWORD **)(W32GetUserSessionState(Object, a2) + 16912) )
    UnpackAffectedThreadList(v8, v7);
  v9 = (_QWORD *)(v3 + 16);
  v10 = *(_QWORD **)(v3 + 16);
  if ( v10 )
  {
    v11 = *(_QWORD **)(v3 + 16);
    do
    {
      v10 = v11;
      if ( v11 == Object )
        break;
      v9 = v11 + 4;
      v10 = (_QWORD *)v11[4];
      v11 = v10;
    }
    while ( v10 );
  }
  if ( v10 )
  {
    LockObjectAssignment(v9, Object[4]);
    DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)Object + 4);
  }
  v12 = *(_QWORD *)(v3 + 56);
  LockObjectAssignment(Object + 4, *(_QWORD *)(v12 + 48));
  LockObjectAssignment(v12 + 48, Object);
  PostThreadMessage(*(struct tagTHREADINFO **)(v12 + 16), 0x31Cu, 2uLL, 0LL);
  *((_DWORD *)Object + 12) |= 8u;
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    DesktopName = GetDesktopName(Object, v13);
    UserSessionState = W32GetUserSessionState(v18, v17);
    LOBYTE(v20) = v15;
    LOBYTE(v21) = v14;
    WPP_RECORDER_AND_TRACE_SF_qS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v21,
      v20,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      8,
      24,
      (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids,
      (char)Object,
      (__int64)DesktopName);
  }
  return 1LL;
}
