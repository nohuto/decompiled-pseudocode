/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401FD9A8
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1401FD7B0 (NtUserSetCoreWindowPartner.c)
 *     NtUserSetCoreWindow @ 0x1401FD8F0 (NtUserSetCoreWindow.c)
 *     NtUserFlashWindowEx @ 0x14022EA40 (NtUserFlashWindowEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402B0DD0 (NtUserDeferWindowPosAndBand.c)
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
