/*
 * XREFs of ??$emplace_back@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAAAEAPEAVShellGesturesClientProxy@@AEAPEAV2@@Z @ 0x18009974C
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C220 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x180072184 (--$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy.c)
 */

__int64 __fastcall std::deque<ShellGesturesClientProxy *>::emplace_back<ShellGesturesClientProxy * &>(
        __int64 a1,
        _QWORD *a2)
{
  std::deque<ShellGesturesClientProxy *>::_Emplace_back_internal<ShellGesturesClientProxy * &>(a1, a2);
  return *((_QWORD *)Src + ((qword_180253FE0 - 1) & ((unsigned __int64)(qword_180253FF0 - 1 + qword_180253FE8) >> 1)))
       + 8LL * (((_DWORD)qword_180253FF0 - 1 + (_DWORD)qword_180253FE8) & 1);
}
