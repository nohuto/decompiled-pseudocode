/*
 * XREFs of ?_Getblock@?$deque@IV?$allocator@I@std@@@std@@AEBA_J_K@Z @ 0x18028F2D8
 * Callers:
 *     ??$_Emplace_back_internal@AEBI@?$deque@IV?$allocator@I@std@@@std@@AEAAXAEBI@Z @ 0x18028F224 (--$_Emplace_back_internal@AEBI@-$deque@IV-$allocator@I@std@@@std@@AEAAXAEBI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<unsigned int>::_Getblock(__int64 a1, unsigned __int64 a2)
{
  return (a2 >> 2) & (*(_QWORD *)(a1 + 16) - 1LL);
}
