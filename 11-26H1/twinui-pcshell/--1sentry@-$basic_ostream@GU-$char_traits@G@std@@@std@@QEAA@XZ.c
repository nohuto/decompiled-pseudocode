/*
 * XREFs of ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180342E68
 * Callers:
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18033ADFC (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x18068C358 (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0 @ 0x1806E36A7 (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_ostream<unsigned short>::sentry::~sentry(_QWORD *a1)
{
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(*a1);
  return std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base((__int64)a1);
}
