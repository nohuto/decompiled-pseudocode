/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001C74C
 * Callers:
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001ED10 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPEAK@Z @ 0x1400358D0 (-HmgRemoveObjectImpl@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@JJW4HandleLockOptions@@EPE.c)
 *     HmgShareUnlockRemoveObject @ 0x140054820 (HmgShareUnlockRemoveObject.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     HmgFree @ 0x1401EDCD0 (HmgFree.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14001E448 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1400E59F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     UserDeleteW32Process @ 0x1401C0400 (UserDeleteW32Process.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this)
{
  _QWORD *v2; // rdi
  signed int v3; // r15d
  PVOID *CurrentProcessWin32Process; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rbp
  int v8; // ecx
  int v9; // r8d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  void *v16; // rdi
  bool v17; // cl
  char v18; // bl
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 CurrentProcess; // rax
  char ProcessSessionId; // al
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  int (*v32)(void); // rax
  char v33; // bl
  __int64 v34; // rdi
  __int64 v35; // rcx
  void (__fastcall *v36)(__int64, __int64); // rax
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 *v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rax
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  int v49; // ebx
  int v50; // r8d
  unsigned __int64 v51; // rax
  unsigned __int64 i; // rcx
  __int64 v53; // rdx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  int CurrentWin32kSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  PVOID *ProcessWin32Process; // rax
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  PEPROCESS Process; // [rsp+78h] [rbp+10h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v3 = *(_DWORD *)(*(_QWORD *)this + 8LL) & 0xFFFFFFFE;
  if ( !v3 || v3 == -2147483630 )
    goto LABEL_19;
  if ( v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    CurrentProcessWin32Process = (PVOID *)PsGetCurrentProcessWin32Process();
    v5 = (volatile signed __int32 *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process || !CurrentProcessWin32Process )
      goto LABEL_19;
    ObfReferenceObject(*CurrentProcessWin32Process);
    _InterlockedIncrement(v5 + 2);
    goto LABEL_8;
  }
  Process = 0LL;
  if ( PsLookupProcessByProcessId((HANDLE)v3, &Process) >= 0 )
  {
    ProcessWin32Process = (PVOID *)PsGetProcessWin32Process(Process);
    v5 = (volatile signed __int32 *)ProcessWin32Process;
    if ( ProcessWin32Process && !*ProcessWin32Process )
    {
      v5 = 0LL;
    }
    else if ( ProcessWin32Process )
    {
      ObfReferenceObject(*ProcessWin32Process);
      _InterlockedIncrement(v5 + 2);
    }
    ObfDereferenceObject(Process);
    if ( v5 )
    {
LABEL_8:
      v7 = (struct _ERESOURCE *)(*v2 + 1512LL);
      GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v6, (HSEMAPHORE)v7);
      --*((_DWORD *)v5 + 15);
      if ( v7 )
      {
        if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(v8, (unsigned int)&LockRelease, v9, (_DWORD)v7, (__int64)L"Hmgr");
        CurrentThread = KeGetCurrentThread();
        v11 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v11 = *ThreadWin32Thread;
        }
        v13 = v11 + 8;
        v14 = -v11;
        if ( (v13 & -(__int64)(v14 != 0)) != 0 && (*(_BYTE *)((v13 & -(__int64)(v14 != 0)) + 0x1C))-- == 1 )
          *(_QWORD *)(v13 & -(__int64)(v14 != 0)) &= ~0x100000uLL;
        GreReleaseSemaphoreSharedInternal(v7);
      }
      v16 = *(void **)v5;
      v17 = (v5[69] & 0x200) == 0;
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        if ( v17 )
        {
          if ( v17 )
            UserDeleteW32Process((PVOID)v5);
        }
        else
        {
          PsSetProcessWin32Process(*(_QWORD *)v5, 0LL, v5);
          GreDeleteFastMutex((PVOID)v5);
        }
      }
      ObfDereferenceObject(v16);
    }
  }
LABEL_19:
  v18 = 15;
  v19 = *(unsigned __int8 *)(*(_QWORD *)this + 14LL);
  if ( v19 > 0xF )
  {
    v18 = 23;
    if ( v19 > 0x17 )
    {
      v18 = 24;
      v60 = v19 - 24;
      if ( !v60 )
        goto LABEL_29;
      v61 = v60 - 1;
      if ( v61 )
      {
        v62 = v61 - 1;
        if ( v62 )
        {
          v63 = v62 - 1;
          if ( v63 )
          {
            v64 = v63 - 1;
            if ( v64 )
            {
              v65 = v64 - 1;
              if ( v65 )
              {
                if ( v65 == 1 )
                {
                  v18 = 30;
                  goto LABEL_29;
                }
                goto LABEL_93;
              }
              v18 = 29;
            }
            else
            {
              v18 = 28;
            }
          }
          else
          {
            v18 = 27;
          }
        }
        else
        {
          v18 = 26;
        }
      }
      else
      {
        v18 = 25;
      }
    }
    else
    {
      if ( v19 == 23 )
        goto LABEL_29;
      v54 = v19 - 16;
      if ( !v54 )
      {
        v18 = 16;
        goto LABEL_29;
      }
      v55 = v54 - 1;
      if ( !v55 )
      {
        v18 = 17;
        goto LABEL_29;
      }
      v56 = v55 - 1;
      if ( !v56 )
      {
        v18 = 18;
        goto LABEL_29;
      }
      v69 = v56 - 1;
      if ( v69 )
      {
        v70 = v69 - 1;
        if ( v70 )
        {
          v71 = v70 - 1;
          if ( !v71 )
          {
            v18 = 21;
            goto LABEL_29;
          }
          if ( v71 != 1 )
            goto LABEL_93;
          v18 = 22;
        }
        else
        {
          v18 = 20;
        }
      }
      else
      {
        v18 = 19;
      }
    }
  }
  else
  {
    if ( v19 == 15 )
      goto LABEL_29;
    v18 = 7;
    if ( v19 > 7 )
    {
      v18 = 8;
      v46 = v19 - 8;
      if ( !v46 )
        goto LABEL_29;
      v47 = v46 - 1;
      if ( !v47 )
      {
        v18 = 9;
        goto LABEL_29;
      }
      v48 = v47 - 1;
      if ( !v48 )
      {
        v18 = 10;
        goto LABEL_29;
      }
      v66 = v48 - 1;
      if ( v66 )
      {
        v67 = v66 - 1;
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( !v68 )
          {
            v18 = 13;
            goto LABEL_29;
          }
          if ( v68 != 1 )
            goto LABEL_93;
          v18 = 14;
        }
        else
        {
          v18 = 12;
        }
      }
      else
      {
        v18 = 11;
      }
    }
    else
    {
      if ( v19 == 7 )
        goto LABEL_29;
      if ( *(_BYTE *)(*(_QWORD *)this + 14LL) )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          v18 = 1;
          goto LABEL_29;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( !v23 )
            {
              v18 = 4;
              goto LABEL_29;
            }
            v45 = v23 - 1;
            if ( !v45 )
            {
              v18 = 5;
              goto LABEL_29;
            }
            if ( v45 == 1 )
            {
              v18 = 6;
              goto LABEL_29;
            }
LABEL_93:
            v18 = -1;
            goto LABEL_29;
          }
          v18 = 3;
        }
        else
        {
          v18 = 2;
        }
      }
      else
      {
        v18 = 0;
      }
    }
  }
LABEL_29:
  v25 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 8LL) + 96LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 8LL),
                     **(unsigned int **)this);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0pqqq_EtwWriteTransfer(v28, (unsigned int)&GdiDestroyHandle, v29, v25, v18, ProcessSessionId, v3);
  }
  v31 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v24) + 24);
  v32 = *(int (**)(void))(v31 + 2688);
  if ( v32 )
  {
    if ( v32() >= 0 )
    {
      v33 = *(_BYTE *)(*(_QWORD *)this + 14LL);
      v34 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 8LL) + 96LL))(
                         *(_QWORD *)(*((_QWORD *)this + 2) + 8LL),
                         **(unsigned int **)this);
      v36 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v35) + 24) + 2696LL);
      if ( v36 )
      {
        LOBYTE(v30) = v33;
        v36(v34, v30);
      }
    }
  }
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v31, v30);
  if ( CurrentThreadWin32Thread )
    v38 = *CurrentThreadWin32Thread;
  else
    v38 = 0LL;
  v39 = v38 + 8;
  v40 = -v38;
  if ( (v39 & -(__int64)(v40 != 0)) != 0 )
  {
    v41 = *(_QWORD *)((v39 & -(__int64)(v40 != 0)) + 0x148);
    if ( v41 )
    {
      v49 = (unsigned __int16)*(_DWORD *)HANDLELOCK::pObj(this);
      v50 = v49 | (*(_DWORD *)HANDLELOCK::pObj(this) >> 8) & 0xFF0000;
      v51 = *(_QWORD *)(v41 + 24);
      for ( i = 0LL; i < v51; ++i )
      {
        v53 = *(_QWORD *)(v41 + 40);
        if ( *(_DWORD *)(v53 + 4 * i) == v50 )
        {
          *(_DWORD *)(v53 + 4 * i) = *(_DWORD *)(v53 + 4 * v51 - 4);
          *(_DWORD *)(*(_QWORD *)(v41 + 40) + 4LL * (*(_QWORD *)(v41 + 24))-- - 4) = 0;
          break;
        }
      }
    }
  }
  *(_BYTE *)(*(_QWORD *)this + 14LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = 0;
  v42 = *(__int64 **)(*((_QWORD *)this + 2) + 8LL);
  v43 = *v42;
  v44 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v42 + 96))(v42, **(unsigned int **)this);
  (*(void (__fastcall **)(__int64 *, __int64))(v43 + 56))(v42, v44);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
