/*
 * XREFs of ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400226D0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxConnectService @ 0x14018B600 (xxxConnectService.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     xxxValidateClassAndSize @ 0x1402001D4 (xxxValidateClassAndSize.c)
 *     xxxClientCopyDDEIn1 @ 0x1402591EC (xxxClientCopyDDEIn1.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1402AEA80 (EditionCreateWindowStationEntryPoint.c)
 *     NtUserInjectTouchInput @ 0x1402B6AF0 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x1402BB4D0 (NtUserSendInput.c)
 *     xxxCsEvent @ 0x1402EF878 (xxxCsEvent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rcx
  _QWORD *result; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v7 = 0LL;
  if ( CurrentThreadWin32Thread )
    v7 = *CurrentThreadWin32Thread;
  *a1 = *(_QWORD *)(v7 + 376);
  result = a1;
  *(_QWORD *)(v7 + 376) = a1;
  a1[1] = a2;
  a1[2] = a3;
  return result;
}
