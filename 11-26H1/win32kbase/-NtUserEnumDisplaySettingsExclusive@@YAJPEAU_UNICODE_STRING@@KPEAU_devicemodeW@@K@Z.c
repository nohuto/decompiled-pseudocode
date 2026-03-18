/*
 * XREFs of ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013C400
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1401AB540 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x14000A1D0 (UserSessionSwitchEnterCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x14001F3E0 (EtwTraceReleaseUserCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400E5470 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1400E5830 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UpdateDirtyVisRgnTrackers @ 0x1400E6E80 (UpdateDirtyVisRgnTrackers.c)
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 */

__int64 __fastcall NtUserEnumDisplaySettingsExclusive(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _devicemodeW *a3,
        unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 UserSessionState; // rax
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rcx
  unsigned int Count; // eax

  UserSessionSwitchEnterCrit();
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v8) + 32) )
  {
    UserSessionState = W32GetUserSessionState(v10, v9, v11);
    v13 = DrvEnumDisplaySettings(
            a1,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 96LL) + 80LL),
            a2,
            a3,
            a4);
  }
  else
  {
    v13 = -1073741823;
  }
  v14 = W32GetUserSessionState(v10, v9, v11);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v16, v15);
  v19 = *(unsigned int *)(CurrentThreadWin32Thread + 24);
  LOBYTE(v19) = v19 & 0xC;
  if ( (_BYTE)v19 == 8 )
  {
    UpdateDirtyVisRgnTrackers(v19);
    *(_DWORD *)(v14 + 19820) = 0;
    *(_QWORD *)(v14 + 19800) = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v14 + 19720, v20, v21);
    *(_QWORD *)(v14 + 24) = 0LL;
  }
  v22 = *(_QWORD *)CurrentThreadWin32Thread;
  if ( *(_QWORD *)CurrentThreadWin32Thread && (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 2) == 0 )
    *(_BYTE *)(v22 + 1708) = 0;
  Count = AtomicExecutionCheck::GetCount(v22, v17);
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  EtwTraceReleaseUserCrit();
  *(_DWORD *)(CurrentThreadWin32Thread + 24) &= 0xFFFFFFF1;
  if ( (*(_DWORD *)(CurrentThreadWin32Thread + 24) & 0x10) != 0 )
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, CurrentThreadWin32Thread);
  ExReleaseFastResource(*(_QWORD *)v14, CurrentThreadWin32Thread + 32);
  KeLeaveCriticalRegion();
  return v13;
}
