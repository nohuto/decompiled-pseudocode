/*
 * XREFs of ??1_Reallocation_guard@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@QEAA@XZ @ 0x18014A894
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$basic_regex@GV?$regex_traits@G@std@@@std@@@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@AEAAPEAV?$basic_regex@GV?$regex_traits@G@std@@@1@QEAV21@AEBV21@@Z @ 0x180148E10 (--$_Emplace_reallocate@AEBV-$basic_regex@GV-$regex_traits@G@std@@@std@@@-$vector@V-$basic_regex@.c)
 *     _std::vector_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____std::allocator_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short_______::_Emplace_reallocate_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____const_&__::_1_::dtor$0 @ 0x18016BCA0 (_std--vector_std--basic_regex_unsigned_short_std--regex_traits_unsigned_short____std--allocator_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x180148DD8 (--$_Destroy_range@V-$allocator@V-$basic_regex@GV-$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV-.c)
 */

void __fastcall std::vector<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(40LL * *(_QWORD *)(a1 + 16)));
  }
}
