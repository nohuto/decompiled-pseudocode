/*
 * XREFs of ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1402A6D78
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 */

__int64 __fastcall EvaluateArrangeState(__int64 a1)
{
  __int64 DesktopWindow; // rax
  const struct tagWND *v2; // rcx
  char v4; // dl

  DesktopWindow = GetDesktopWindow(a1);
  if ( *((_QWORD *)v2 + 13) != DesktopWindow )
    return 4LL;
  v4 = *(_BYTE *)(*((_QWORD *)v2 + 5) + 31LL);
  if ( (v4 & 0x20) != 0 )
    return 3LL;
  if ( (v4 & 1) != 0 )
    return 0LL;
  return 2 - (unsigned int)IsArranged(v2);
}
