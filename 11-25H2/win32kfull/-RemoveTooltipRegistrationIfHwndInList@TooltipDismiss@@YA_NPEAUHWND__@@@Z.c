/*
 * XREFs of ?RemoveTooltipRegistrationIfHwndInList@TooltipDismiss@@YA_NPEAUHWND__@@@Z @ 0x1402DFA80
 * Callers:
 *     NtUserRegisterForTooltipDismissNotification @ 0x14029CBC0 (NtUserRegisterForTooltipDismissNotification.c)
 * Callees:
 *     <none>
 */

char __fastcall TooltipDismiss::RemoveTooltipRegistrationIfHwndInList(TooltipDismiss *this, HWND a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  TooltipDismiss **v5; // rdx
  TooltipDismiss **i; // rbx
  TooltipDismiss ***v7; // rdi

  UserSessionState = W32GetUserSessionState(this, a2);
  v5 = 0LL;
  for ( i = *(TooltipDismiss ***)(UserSessionState + 71200); ; i = *v7 )
  {
    if ( !i )
      return 0;
    v7 = (TooltipDismiss ***)(i + 1);
    if ( this == *i )
      break;
    v5 = i;
  }
  if ( v5 )
    v5[1] = (TooltipDismiss *)*v7;
  else
    *(_QWORD *)(W32GetUserSessionState(v4, 0LL) + 71200) = *v7;
  Win32FreePool(i);
  return 1;
}
