/*
 * XREFs of ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C1D24
 * Callers:
 *     NtUserShellSetWindowPos @ 0x1402A1990 (NtUserShellSetWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x14018D9E0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x14021E418 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z @ 0x14026F300 (--3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddDq @ 0x1402C3780 (WPP_RECORDER_AND_TRACE_SF_qdddddDq.c)
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
  LARGE_INTEGER *v9; // r14
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
  __int64 v30; // rdx
  __int64 v31; // rax
  bool v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // r9
  const char *v38; // rax
  bool v39; // [rsp+80h] [rbp-58h]

  v6 = *(struct tagTHREADINFO **)(a1 + 16);
  v7 = a3;
  v8 = a2;
  v9 = (LARGE_INTEGER *)a1;
  if ( v6 == PtiCurrent(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1092);
  v11 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v12 = 0;
  }
  v13 = a5;
  v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v39;
    WPP_RECORDER_AND_TRACE_SF_qdddddDq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v16,
      *(_QWORD *)(UserSessionState + 69160));
    v9 = (LARGE_INTEGER *)a1;
    v7 = a3;
    v8 = a2;
  }
  if ( (a5 & 0x10) != 0 )
  {
    v18 = RunForegroundAccessCheck((__int64)v9, 3LL);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v17 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v17 & 8) == 0)
      || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v19 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(v17, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      v24 = *(_QWORD *)(v21 + 69160);
      v25 = "Granted";
      if ( !v18 )
        v25 = "Denied";
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v23,
        v22,
        v24,
        4,
        4,
        14,
        (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
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
    *(_DWORD *)(v26 + 32) = a6;
    *(struct tagRECT *)v26 = v29;
    *(_DWORD *)(v26 + 24) = a4;
    if ( v8 && v13 == 1 && IsRectEmptyInl(v7) )
    {
      LOBYTE(v30) = 1;
      v31 = HMValidateHandleNoSecure(v8, v30);
      if ( v31
        && (unsigned int)PostEventMessageEx(
                           *(struct tagTHREADINFO **)(v31 + 16),
                           *(struct tagQ **)(*(_QWORD *)(v31 + 16) + 472LL),
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
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v11 = 0;
  }
  v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
    LOBYTE(v35) = v33;
    LOBYTE(v36) = v11;
    v37 = *(_QWORD *)(v34 + 69160);
    v38 = "Succeeded";
    if ( !v28 )
      v38 = "Failed";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v36,
      v35,
      v37,
      4,
      4,
      15,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      (__int64)v38);
  }
  return v28 == 0LL ? 2 : 0;
}
