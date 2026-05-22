/*
 * XREFs of ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x180072184
 * Callers:
 *     ??$emplace_back@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAAAEAPEAVShellGesturesClientProxy@@AEAPEAV2@@Z @ 0x18009974C (--$emplace_back@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy@@V-$alloc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@QEBAAEBQEAVShellGesturesClientProxy@@_K@Z @ 0x1800961E0 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@QEBAAE.c)
 *     ?_Getblock@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEBA_J_K@Z @ 0x18015DAF4 (-_Getblock@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std.c)
 *     ?_Growmap@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x18015DB0C (-_Growmap@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@.c)
 */

_QWORD *__fastcall std::deque<ShellGesturesClientProxy *>::_Emplace_back_internal<ShellGesturesClientProxy * &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *result; // rax

  v2 = qword_180253FF0;
  v4 = qword_180253FE8;
  if ( (((_BYTE)qword_180253FE8 + (_BYTE)qword_180253FF0) & 1) == 0
    && qword_180253FE0 <= (unsigned __int64)(qword_180253FF0 + 2) >> 1 )
  {
    std::deque<ShellGesturesClientProxy *>::_Growmap();
    v2 = qword_180253FF0;
    v4 = qword_180253FE8;
  }
  qword_180253FE8 = (2 * qword_180253FE0 - 1) & v4;
  v5 = qword_180253FE8 + v2;
  v6 = std::deque<ShellGesturesClientProxy *>::_Getblock(v2, qword_180253FE8 + v2);
  if ( !*((_QWORD *)Src + v6) )
    *((_QWORD *)Src + v6) = std::_Allocate<16,std::_Default_allocate_traits>(16LL);
  result = (_QWORD *)std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>::_Subscript(
                       &ShellGesturesProcessor::s_clients,
                       v5);
  *result = *a2;
  ++qword_180253FF0;
  return result;
}
