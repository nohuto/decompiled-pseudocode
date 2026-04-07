/*
 * XREFs of ??$detach_abi@URect@Foundation@Windows@winrt@@$0A@@winrt@@YA?A_P$$QEAURect@Foundation@Windows@0@@Z @ 0x18008E918
 * Callers:
 *     ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18002466C (--$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA-A_P$$QEAURect@Foundation@Windows@.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall winrt::detach_abi<winrt::Windows::Foundation::Rect,0>(_OWORD *a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a1;
  *a1 = *a2;
  return result;
}
