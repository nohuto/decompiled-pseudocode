/*
 * XREFs of ?Provider@InputSwitchingManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180613E04
 * Callers:
 *     ??$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x18061262C (--$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 *     ??$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z @ 0x180612704 (--$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BK@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BK@$$CBG@Z @ 0x180612748 (--$InputSwitchTrace@AEAY0BK@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BK@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0N@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0N@$$CBG@Z @ 0x180612790 (--$InputSwitchTrace@AEAY0N@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0N@$$CBG@Z.c)
 *     ??$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x180612870 (--$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 * Callees:
 *     ?get@?$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerTelemetry@@P6AXXZ@Z @ 0x1806148E8 (-get@-$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerT.c)
 */

const struct _tlgProvider_t *__fastcall InputSwitchingManagerTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<InputSwitchingManagerTelemetry>::get(
                                             a1,
                                             _lambda_e96d1fd5a37f2796eeb5af7e615ffb83_::_lambda_invoker_cdecl_)
                                         + 8);
}
