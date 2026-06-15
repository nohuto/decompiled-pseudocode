/*
 * XREFs of ??1?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@XZ @ 0x18014A5F8
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigurationSettings@@@Z @ 0x180058868 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigur.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x180148DD8 (--$_Destroy_range@V-$allocator@V-$basic_regex@GV-$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV-.c)
 *     _EffectPackConfiguration::ReadConfiguration_::_1_::dtor$35 @ 0x18016595D (_EffectPackConfiguration--ReadConfiguration_--_1_--dtor$35.c)
 *     _EffectPackConfiguration::ReadConfiguration_::_1_::dtor$36 @ 0x18016596F (_EffectPackConfiguration--ReadConfiguration_--_1_--dtor$36.c)
 *     _EffectPackConfiguration::ReadConfiguration_::_1_::dtor$39 @ 0x180165993 (_EffectPackConfiguration--ReadConfiguration_--_1_--dtor$39.c)
 * Callees:
 *     ?_Tidy@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014DEA8 (-_Tidy@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::~basic_regex<unsigned short,std::regex_traits<unsigned short>>(
        __int64 a1)
{
  std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Tidy(a1);
  std::locale::~locale((std::locale *)(a1 + 24));
}
