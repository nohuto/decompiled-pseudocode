/*
 * XREFs of __lambda_f0f613184e0e47442428064dff914436_::operator()_::_1_::catch$12 @ 0x1800BBCA6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180069F00 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall _lambda_f0f613184e0e47442428064dff914436_::operator()_::_1_::catch_12(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+20h] [rbp-28h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 296),
    (unsigned __int16 *)0x8F,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    "Failed to handle an Activity Toast Notification",
    v3);
  return 0LL;
}
