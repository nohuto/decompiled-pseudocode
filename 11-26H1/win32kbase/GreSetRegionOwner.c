/*
 * XREFs of GreSetRegionOwner @ 0x14001EE60
 * Callers:
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140080C68 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     CreateEmptyRgnPublic @ 0x140081A30 (CreateEmptyRgnPublic.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     HmgDecProcessHandleCount @ 0x140056DC4 (HmgDecProcessHandleCount.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     HmgIncProcessHandleCount @ 0x1400C5A0C (HmgIncProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1400FEB6C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetRegionOwner(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // r12d
  int v7; // ebp
  struct _ERESOURCE *v8; // r13
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // r8d
  unsigned int *v12; // r15
  __int64 v13; // rdi
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v15; // r14d
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  struct _KTHREAD *v19; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int *v27; // [rsp+30h] [rbp-58h] BYREF
  int v28; // [rsp+38h] [rbp-50h]
  __int64 v29; // [rsp+40h] [rbp-48h]
  _QWORD *v30; // [rsp+A0h] [rbp+18h]

  LODWORD(v2) = a2;
  PsGetCurrentProcessId();
  if ( (_DWORD)v2 == -2147483646 )
    v2 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( (_DWORD)v2 == -2147483646 )
    v2 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v30 = *(_QWORD **)(W32GetSessionState(v4) + 88);
  v8 = (struct _ERESOURCE *)(*v30 + 1512LL);
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v9, (HSEMAPHORE)v8);
  HANDLELOCK::HANDLELOCK(&v27, v30, a1, 1LL);
  if ( v28 )
  {
    v12 = v27;
    if ( *((_BYTE *)v27 + 14) == 4 && *((_WORD *)v27 + 6) == WORD1(a1) )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v29 + 8) + 96LL))(*(_QWORD *)(v29 + 8), *v27);
      CurrentThread = GreGetCurrentThread();
      if ( CurrentThread && *((_QWORD *)CurrentThread + 8) && (_DWORD)v2 )
        v7 = 1;
      if ( !*(_WORD *)(v13 + 12) || *(struct _KTHREAD **)(v13 + 16) == KeGetCurrentThread() || v7 )
      {
        v6 = 1;
        v15 = v12[2] & 0xFFFFFFFE;
        if ( v7 )
          LODWORD(v2) = UMPDGetThreadClientPID(CurrentThread);
        if ( v15 != (_DWORD)v2 )
        {
          v6 = HmgIncProcessHandleCount((unsigned int)v2);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v30, v15);
            HANDLELOCK::Pid((HANDLELOCK *)&v27, v2);
            if ( !(_DWORD)v2 || (_DWORD)v2 == -2147483630 )
            {
              *(_WORD *)(v13 + 14) &= ~0x10u;
            }
            else if ( *(_WORD *)(v13 + 12) || *(_DWORD *)(v13 + 8) )
            {
              *(_WORD *)(v13 + 14) |= 0x10u;
            }
          }
        }
      }
    }
    v16 = *(__int64 **)(v29 + 8);
    v17 = *v16;
    v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v16 + 96))(v16, *v12);
    (*(void (__fastcall **)(__int64 *, __int64))(v17 + 48))(v16, v18);
    KeLeaveCriticalRegion();
  }
  if ( v8 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v10, (unsigned int)&LockRelease, v11, (_DWORD)v8, (__int64)L"Hmgr");
    v19 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v19);
      if ( ThreadWin32Thread )
        v5 = *ThreadWin32Thread;
    }
    v21 = v5 + 8;
    v22 = -v5;
    if ( (v21 & -(__int64)(v22 != 0)) != 0 && (*(_BYTE *)((v21 & -(__int64)(v22 != 0)) + 0x1C))-- == 1 )
      *(_QWORD *)(v21 & -(__int64)(v22 != 0)) &= ~0x100000uLL;
    GreReleaseSemaphoreSharedInternal(v8);
  }
  return v6;
}
