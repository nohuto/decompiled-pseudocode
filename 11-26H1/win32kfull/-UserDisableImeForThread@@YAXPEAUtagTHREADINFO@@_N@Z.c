/*
 * XREFs of ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x14023AA84
 * Callers:
 *     NtUserDisableThreadIme @ 0x140086250 (NtUserDisableThreadIme.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140295B28 (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall UserDisableImeForThread(struct tagTHREADINFO *a1, char a2)
{
  unsigned __int64 *v2; // rax

  _InterlockedOr((volatile signed __int32 *)a1 + 130, 0x2000000u);
  v2 = (unsigned __int64 *)*((_QWORD *)a1 + 102);
  if ( v2 )
  {
    if ( a2 )
      xxxDestroyWindow(*((struct tagWND **)a1 + 102));
    else
      PostEventMessageEx(a1, *((struct tagQ **)a1 + 58), 8u, 0LL, 0, *v2, 0LL, 0LL);
  }
}
