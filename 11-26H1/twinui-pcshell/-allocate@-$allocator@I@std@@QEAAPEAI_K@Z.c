/*
 * XREFs of ?allocate@?$allocator@I@std@@QEAAPEAI_K@Z @ 0x1801B2848
 * Callers:
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z @ 0x18027B42C (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802B9568 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::allocator<unsigned int>::allocate(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return std::_Allocate<16,std::_Default_allocate_traits>(4 * a2);
}
