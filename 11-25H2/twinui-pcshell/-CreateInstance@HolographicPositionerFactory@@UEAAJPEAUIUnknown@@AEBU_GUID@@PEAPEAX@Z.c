/*
 * XREFs of ?CreateInstance@HolographicPositionerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180238250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

int __fastcall HolographicPositionerFactory::CreateInstance(
        HolographicPositionerFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  if ( !a2 )
    return HolographicPositioner_CreateInstance(a3, a4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\HolographicPositionerFactory.h",
    (const char *)0x80040110LL);
  return -2147221232;
}
