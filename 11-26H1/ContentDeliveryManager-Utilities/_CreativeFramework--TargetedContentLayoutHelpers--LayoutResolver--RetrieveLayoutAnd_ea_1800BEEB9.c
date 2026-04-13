/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$23 @ 0x1800BEEB9
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180069F00 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch_23(
        __int64 a1,
        __int64 a2)
{
  PCWSTR StringRawBuffer; // rbx
  const char *v4; // rax

  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)(a2 + 64), 0LL);
  v4 = (const char *)WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a2 + 112) + 8LL), 0LL);
  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 216),
    (unsigned __int16 *)0x1CD,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
    "Subscription ID: %ls, Content ID: %ls",
    v4,
    StringRawBuffer);
  return 0LL;
}
