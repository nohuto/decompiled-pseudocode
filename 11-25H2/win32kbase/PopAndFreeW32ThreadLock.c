/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1400A1AFC
 * Callers:
 *     DestroyThreadsObjects @ 0x140038840 (DestroyThreadsObjects.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagDESKTOP@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400A1A44 (-UnlockWorker@-$Win32RawLockedItemBase@UtagDESKTOP@@$1-UserDereferenceObject@@YAXPEAX@Z$00$00$00.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400A1A98 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1-Win32FreePool@@YAXP.c)
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44B8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v3 + 384) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
