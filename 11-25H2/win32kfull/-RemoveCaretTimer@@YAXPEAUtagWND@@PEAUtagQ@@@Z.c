/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140158894
 * Callers:
 *     zzzInternalHideCaret @ 0x140052D7C (zzzInternalHideCaret.c)
 *     _SetCaretBlinkTime @ 0x14005EE60 (_SetCaretBlinkTime.c)
 *     zzzSetCaretPos @ 0x140158248 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x140159120 (CaretBlinkProc.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 46) )
  {
    FindTimer((__int64)a1, 0xFFFFLL, 2u, 1, 0LL);
    *((_QWORD *)a2 + 46) = 0LL;
  }
}
