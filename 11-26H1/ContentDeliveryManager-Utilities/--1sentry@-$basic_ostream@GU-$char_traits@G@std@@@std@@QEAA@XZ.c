/*
 * XREFs of ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18004D36C
 * Callers:
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x18005E75C (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x18005F828 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x1800A5698 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@_W@.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t____::_1_::dtor$0 @ 0x1800BB2E3 (_std--operator___wchar_t_std--char_traits_wchar_t____--_1_--dtor$0.c)
 * Callees:
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18000563C (-uncaught_exception@std@@YA_NXZ.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x18005C354 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::basic_ostream<unsigned short>::sentry::~sentry(__int64 **a1)
{
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(*a1);
  return std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(a1);
}
