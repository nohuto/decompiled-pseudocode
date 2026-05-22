/*
 * XREFs of ?OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z @ 0x1800E41B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x1800E3C48 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E44C0 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::OnSessionNotification(LampArrayRawInputProvider *this, int a2)
{
  int v2; // edx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2 - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
      LampArrayRawInputProvider::Shutdown((ULONG_PTR)this - 8);
  }
  else
  {
    v4 = LampArrayRawInputProvider::Initialize((ULONG_PTR)this - 8, 0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v4,
        v5);
  }
  return 0LL;
}
