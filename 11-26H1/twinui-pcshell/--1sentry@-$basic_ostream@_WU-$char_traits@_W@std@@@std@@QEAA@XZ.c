/*
 * XREFs of ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x1801F3718
 * Callers:
 *     _std::operator___wchar_t_std::char_traits_wchar_t____::_1_::dtor$0 @ 0x1806D908E (_std--operator___wchar_t_std--char_traits_wchar_t____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wostream::sentry::~sentry(_QWORD *a1)
{
  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(*a1);
  return std::wostream::_Sentry_base::~_Sentry_base(a1);
}
