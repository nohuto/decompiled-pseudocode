/*
 * XREFs of ??$regex_match@GV?$regex_traits@G@std@@@std@@YA_NPEBGAEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180134968
 * Callers:
 *     ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18013A840 (-IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@$.c)
 * Callees:
 *     ??$_Match@V?$allocator@V?$sub_match@PEBG@std@@@std@@@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA_NPEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@1@_N@Z @ 0x180133BE0 (--$_Match@V-$allocator@V-$sub_match@PEBG@std@@@std@@@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG.c)
 *     ??0?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA@PEBG0AEBV?$regex_traits@G@1@PEAV_Root_node@1@IW4syntax_option_type@regex_constants@1@W4match_flag_type@51@@Z @ 0x180134D48 (--0-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAA@PEBG0AEBV-$regex_traits@G@1@PEAV_Root_n.c)
 *     ??1?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA@XZ @ 0x180135148 (--1-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::regex_match<unsigned short,std::regex_traits<unsigned short>>(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  char v3; // bl
  _BYTE v5[248]; // [rsp+40h] [rbp-F8h] BYREF

  v2 = -1LL;
  v3 = 0;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  if ( *a2 )
  {
    std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(
      (unsigned int)v5,
      a1,
      a1 + 2 * v2,
      (_DWORD)a2 + 8,
      *a2,
      *(_DWORD *)(*a2 + 40),
      *(_DWORD *)(*a2 + 32),
      16);
    v3 = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match<std::allocator<std::sub_match<unsigned short const *>>>(
           (__int64)v5,
           0LL,
           1);
    std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::~_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(v5);
  }
  return v3;
}
