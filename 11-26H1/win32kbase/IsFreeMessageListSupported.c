/*
 * XREFs of IsFreeMessageListSupported @ 0x1400B9424
 * Callers:
 *     UserDeleteW32Thread @ 0x140091290 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsFreeMessageListSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 1160LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
