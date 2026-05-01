/*
 * XREFs of ?allocate@?$allocator@I@std@@QEAAPEAI_K@Z @ 0x1801A7FAC
 * Callers:
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z @ 0x1801A7EBC (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z.c)
 *     ??$_Emplace_back_internal@AEBI@?$deque@IV?$allocator@I@std@@@std@@AEAAXAEBI@Z @ 0x180297BD0 (--$_Emplace_back_internal@AEBI@-$deque@IV-$allocator@I@std@@@std@@AEAAXAEBI@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x180599D28 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180295F8C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

void *__fastcall std::allocator<unsigned int>::allocate(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  void *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v2 = 4 * a2;
  if ( 4 * a2 >= 0x1000 )
    return (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v2);
  result = 0LL;
  if ( v2 )
    return operator new(v2);
  return result;
}
