/*
 * XREFs of ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x1800D70B0
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x1800D5BEC (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800D7088 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18019805C (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = (__int64 *)*a1;
  v3 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      v4 = v3 + 2;
      if ( (unsigned __int64)v3[4] >= *a2 )
      {
        v4 = v3;
        v2 = v3;
      }
      v3 = (__int64 *)*v4;
    }
    while ( !*(_BYTE *)(*v4 + 25) );
  }
  if ( *((_BYTE *)v2 + 25) || *a2 < (unsigned __int64)v2[4] )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800D7113LL);
  }
  return v2 + 5;
}
