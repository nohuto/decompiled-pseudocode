/*
 * XREFs of ?SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140241090
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401BA610 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@U.c)
 */

__int64 __fastcall DirectComposition::CConditionalExpressionMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 14 )
    return DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
  if ( *(_DWORD *)(a1 + 192) != (_DWORD)a4 )
  {
    *(_DWORD *)(a1 + 192) = a4;
    *a5 = 1;
    *(_DWORD *)(a1 + 16) &= ~0x2000u;
  }
  return result;
}
