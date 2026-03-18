/*
 * XREFs of ?SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401937F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401BA610 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@U.c)
 */

__int64 __fastcall DirectComposition::CInjectionAnimationMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  if ( a3 == 12 )
  {
    if ( *(_QWORD *)(a1 + 144) == a4 )
      return v5;
    *(_QWORD *)(a1 + 144) = a4;
    goto LABEL_8;
  }
  if ( a3 == 13 )
  {
    if ( *(_QWORD *)(a1 + 152) == a4 )
      return v5;
    *(_QWORD *)(a1 + 152) = a4;
LABEL_8:
    *(_DWORD *)(a1 + 16) &= ~0x1000u;
    *a5 = 1;
    return v5;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(a1);
}
