/*
 * XREFs of ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401668DC
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400CAEE0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxConnectService @ 0x14016629C (xxxConnectService.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     xxxClientCopyDDEIn1 @ 0x14021CBC0 (xxxClientCopyDDEIn1.c)
 *     xxxValidateClassAndSize @ 0x140242488 (xxxValidateClassAndSize.c)
 *     NtUserInjectTouchInput @ 0x14024A8D0 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x14024CC60 (NtUserSendInput.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140293D10 (EditionCreateWindowStationEntryPointEx.c)
 *     xxxCsEvent @ 0x1402DD438 (xxxCsEvent.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

_QWORD *__fastcall Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rcx
  _QWORD *result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v7 = 0LL;
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  *a1 = *(_QWORD *)(v7 + 384);
  result = a1;
  *(_QWORD *)(v7 + 384) = a1;
  a1[1] = a2;
  a1[2] = a3;
  return result;
}
