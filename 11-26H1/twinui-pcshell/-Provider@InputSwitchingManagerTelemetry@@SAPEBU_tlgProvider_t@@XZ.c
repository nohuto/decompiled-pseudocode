/*
 * XREFs of ?Provider@InputSwitchingManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180639C04
 * Callers:
 *     ??$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x1806382B0 (--$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 *     ??$InputSwitchTrace@AEAY0BB@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BB@$$CBG@Z @ 0x180638388 (--$InputSwitchTrace@AEAY0BB@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BB@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z @ 0x1806383CC (--$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BG@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BG@$$CBG@Z @ 0x180638410 (--$InputSwitchTrace@AEAY0BG@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BG@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BK@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BK@$$CBG@Z @ 0x180638454 (--$InputSwitchTrace@AEAY0BK@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BK@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x18063849C (--$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0N@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0N@$$CBG@Z @ 0x1806384E0 (--$InputSwitchTrace@AEAY0N@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0N@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0O@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0O@$$CBG@Z @ 0x180638528 (--$InputSwitchTrace@AEAY0O@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0O@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z @ 0x18063856C (--$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z.c)
 *     ??$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x180638648 (--$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 * Callees:
 *     ?get@?$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerTelemetry@@P6AXXZ@Z @ 0x18063A7A0 (-get@-$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerT.c)
 */

const struct _tlgProvider_t *__fastcall InputSwitchingManagerTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<InputSwitchingManagerTelemetry>::get(
                                             a1,
                                             _lambda_e96d1fd5a37f2796eeb5af7e615ffb83_::_lambda_invoker_cdecl_)
                                         + 8);
}
