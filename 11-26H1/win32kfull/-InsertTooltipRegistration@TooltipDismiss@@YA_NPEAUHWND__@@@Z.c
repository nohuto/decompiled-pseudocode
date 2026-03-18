/*
 * XREFs of ?InsertTooltipRegistration@TooltipDismiss@@YA_NPEAUHWND__@@@Z @ 0x1402F0C74
 * Callers:
 *     NtUserRegisterForTooltipDismissNotification @ 0x1402BA2B0 (NtUserRegisterForTooltipDismissNotification.c)
 * Callees:
 *     <none>
 */

char __fastcall TooltipDismiss::InsertTooltipRegistration(TooltipDismiss *this, HWND a2)
{
  __int64 i; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx

  for ( i = *(_QWORD *)(W32GetUserSessionState(this, a2) + 71184); i; i = *(_QWORD *)(i + 8) )
  {
    if ( this == *(TooltipDismiss **)i )
      return 0;
  }
  v5 = (_QWORD *)Win32AllocPoolZInit(16LL, 1685353557LL);
  *v5 = this;
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 71184);
  v5[1] = v8;
  *(_QWORD *)(W32GetUserSessionState(v8, v9) + 71184) = v5;
  return 1;
}
