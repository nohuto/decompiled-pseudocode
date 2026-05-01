/*
 * XREFs of ?VerifyCallingProcessIdentity@FallbackFlyoutView@@UEAAXXZ @ 0x1805D6A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn FallbackFlyoutView::VerifyCallingProcessIdentity(FallbackFlyoutView *this)
{
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x51,
    (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
    (const char *)0x80070308LL,
    v1);
}
