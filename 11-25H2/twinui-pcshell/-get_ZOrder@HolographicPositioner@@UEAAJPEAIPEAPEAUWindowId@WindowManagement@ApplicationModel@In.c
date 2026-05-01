/*
 * XREFs of ?get_ZOrder@HolographicPositioner@@UEAAJPEAIPEAPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803FE740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall HolographicPositioner::get_ZOrder(
        HolographicPositioner *this,
        unsigned int *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::WindowId **a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x490,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
