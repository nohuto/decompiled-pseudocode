/*
 * XREFs of _CExclusiveModeListener::OnHmdRemoved_::_1_::catch$11 @ 0x18016C02F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::OnHmdRemoved_::_1_::catch_11(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0xEA,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
