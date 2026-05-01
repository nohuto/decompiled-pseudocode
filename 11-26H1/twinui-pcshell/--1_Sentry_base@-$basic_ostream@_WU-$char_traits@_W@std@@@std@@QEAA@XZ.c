/*
 * XREFs of ??1_Sentry_base@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x1801F3754
 * Callers:
 *     ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x1801F3718 (--1sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@XZ.c)
 *     _std::basic_ostream_wchar_t_std::char_traits_wchar_t___::sentry::sentry_::_1_::dtor$0 @ 0x180706FA8 (_std--basic_ostream_wchar_t_std--char_traits_wchar_t___--sentry--sentry_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::wostream::_Sentry_base::~_Sentry_base(__int64 a1)
{
  __int64 result; // rax

  result = std::wios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}
