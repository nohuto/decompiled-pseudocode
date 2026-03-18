/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x140177CAC
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x140177C10 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14003874C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14005F618 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x140060460 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1400608E0 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     PhkFirstValid @ 0x1400C5E60 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     TransitionCursorSuppressionState @ 0x140123E50 (TransitionCursorSuppressionState.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     UsingPenCursors @ 0x14017BE04 (UsingPenCursors.c)
 *     RawInputRequestedForMouse @ 0x14017F49C (RawInputRequestedForMouse.c)
 *     EditionPostRawMouseInputMessage @ 0x1402386D0 (EditionPostRawMouseInputMessage.c)
 *     ?RestoreMouseCursors@@YAXXZ @ 0x1402A54B4 (-RestoreMouseCursors@@YAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        char a8,
        LARGE_INTEGER *a9)
{
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  char v19; // r15
  unsigned int v20; // r14d
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 UserSessionState; // rax
  __int64 v25; // rdx
  struct tagTHREADINFO *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v33; // zf
  __int64 v34; // rcx
  unsigned int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  const struct tagPOINT *v43; // r15
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int y; // ebx
  unsigned int x; // edi
  CursorApiRouter *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int32 v65; // ebx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 *QuadPart; // [rsp+58h] [rbp-79h] BYREF
  __int64 Valid; // [rsp+60h] [rbp-71h]
  __int64 *v72; // [rsp+68h] [rbp-69h] BYREF
  void *v73; // [rsp+70h] [rbp-61h]
  _WORD v74[2]; // [rsp+78h] [rbp-59h] BYREF
  int v75; // [rsp+7Ch] [rbp-55h]
  int v76; // [rsp+80h] [rbp-51h]
  int v77; // [rsp+84h] [rbp-4Dh]
  int v78; // [rsp+88h] [rbp-49h]
  int v79; // [rsp+8Ch] [rbp-45h]
  _DWORD v80[2]; // [rsp+90h] [rbp-41h] BYREF
  void *v81; // [rsp+98h] [rbp-39h]
  __int64 v82; // [rsp+A0h] [rbp-31h]
  _DWORD v83[6]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-11h]

  v73 = a4;
  v10 = 1;
  QuadPart = (__int64 *)KeQueryPerformanceCounter(0LL).QuadPart;
  v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18648);
  v17 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 18648) + 504LL);
  v18 = ((unsigned __int16)*(_DWORD *)(v13 + 720) | (unsigned __int16)*(_DWORD *)(v17 + 16)) & 0x8000;
  if ( !a5 || (v19 = 1, !(unsigned int)RawInputRequestedForMouse()) )
    v19 = 0;
  v20 = 2;
  if ( v18 || v19 )
  {
    EnterCrit(1LL, 0LL);
    if ( v18 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v72, "LowLevelMouseMoveHook", 0LL);
      v22 = a6;
      v83[0] = a1;
      v83[1] = a2;
      v83[5] = 0;
      v83[3] = a8 & 1;
      v83[2] = 0;
      v83[4] = a6;
      v84 = a3;
      UserSessionState = W32GetUserSessionState(0LL, v23);
      Valid = PhkFirstValid(*(_QWORD *)(UserSessionState + 18648), 14LL);
      if ( Valid )
      {
        a9[4].QuadPart = (LONGLONG)QuadPart;
        v26 = PtiCurrent((__int64)a9, v25);
        v27 = Valid;
        v28 = (__int64)v26;
        v29 = *((_QWORD *)v26 + 196);
        *((_QWORD *)v26 + 196) = v83;
        Valid = xxxCallHook2(v27, 0LL, 512LL, (__int64)v83, 1u);
        v30 = *(_QWORD *)(v28 + 488);
        *(_QWORD *)(v28 + 1568) = v29;
        if ( (*(_DWORD *)(v30 + 4) & *(_DWORD *)(*(_QWORD *)(v28 + 488) + 16LL) & 0xFFFFFDFF) != 0 )
        {
          v31 = *(unsigned int *)(*(_QWORD *)(v28 + 488) + 4LL);
          LODWORD(v31) = v31 & 0xFFFFFDFF;
          SetWakeBit(v28, v31);
        }
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v33 = Valid == 0;
        a9[5] = PerformanceCounter;
        if ( !v33 )
        {
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)&v72,
            v25);
          UserSessionSwitchLeaveCrit(v34);
          return 0LL;
        }
        v22 = a6;
      }
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)&v72,
        v25);
    }
    else
    {
      v22 = a6;
    }
    if ( v19 )
    {
      if ( (unsigned int)RawInputRequestedForMouse() )
      {
        v74[0] = *(_WORD *)(a5 + 2);
        v75 = *(_DWORD *)(a5 + 4);
        v76 = *(_DWORD *)(a5 + 8);
        v77 = *(_DWORD *)(a5 + 12);
        v78 = *(_DWORD *)(a5 + 16);
        v79 = *(_DWORD *)(a5 + 20);
        v81 = v73;
        v74[1] = 0;
        v80[1] = 0;
        v82 = 0LL;
        v80[0] = v73 != 0LL ? 2 : 0;
        if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, v22, v80, v74) )
        {
          *(_WORD *)a5 = -1;
          v10 = 9;
        }
      }
    }
    UserSessionSwitchLeaveCrit(v21);
  }
  if ( (a8 & 2) != 0 )
  {
    v36 = 1;
    if ( *(_DWORD *)(W32GetUserSessionState(v17, v16) + 36340) == 2 )
    {
      EnterCrit(1LL, 0LL);
      if ( *(_DWORD *)(W32GetUserSessionState(v38, v37) + 36340) == 2 )
        TransitionCursorSuppressionState(8LL, 1LL);
      UserSessionSwitchLeaveCrit(v39);
    }
  }
  else
  {
    v36 = 1;
  }
  v40 = W32GetUserSessionState(v17, v16);
  v43 = (const struct tagPOINT *)(v40 + 19184);
  *(_DWORD *)(v40 + 19184) = a1;
  *(_DWORD *)(v40 + 19188) = a2;
  if ( (a8 & 4) != 0 )
  {
    if ( !a5 || (*(_BYTE *)(a5 + 2) & 1) != 0 )
      v36 = 0;
  }
  else
  {
    v36 = 2;
  }
  v44 = W32GetUserSessionState(v42, v41);
  v45 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::BoundPoint)(
          *(_QWORD *)(v44 + 36240),
          *v43,
          v36,
          0LL,
          v43);
  v47 = 1LL;
  if ( v45 == 2 )
  {
    v10 |= 2u;
  }
  else if ( v45 == 1 )
  {
    v10 |= 4u;
  }
  if ( (a8 & 0x10) == 0 )
    v20 = (a8 & 1) != 0;
  if ( (a8 & 2) != 0 )
  {
    if ( (unsigned int)UsingPenCursors(1LL) )
      RestoreMouseCursors();
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&QuadPart, "MoveCursor", 0LL);
    EtwTraceGreMovePointerBegin(a6, (unsigned int)v43->x, (unsigned int)v43->y);
    a9[2] = KeQueryPerformanceCounter(0LL);
    v50 = W32GetUserSessionState(v49, v48);
    y = v43->y;
    x = v43->x;
    v53 = *(CursorApiRouter **)(v50 + 36304);
    v56 = W32GetUserSessionState(v55, v54);
    CursorApiRouter::MovePointer(v53, *(HDEV *)(*(_QWORD *)(v56 + 56968) + 48LL), x, y, v20, v73, a7);
    a9[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(a6, (unsigned int)v43->x, (unsigned int)v43->y);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&QuadPart,
      v57);
    v60 = W32GetUserSessionState(v59, v58);
    CCursorSizes::zzzUpdateGlobalCursorSize(*(CCursorSizes **)(v60 + 36344), v43, 0);
  }
  if ( !IsRemoteConnection(v47, v46) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v62, v61) + 16296) )
    {
      v65 = *(_DWORD *)(W32GetUserSessionState(v64, v63) + 16296) + 2;
      _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v67, v66) + 16300), v65);
    }
  }
  return v10;
}
