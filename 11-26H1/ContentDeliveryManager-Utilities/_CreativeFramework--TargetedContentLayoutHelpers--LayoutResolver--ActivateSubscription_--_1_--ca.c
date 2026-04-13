/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch$4 @ 0x1800BEA69
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180034E48 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x128,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
    a4);
  return 0LL;
}
