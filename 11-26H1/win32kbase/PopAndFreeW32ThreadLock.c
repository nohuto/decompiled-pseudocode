/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1400D0920
 * Callers:
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagDESKTOP@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400D0604 (-UnlockWorker@-$Win32RawLockedItemBase@UtagDESKTOP@@$1-UserDereferenceObject@@YAXPEAX@Z$00$00$00.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400D0658 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     DestroyThreadsObjects @ 0x1400D0690 (DestroyThreadsObjects.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x14011C5F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 result; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( CurrentThreadWin32Thread )
    v4 = *CurrentThreadWin32Thread;
  else
    v4 = 0LL;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v4 + 376) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
