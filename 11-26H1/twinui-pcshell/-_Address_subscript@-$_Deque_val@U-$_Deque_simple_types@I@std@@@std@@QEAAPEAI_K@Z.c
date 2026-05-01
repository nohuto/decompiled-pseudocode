/*
 * XREFs of ?_Address_subscript@?$_Deque_val@U?$_Deque_simple_types@I@std@@@std@@QEAAPEAI_K@Z @ 0x18028F2F0
 * Callers:
 *     ??$_Emplace_back_internal@AEBI@?$deque@IV?$allocator@I@std@@@std@@AEAAXAEBI@Z @ 0x18028F224 (--$_Emplace_back_internal@AEBI@-$deque@IV-$allocator@I@std@@@std@@AEAAXAEBI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Deque_val<std::_Deque_simple_types<unsigned int>>::_Address_subscript(
        __int64 a1,
        unsigned __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((a2 >> 2) & (*(_QWORD *)(a1 + 16) - 1LL))) + 4 * (a2 & 3);
}
