/*
 * XREFs of ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x180148C58
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigurationSettings@@@Z @ 0x180058868 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigur.c)
 * Callees:
 *     ??$_Reset@PEBG@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_constants@1@@Z @ 0x180149800 (--$_Reset@PEBG@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_.c)
 *     ??0?$regex_traits@G@std@@QEAA@XZ @ 0x18014A4D4 (--0-$regex_traits@G@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::basic_regex<unsigned short,std::regex_traits<unsigned short>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  char *v5; // r8

  *a1 = 0LL;
  std::regex_traits<unsigned short>::regex_traits<unsigned short>(a1 + 1);
  v4 = a2;
  if ( a2[3] > 7uLL )
    v4 = (_QWORD *)*a2;
  v5 = (char *)v4 + 2 * a2[2];
  if ( a2[3] > 7uLL )
    a2 = (_QWORD *)*a2;
  std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Reset<unsigned short const *>(a1, a2, v5, 256LL);
  return a1;
}
