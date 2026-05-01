/*
 * XREFs of ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x180436874
 * Callers:
 *     _lambda_d6b6cd96afe151513f0173ad1156cee6_::operator() @ 0x18043AB08 (_lambda_d6b6cd96afe151513f0173ad1156cee6_--operator().c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802E77A0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VClientWindowReadyForPresentationEventArgs@@AEB_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@12@AEB_N@Z @ 0x180436724 (--$Make@VClientWindowReadyForPresentationEventArgs@@AEB_N@Details@WRL@Microsoft@@YA-AV-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(_QWORD *a1, char *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<ClientWindowReadyForPresentationEventArgs,bool const &>(a1, a2);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      63LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v3);
  return a1;
}
