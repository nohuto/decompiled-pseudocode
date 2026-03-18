/*
 * XREFs of ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x14015C664
 * Callers:
 *     NtUserSetWindowBand @ 0x14015C390 (NtUserSetWindowBand.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402487D0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x14024EC50 (NtUserSetWindowPos.c)
 * Callees:
 *     ValidateHwndIAM @ 0x14015C6C4 (ValidateHwndIAM.c)
 */

__int64 __fastcall ValidateHWNDIA(struct tagWND *a1, struct tagWND **a2)
{
  unsigned int v3; // ebx
  struct tagWND *v5; // rax

  v3 = 1;
  if ( (unsigned __int64)a1 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v5 = (struct tagWND *)ValidateHwndIAM();
    *a2 = v5;
    if ( !v5 || (((*(_WORD *)(*((_QWORD *)v5 + 5) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0 )
      return 0;
  }
  else
  {
    *a2 = a1;
  }
  return v3;
}
