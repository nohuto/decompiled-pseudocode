/*
 * XREFs of NtUserDrainThreadCoreMessagingCompletions2 @ 0x14001A430
 * Callers:
 *     <none>
 * Callees:
 *     _DrainThreadCoreMessagingCompletions2 @ 0x14001A4E4 (_DrainThreadCoreMessagingCompletions2.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserDrainThreadCoreMessagingCompletions2(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG_PTR *CurrentThreadNonPaged; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateReceivingHwnd(a1, 0LL);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v2 + 456);
    *(_QWORD *)(v2 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v3;
    HMLockObject(v3);
    v6 = DrainThreadCoreMessagingCompletions2(v5);
    CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v8, v7);
    if ( CurrentThreadNonPaged )
      v4 = *CurrentThreadNonPaged;
    Win32HM_UnlockFromThread<0>(v4, (ULONG_PTR)BugCheckParameter3);
  }
  else
  {
    v6 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
