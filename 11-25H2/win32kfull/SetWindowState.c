/*
 * XREFs of SetWindowState @ 0x1401CEFE0
 * Callers:
 *     NtUserSetWindowState @ 0x14024EF20 (NtUserSetWindowState.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1401CF040 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall SetWindowState(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == *((_QWORD *)PtiCurrent((__int64)a1, a2) + 58)
    && (unsigned int)ValidateState(v2) )
  {
    SetOrClrWF(1, a1, v2, 1);
  }
  return 1LL;
}
