/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E35E8
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x14025F3B0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E3890 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E4340 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     GetScrollRequestCodeString @ 0x1402E4F04 (GetScrollRequestCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqsdl @ 0x1402E709C (WPP_RECORDER_AND_TRACE_SF_qqsdl.c)
 */

void __fastcall xxxDoScroll(
        struct tagDRAWITEMSTRUCT **a1,
        struct tagTHREADINFO **a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  unsigned __int16 v5; // r15
  unsigned __int16 v6; // r12
  bool v9; // di
  bool v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  struct tagDRAWITEMSTRUCT *v16; // r9
  __int64 v17; // rdx
  ULONG_PTR BugCheckParameter3[9]; // [rsp+70h] [rbp-48h] BYREF

  v5 = a4;
  v6 = a3;
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    GetScrollRequestCodeString(a3, a5);
    UserSessionState = W32GetUserSessionState(v12, v11);
    LOBYTE(v14) = v10;
    LOBYTE(v15) = v9;
    WPP_RECORDER_AND_TRACE_SF_qqsdl(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69160));
    v5 = a4;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a2);
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  xxxSendTransformableMessageTimeout(a2, (unsigned int)(a5 != 0) + 276, v6 | (v5 << 16), v16, 0, 0, 0LL, 1, 1);
  xxxWindowEvent(0x800Eu, (struct tagWND *)a2, (a5 != 0) - 6, 0, 1);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
}
