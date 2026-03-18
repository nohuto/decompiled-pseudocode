/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401CC8EC
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1401CC7C0 (NtUserSetCoreWindowPartner.c)
 *     NtUserFlashWindowEx @ 0x1401FA530 (NtUserFlashWindowEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402487D0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetShellWindowEx @ 0x14024E320 (NtUserSetShellWindowEx.c)
 *     NtUserSetCoreWindow @ 0x14029E790 (NtUserSetCoreWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateHWNDND(HWND a1, struct tagWND **a2)
{
  struct tagWND *v3; // rcx
  bool result; // al
  int v5; // edx

  v3 = (struct tagWND *)ValidateHwnd(a1);
  *a2 = v3;
  result = 0;
  if ( v3 )
  {
    v5 = *(_WORD *)(*((_QWORD *)v3 + 5) + 42LL) & 0x2FFF;
    if ( v5 != 669 )
      return v5 != 671;
  }
  return result;
}
