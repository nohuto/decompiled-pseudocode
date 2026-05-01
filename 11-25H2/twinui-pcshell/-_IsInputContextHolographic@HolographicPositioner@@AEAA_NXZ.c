/*
 * XREFs of ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x1803FCF54
 * Callers:
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18007655C (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1803FC548 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 * Callees:
 *     ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1803F6EB0 (--$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

bool __fastcall HolographicPositioner::_IsInputContextHolographic(
        HolographicPositioner *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  bool result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 152) )
    return 0;
  v5 = 0;
  if ( !wil::try_wnf_query<unsigned long>((__int64)&WNF_HOLO_USER_INPUT_CONTEXT, &v5, a3, a4) )
    return 0;
  result = 1;
  if ( v5 != 1 )
    return 0;
  return result;
}
