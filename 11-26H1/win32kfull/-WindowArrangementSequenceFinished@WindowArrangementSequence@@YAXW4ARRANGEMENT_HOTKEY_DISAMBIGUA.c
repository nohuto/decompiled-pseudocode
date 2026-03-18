/*
 * XREFs of ?WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1402A7B14
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1401F3534 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1401F35F8 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1402DB2F4 (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 */

__int64 __fastcall WindowArrangementSequence::WindowArrangementSequenceFinished(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  NotifyShell::ArrangementHotKey(a1, 8LL);
  result = W32GetUserSessionState(v2, v1);
  *(_DWORD *)(result + 63416) = 0;
  return result;
}
