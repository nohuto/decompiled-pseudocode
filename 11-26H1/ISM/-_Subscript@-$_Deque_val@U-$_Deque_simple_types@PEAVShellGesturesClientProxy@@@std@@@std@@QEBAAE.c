/*
 * XREFs of ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@QEBAAEBQEAVShellGesturesClientProxy@@_K@Z @ 0x1800961E0
 * Callers:
 *     ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x180072184 (--$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy.c)
 *     ??D?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@QEBAAEBQEAVShellGesturesClientProxy@@XZ @ 0x1800961CC (--D-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClien.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>::_Subscript(
        __int64 a1,
        unsigned __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((a2 >> 1) & (*(_QWORD *)(a1 + 16) - 1LL))) + 8 * (a2 & 1);
}
