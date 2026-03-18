/*
 * XREFs of ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E963C
 * Callers:
 *     ?_Growmap@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAX_K@Z @ 0x1800E93A0 (-_Growmap@-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(unsigned __int64 a1)
{
  LPVOID v1; // rax
  LPVOID v2; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    std::_Throw_bad_array_new_length();
  v1 = operator new(a1 + 39);
  v2 = v1;
  if ( !v1 )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  result = ((unsigned __int64)v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v2;
  return result;
}
