/*
 * XREFs of ?_Getblock@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEBA_J_K@Z @ 0x18015DAF4
 * Callers:
 *     ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x180072184 (--$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<ShellGesturesClientProxy *>::_Getblock(__int64 a1, unsigned __int64 a2)
{
  return (a2 >> 1) & (qword_180253FE0 - 1);
}
