/*
 * XREFs of ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402DB62C
 * Callers:
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1401A21F0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x140257A58 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z @ 0x140296E84 (--3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddDq @ 0x1402DCE34 (WPP_RECORDER_AND_TRACE_SF_qdddddDq.c)
 */

__int64 __fastcall ShellWindowPos::PositionWindowAsyncOld(
        __int64 a1,
        __int64 a2,
        const struct tagRECT *a3,
        int a4,
        unsigned int a5,
        int a6)
{
  struct tagTHREADINFO *v6; // rbx
  const struct tagRECT *v7; // rbp
  __int64 v8; // rdi
  struct tagWND *v9; // r14
  __int64 v10; // rdx
  char v11; // r15
  char v12; // r13
  unsigned int v13; // r12d
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  char v18; // r13
  char v19; // bl
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // r9
  const char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  void *v28; // rbx
  struct tagRECT v29; // xmm0
  __int64 v30; // rax
  bool v32; // di
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  __int64 v36; // r9
  const char *v37; // rax
  bool v38; // [rsp+80h] [rbp-58h]

  v6 = *(struct tagTHREADINFO **)(a1 + 16);
  v7 = a3;
  v8 = a2;
  v9 = (struct tagWND *)a1;
  if ( v6 == PtiCurrent(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1093);
  v11 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v13 = a5;
  v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v38;
    WPP_RECORDER_AND_TRACE_SF_qdddddDq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *(_QWORD *)(UserSessionState + 69152));
    v9 = (struct tagWND *)a1;
    v7 = a3;
    v8 = a2;
  }
  if ( (a5 & 0x10) != 0 )
  {
    v18 = RunForegroundAccessCheck((__int64)v9, 3LL);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (v17 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v17 & 8) == 0)
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v19 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(v17, WPP_GLOBAL_Control);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      v24 = *(_QWORD *)(v21 + 69152);
      v25 = "Granted";
      if ( !v18 )
        v25 = "Denied";
      WPP_RECORDER_AND_TRACE_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        v24,
        4,
        4,
        14,
        (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
        (__int64)v25);
    }
    if ( !v18 )
      return 3LL;
    v13 = a5 & 0xFFFFFFFC;
  }
  v26 = Win32AllocPoolZInit(40LL, 1886871893LL);
  v28 = (void *)v26;
  if ( v26 )
  {
    v29 = *v7;
    *(_QWORD *)(v26 + 16) = v8;
    *(_DWORD *)(v26 + 28) = v13;
    *(struct tagRECT *)v26 = v29;
    *(_DWORD *)(v26 + 24) = a4;
    *(_DWORD *)(v26 + 32) = a6;
    if ( v8 && v13 == 1 && IsRectEmptyInl(v7) )
    {
      v30 = HMValidateHandleNoSecure(v8, 1);
      if ( v30
        && (unsigned int)PostEventMessageEx(
                           *(struct tagTHREADINFO **)(v30 + 16),
                           *(struct tagQ **)(*(_QWORD *)(v30 + 16) + 464LL),
                           0x1Bu,
                           v9,
                           0,
                           0LL,
                           (__int64)v28,
                           0LL) )
      {
        goto LABEL_33;
      }
    }
    else if ( PostEventMessageWindow((struct tagTHREADINFO **)v9, 0x1Bu, 0LL, (__int64)v28) )
    {
      goto LABEL_33;
    }
    ShellWindowPos::SHELLPOSREQUEST::operator delete(v28);
  }
  v28 = 0LL;
LABEL_33:
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v11 = 0;
  }
  v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
    LOBYTE(v34) = v32;
    LOBYTE(v35) = v11;
    v36 = *(_QWORD *)(v33 + 69152);
    v37 = "Succeeded";
    if ( !v28 )
      v37 = "Failed";
    WPP_RECORDER_AND_TRACE_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v35,
      v34,
      v36,
      4,
      4,
      15,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      (__int64)v37);
  }
  return v28 == 0LL ? 2 : 0;
}
