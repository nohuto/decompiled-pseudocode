/*
 * XREFs of ??1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ @ 0x1400FB674
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1400FA930 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1400FAA90 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 *     NtUserEnumDisplaySettings @ 0x1401AB540 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x14001F3E0 (EtwTraceReleaseUserCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400E5470 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1400E5830 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UpdateDirtyVisRgnTrackers @ 0x1400E6E80 (UpdateDirtyVisRgnTrackers.c)
 */

void __fastcall MaybeEnterLeaveCritSharedOnly::~MaybeEnterLeaveCritSharedOnly(
        MaybeEnterLeaveCritSharedOnly *this,
        int a2,
        int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  __int64 v6; // rbx
  LONG v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rcx
  unsigned int Count; // eax

  if ( *(_BYTE *)this )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
    v6 = UserSessionState;
    v7 = *(_DWORD *)(UserSessionState + 68872);
    if ( v7 )
    {
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(UserSessionState + 68864), 0, v7, 0);
      *(_DWORD *)(v6 + 68872) = 0;
    }
    v8 = W32GetUserSessionState(v5, v4, v7);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v10, v9);
    v13 = *(unsigned int *)(CurrentThreadWin32Thread + 24);
    LOBYTE(v13) = v13 & 0xC;
    if ( (_BYTE)v13 == 8 )
    {
      UpdateDirtyVisRgnTrackers(v13);
      *(_DWORD *)(v8 + 19820) = 0;
      *(_QWORD *)(v8 + 19800) = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList(v8 + 19720, v14, v15);
      *(_QWORD *)(v8 + 24) = 0LL;
    }
    v16 = *(_QWORD *)CurrentThreadWin32Thread;
    if ( *(_QWORD *)CurrentThreadWin32Thread && (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 2) == 0 )
      *(_BYTE *)(v16 + 1708) = 0;
    Count = AtomicExecutionCheck::GetCount(v16, v11);
    if ( Count )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    EtwTraceReleaseUserCrit();
    *(_DWORD *)(CurrentThreadWin32Thread + 24) &= 0xFFFFFFF1;
    if ( (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 0x10) != 0 )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
    ExReleaseFastResource(*(_QWORD *)v8, CurrentThreadWin32Thread + 32);
    KeLeaveCriticalRegion();
  }
}
