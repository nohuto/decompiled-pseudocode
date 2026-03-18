/*
 * XREFs of LeaveCrit @ 0x1401A86A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14001F3E0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1400E5830 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall LeaveCrit(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v8; // rcx
  void (*v9)(void); // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ecx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5, v4);
  v8 = *(unsigned int *)(CurrentThreadWin32Thread + 24);
  LOBYTE(v8) = v8 & 0xC;
  if ( (_BYTE)v8 == 8 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48) + 3520LL);
    if ( v9 )
      v9();
    *(_DWORD *)(UserSessionState + 19820) = 0;
    *(_QWORD *)(UserSessionState + 19800) = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(UserSessionState + 19720, v10, v11);
    *(_QWORD *)(UserSessionState + 24) = 0LL;
  }
  v12 = *(_QWORD *)CurrentThreadWin32Thread;
  if ( *(_QWORD *)CurrentThreadWin32Thread && (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 2) == 0 )
    *(_BYTE *)(v12 + 1708) = 0;
  v13 = PsGetCurrentThreadWin32Thread(v12, v6);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 28);
    if ( v14 )
      KeBugCheckEx(0x160u, v14, 0LL, 0LL, 0LL);
  }
  EtwTraceReleaseUserCrit();
  *(_DWORD *)(CurrentThreadWin32Thread + 24) &= 0xFFFFFFF1;
  if ( (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 0x10) != 0 )
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
  ExReleaseFastResource(*(_QWORD *)UserSessionState, CurrentThreadWin32Thread + 32);
  KeLeaveCriticalRegion();
}
