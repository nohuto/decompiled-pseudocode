/*
 * XREFs of ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401A2C28
 * Callers:
 *     NtUserSetWindowPos @ 0x14025CDA0 (NtUserSetWindowPos.c)
 *     NtUserSetWindowBand @ 0x14027A3C0 (NtUserSetWindowBand.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402B0DD0 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     ValidateHwndIAM @ 0x1401A2C8C (ValidateHwndIAM.c)
 */

__int64 __fastcall ValidateHWNDIA(struct tagWND *a1, struct tagWND **a2)
{
  unsigned int v3; // ebx
  struct tagWND *v5; // rax
  int v6; // ecx

  v3 = 1;
  if ( (unsigned __int64)a1 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v5 = (struct tagWND *)ValidateHwndIAM();
    *a2 = v5;
    if ( !v5 )
      return 0;
    v6 = *(_WORD *)(*((_QWORD *)v5 + 5) + 42LL) & 0x2FFF;
    if ( v6 == 669 || v6 == 671 )
      return 0;
  }
  else
  {
    *a2 = a1;
  }
  return v3;
}
