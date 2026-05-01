/*
 * XREFs of ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18012F394
 * Callers:
 *     _dynamic_initializer_for__listening__ @ 0x18012DF10 (_dynamic_initializer_for__listening__.c)
 *     _dynamic_initializer_for__BlockIdle__ @ 0x18012F530 (_dynamic_initializer_for__BlockIdle__.c)
 *     _dynamic_initializer_for__BlockThinking__ @ 0x18012F590 (_dynamic_initializer_for__BlockThinking__.c)
 *     _dynamic_initializer_for__BlockError__ @ 0x18012F7C0 (_dynamic_initializer_for__BlockError__.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18013BF14 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<Windows::UI::Color>::_Buy_nonzero(__int64 *a1, unsigned __int64 a2)
{
  __int64 size_of; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<4>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 4 * a2;
  a1[2] = result;
  return result;
}
