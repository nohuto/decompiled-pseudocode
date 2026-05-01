/*
 * XREFs of ??$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x18029209C
 * Callers:
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18029200C (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAppViewIconFactory@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x18023033C (--$MakeAndInitialize@VAppViewIconFactory@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIco.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180292128 (-InternalRelease@-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
AppViewIconFactory **__fastcall wil::MakeAndInitializeOrThrow<AppViewIconFactory,IApplicationView * &,IApplicationViewIconLoader * &>(
        AppViewIconFactory **a1,
        __int64 *a2,
        __int64 *a3)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(a1);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<AppViewIconFactory,AppViewIconFactory,IApplicationView * &,IApplicationViewIconLoader * &>(
         a1,
         a2,
         a3);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v6,
      1);
  return a1;
}
