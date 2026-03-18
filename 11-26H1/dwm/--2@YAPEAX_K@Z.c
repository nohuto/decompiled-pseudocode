/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x140005574
 * Callers:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140004C40 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140004C64 (--_U@YAPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x14000D5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x14000D694 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 * Callees:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x140005734 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x14000575C (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     _o__callnewh_0 @ 0x14000584C (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x140005930 (_o_malloc_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = o_malloc_0(Size);
    if ( result )
      break;
    if ( !(unsigned int)o__callnewh_0(i) )
    {
      if ( i != -1LL )
        __scrt_throw_std_bad_alloc();
      __scrt_throw_std_bad_array_new_length();
    }
  }
  return result;
}
