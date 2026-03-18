/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1400D0120
 * Callers:
 *     ?UnlockWorker@?$Win32RawLockedItemBase@VCInputDest@@$0A@$00$0A@$00@@AEAAX_N0@Z @ 0x1400D00A4 (-UnlockWorker@-$Win32RawLockedItemBase@VCInputDest@@$0A@$00$0A@$00@@AEAAX_N0@Z.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@X$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400D00F8 (--1-$Win32RawOptionalLockedItemAlways@X$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     InitUserScreen @ 0x140167940 (InitUserScreen.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rdx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  v3 = 0LL;
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  *(_QWORD *)(v3 + 384) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
