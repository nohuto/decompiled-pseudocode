/*
 * XREFs of ?CoInitializeEx_failfast@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x180673DA8
 * Callers:
 *     _lambda_27cd2e73ea263861ea4b21bcac0743fb_::operator() @ 0x180673B30 (_lambda_27cd2e73ea263861ea4b21bcac0743fb_--operator().c)
 *     _lambda_60171be431ab7e306603b28a1d6e78d6_::operator() @ 0x180673BB4 (_lambda_60171be431ab7e306603b28a1d6e78d6_--operator().c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

_BYTE *__fastcall wil::CoInitializeEx_failfast(_BYTE *a1)
{
  HRESULT v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CoInitializeEx(0LL, 0);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x143A,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v2,
      v4);
  *a1 = 1;
  return a1;
}
