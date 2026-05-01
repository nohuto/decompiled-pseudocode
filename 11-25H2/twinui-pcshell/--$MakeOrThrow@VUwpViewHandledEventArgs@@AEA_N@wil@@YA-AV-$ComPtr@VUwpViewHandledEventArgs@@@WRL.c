/*
 * XREFs of ??$MakeOrThrow@VUwpViewHandledEventArgs@@AEA_N@wil@@YA?AV?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@AEA_N@Z @ 0x18042AAC8
 * Callers:
 *     ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x180430C48 (-OnBackComplete@WindowWrapperBase@@AEAAX_N@Z.c)
 *     ?OnBackComplete@UwpWindowWrapperBase@@AEAAX_N@Z @ 0x18043AA14 (-OnBackComplete@UwpWindowWrapperBase@@AEAAX_N@Z.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED74C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VUwpViewHandledEventArgs@@AEA_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpViewHandledEventArgs@@@12@AEA_N@Z @ 0x18042A9DC (--$Make@VUwpViewHandledEventArgs@@AEA_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@VUwpViewHandledEven.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<UwpViewHandledEventArgs,bool &>(__int64 *a1, char *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<UwpViewHandledEventArgs,bool &>(a1, a2);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x3F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v3);
  return a1;
}
