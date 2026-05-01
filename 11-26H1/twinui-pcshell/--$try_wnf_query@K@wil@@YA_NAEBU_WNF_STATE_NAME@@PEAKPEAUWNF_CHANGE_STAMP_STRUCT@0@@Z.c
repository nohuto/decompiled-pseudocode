/*
 * XREFs of ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18040152C
 * Callers:
 *     ??$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180401488 (--$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEB.c)
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180407768 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 * Callees:
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180328158 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

bool __fastcall wil::try_wnf_query<unsigned long>(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v4 = 0;
  LOBYTE(v6) = 0;
  if ( (int)wil::wnf_query_nothrow<unsigned long>(a1, (char *)&v6, a2, a4) >= 0 )
    return (_BYTE)v6 != 0;
  return v4;
}
