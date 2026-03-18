/*
 * XREFs of ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1401D2F9C
 * Callers:
 *     UnmapDesktop @ 0x1401D2ED0 (UnmapDesktop.c)
 * Callees:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     _PostThreadMessage @ 0x1401D31A0 (_PostThreadMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qS @ 0x140205F48 (WPP_RECORDER_AND_TRACE_SF_qS.c)
 *     UnpackAffectedThreadList @ 0x140219200 (UnpackAffectedThreadList.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x140232FE4 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall DestroyDesktop(char *Object, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // rbx
  void *v6; // rcx
  void **i; // rcx
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  bool v11; // di
  bool v12; // bp
  const unsigned __int16 *DesktopName; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx

  v3 = *((_QWORD *)Object + 5);
  if ( (*((_DWORD *)Object + 12) & 8) != 0 )
    return 0LL;
  v5 = (_QWORD *)*((_QWORD *)Object + 31);
  if ( v5 )
  {
    v6 = (void *)v5[1];
    if ( v6 )
    {
      Win32FreePool(v6);
      v5[1] = 0LL;
    }
    Win32FreePool(v5);
    *((_QWORD *)Object + 31) = 0LL;
  }
  if ( Object == *(char **)(W32GetUserSessionState(Object, a2) + 16904) )
    UnpackAffectedThreadList();
  for ( i = (void **)(v3 + 16); ; i = (void **)(v8 + 32) )
  {
    v8 = (char *)*i;
    if ( !*i || v8 == Object )
      break;
  }
  if ( *i )
  {
    LockObjectAssignment(i, *((_QWORD *)Object + 4));
    DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)Object + 4, v9);
  }
  v10 = *(_QWORD *)(v3 + 24);
  LockObjectAssignment(Object + 32, *(_QWORD *)(v10 + 48));
  LockObjectAssignment(v10 + 48, Object);
  PostThreadMessage(*(struct tagTHREADINFO **)(v10 + 16), 0x31Cu, 2uLL, 0LL);
  *((_DWORD *)Object + 12) |= 8u;
  v11 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    DesktopName = GetDesktopName(Object);
    UserSessionState = W32GetUserSessionState(v15, v14);
    LOBYTE(v17) = v12;
    LOBYTE(v18) = v11;
    WPP_RECORDER_AND_TRACE_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      8,
      24,
      (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids,
      (char)Object,
      (__int64)DesktopName);
  }
  return 1LL;
}
