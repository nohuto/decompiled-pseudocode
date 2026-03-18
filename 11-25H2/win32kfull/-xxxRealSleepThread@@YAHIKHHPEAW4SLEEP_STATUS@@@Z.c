/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x14001E1E0
 * Callers:
 *     xxxSleepThread2 @ 0x14001E134 (xxxSleepThread2.c)
 *     xxxSleepThreadWithPwnd @ 0x14017BE54 (xxxSleepThreadWithPwnd.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     zzzWakeInputIdle @ 0x14001EC00 (zzzWakeInputIdle.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxDoSysExpungeIfNeeded @ 0x14001F490 (xxxDoSysExpungeIfNeeded.c)
 *     xxxRemoveQueueCompletion @ 0x140020350 (xxxRemoveQueueCompletion.c)
 *     xxxDesktopThreadWaiter @ 0x140020F14 (xxxDesktopThreadWaiter.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A520 (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ClientDeliverUserApc @ 0x1401A3EC4 (ClientDeliverUserApc.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401C6CDC (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     EditionxxxComputeInputSinkInfo @ 0x1401CA050 (EditionxxxComputeInputSinkInfo.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

__int64 __fastcall xxxRealSleepThread(__int64 a1, __int64 a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // r14d
  int v7; // r13d
  enum SLEEP_STATUS *v8; // r8
  unsigned int v9; // r15d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  unsigned int *v14; // r8
  enum SLEEP_STATUS *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r14d
  ULONG v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // r13
  void *v32; // rcx
  NTSTATUS v33; // r12d
  union _LARGE_INTEGER *v34; // rdx
  __int64 v35; // rcx
  BOOL v36; // r14d
  int v37; // r14d
  NTSTATUS v38; // r12d
  __int64 v39; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v41; // r14
  struct _KEVENT *v42; // rcx
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 UserSessionState; // rax
  int v48; // [rsp+40h] [rbp-A8h]
  union _LARGE_INTEGER *Timeout; // [rsp+48h] [rbp-A0h]
  _DWORD v50[5]; // [rsp+50h] [rbp-98h] BYREF
  int v51; // [rsp+64h] [rbp-84h]
  __int64 v52; // [rsp+68h] [rbp-80h] BYREF
  enum SLEEP_STATUS *v53; // [rsp+70h] [rbp-78h]
  PVOID Object[3]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v55; // [rsp+90h] [rbp-58h]
  __int64 v56; // [rsp+98h] [rbp-50h]
  char v57; // [rsp+F0h] [rbp+8h] BYREF
  __int32 v58; // [rsp+F8h] [rbp+10h]
  int v59; // [rsp+100h] [rbp+18h]
  int v60; // [rsp+108h] [rbp+20h]

  v60 = a4;
  v59 = a3;
  v5 = 0;
  v52 = 0LL;
  v6 = 0;
  v7 = a1 & 0x8000;
  v48 = v7;
  v50[4] = 0;
  *(_OWORD *)Object = 0LL;
  v50[0] = 0;
  v8 = (enum SLEEP_STATUS *)v50;
  if ( a5 )
    v8 = a5;
  v53 = v8;
  *(_DWORD *)v8 = 0;
  v9 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v9 = a1;
  if ( (_DWORD)a2 )
  {
    a1 = -10000LL * (int)a2;
    v52 = a1;
    Timeout = (union _LARGE_INTEGER *)&v52;
  }
  else
  {
    Timeout = 0LL;
  }
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v11 = *CurrentThreadNonPaged;
  else
    v11 = 0LL;
  v12 = v11 + 488;
  v55 = v11 + 488;
  v58 = INTERLOCKEDINT::operator int(*(_QWORD *)(v11 + 488) + 16LL);
  while ( 1 )
  {
LABEL_10:
    if ( ((unsigned int)INTERLOCKEDINT::operator int(*(_QWORD *)v12 + 4LL) & v9) != 0
      || v60 && ((unsigned int)INTERLOCKEDINT::operator int(*(_QWORD *)v12 + 8LL) & v9) != 0 )
    {
      v5 = 1;
      goto LABEL_12;
    }
    v16 = v53;
    if ( *(_DWORD *)v53 == 2 )
      goto LABEL_12;
    if ( !v7 && (INTERLOCKEDINT::operator int(*(_QWORD *)v12 + 8LL) & 0x40) != 0 )
    {
      xxxReceiveMessages((struct tagTHREADINFO *)v11);
      _InterlockedOr(
        (volatile signed __int32 *)(*(_QWORD *)v12 + 4LL),
        *(unsigned __int16 *)(v11 + 920) & (unsigned int)INTERLOCKEDINT::operator int(*(_QWORD *)v12 + 8LL));
      *(_WORD *)(v11 + 920) = 0;
    }
    xxxDoSysExpungeIfNeeded(v11);
    v19 = (__int64 *)W32GetCurrentThreadNonPaged(v18, v17);
    if ( v19 )
      v20 = *v19;
    else
      v20 = 0LL;
    v21 = 0;
    if ( !v7 )
      v21 = 64;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v20 + 488) + 16LL), (unsigned __int16)v9 | v21);
    KeClearEvent(*(PRKEVENT *)(v20 + 768));
    if ( v6 == 258 )
    {
      UserSetLastError(1460);
      *(_DWORD *)v16 = 1;
LABEL_75:
      v13 = (_QWORD *)0xFFFFF78000000320LL;
      v14 = (unsigned int *)0xFFFFF78000000004LL;
      goto LABEL_12;
    }
    if ( v6 == 192 )
    {
      ClientDeliverUserApc();
      goto LABEL_75;
    }
    INTERLOCKEDINT::operator int(*(_QWORD *)v12 + 16LL);
    v22 = INTERLOCKEDINT::operator int(*(_QWORD *)v12 + 4LL);
    if ( (v24 & v22) != 0 )
      continue;
    if ( v11 == *(_QWORD *)(W32GetUserSessionState(v23, 0xFFFFF78000000320uLL) + 68480) && (v9 & 0x200) != 0 && !Timeout )
      break;
    v27 = v59;
    if ( v59 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 528), 0, 0) & 0x400) != 0
        && (int)CheckProcessForeground((struct tagTHREADINFO *)v11) < 0 )
      {
        goto LABEL_75;
      }
      *(_QWORD *)(*(_QWORD *)(v11 + 520) + 8LL) = 0LL;
      if ( v27 )
      {
        if ( v11 == *(_QWORD *)(W32GetUserSessionState(v26, v25) + 18904)
          && ((*(_DWORD *)(v11 + 720) | *(_DWORD *)(**(_QWORD **)(v11 + 504) + 16LL)) & 0x1000) != 0 )
        {
          xxxCallHook(0, 0LL, 0LL, 11);
        }
        zzzWakeInputIdle(v11);
      }
    }
    Object[0] = *(PVOID *)(v11 + 1608);
    v28 = 1;
    LODWORD(a5) = 1;
    if ( (unsigned __int8)IsInputThread() && (v9 & 0x200) != 0 )
    {
      v31 = 1;
      Object[1] = *(PVOID *)(W32GetUserSessionState(v30, v29) + 18760);
      v28 = 2;
      LODWORD(a5) = 2;
    }
    else
    {
      v31 = 0;
    }
    v32 = *(void **)(v11 + 1576);
    if ( v32 && (v9 & 0xFFFF7DFF) != 0 )
    {
      Object[v28++] = v32;
      LODWORD(a5) = v28;
    }
    if ( v31 )
      *(_DWORD *)(W32GetUserSessionState(v32, v29) + 64192) = 1;
    v51 = 0;
    while ( 1 )
    {
      v56 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v57, 1);
      v33 = KeWaitForMultipleObjects(v28, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v57);
      v36 = !v33
         && (unsigned int)xxxRemoveQueueCompletion()
         && ((unsigned __int8)v9 & (unsigned __int8)INTERLOCKEDINT::operator int(*(_QWORD *)v12 + 8LL) & 8) == 0;
      if ( v33 == 1 )
        break;
      if ( !v36 )
      {
        v37 = v51;
        goto LABEL_44;
      }
LABEL_77:
      v28 = (unsigned int)a5;
    }
    if ( !v31 )
    {
      *(_DWORD *)v53 = 2;
      v52 = -100000LL;
      goto LABEL_77;
    }
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - v56) < 0x10 )
      v43 = 16;
    else
      v43 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - v56;
    v35 = -10000LL * v43;
    v34 = Timeout;
    if ( v35 > Timeout->QuadPart )
    {
      Timeout->QuadPart -= v35;
      *(_DWORD *)(W32GetUserSessionState(v35, Timeout) + 64196) = 0;
      EditionxxxComputeInputSinkInfo();
      goto LABEL_77;
    }
    v33 = 258;
    v37 = 1;
LABEL_44:
    if ( v31 )
    {
      *(_DWORD *)(W32GetUserSessionState(v35, v34) + 64192) = 0;
      if ( *(_DWORD *)(W32GetUserSessionState(v45, v44) + 64196) )
      {
        WakeMIT(2LL);
        if ( !v37 )
        {
          UserSessionState = W32GetUserSessionState(v35, v46);
          KeClearEvent(*(PRKEVENT *)(UserSessionState + 18760));
        }
      }
    }
    v6 = 0;
    if ( v33 )
      v6 = v33;
    v38 = v6;
    v39 = *(_QWORD *)(v11 + 464);
    if ( !*(_QWORD *)(v39 + 328) )
      *(_QWORD *)(v39 + 328) = v11;
    v7 = v48;
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 464) + 328LL) == v11 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v35);
      v41 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
        v41 = 0LL;
      EtwTraceSleepInputIdle(0LL, v11);
      v42 = (struct _KEVENT *)v41[2];
      if ( v42 == (struct _KEVENT *)-1LL )
      {
        v41[2] = 0LL;
        v6 = v38;
      }
      else
      {
        v6 = v38;
        if ( v42 )
          KeClearEvent(v42);
      }
    }
  }
  v6 = xxxDesktopThreadWaiter(0LL, v9);
  v13 = (_QWORD *)0xFFFFF78000000320LL;
  v14 = (unsigned int *)0xFFFFF78000000004LL;
  if ( v6 != -1073741790 )
    goto LABEL_10;
LABEL_12:
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v12 + 16LL), v58);
  if ( v5 )
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v12 + 20LL), (*v13 * (unsigned __int64)*v14) >> 24);
  return v5;
}
