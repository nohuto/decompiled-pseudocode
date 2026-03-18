/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127B74
 * Callers:
 *     zzzSetCaretPos @ 0x140129180 (zzzSetCaretPos.c)
 *     zzzInternalHideCaret @ 0x14012B0B4 (zzzInternalHideCaret.c)
 *     _SetCaretBlinkTime @ 0x1402038A0 (_SetCaretBlinkTime.c)
 *     CaretBlinkProc @ 0x14020B880 (CaretBlinkProc.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 49) )
  {
    FindTimer((__int64)a1, 0xFFFFLL, 2u, 1, 0LL);
    *((_QWORD *)a2 + 49) = 0LL;
  }
}
