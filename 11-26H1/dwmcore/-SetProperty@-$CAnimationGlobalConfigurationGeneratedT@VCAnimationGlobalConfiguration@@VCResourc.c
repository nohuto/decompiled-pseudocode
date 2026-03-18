/*
 * XREFs of ?SetProperty@?$CAnimationGlobalConfigurationGeneratedT@VCAnimationGlobalConfiguration@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180269BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnGlobalPlaybackRateChanged@CAnimationGlobalConfiguration@@QEAAXXZ @ 0x180269B50 (-OnGlobalPlaybackRateChanged@CAnimationGlobalConfiguration@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationGlobalConfigurationGeneratedT<CAnimationGlobalConfiguration,CResource>::SetProperty(
        CAnimationGlobalConfiguration *a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    return 2147942487LL;
  if ( a3 != 18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12C,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(float *)a4 != *((float *)a1 + 18) )
  {
    *((_DWORD *)a1 + 18) = *a4;
    CAnimationGlobalConfiguration::OnGlobalPlaybackRateChanged(a1);
  }
  return 0LL;
}
