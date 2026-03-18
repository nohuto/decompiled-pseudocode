/*
 * XREFs of ?SetBufferProperty@CCompositionGlyphRunMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235960
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CTextObjectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236510 (-SetBufferProperty@CTextObjectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMP.c)
 */

__int64 __fastcall DirectComposition::CCompositionGlyphRunMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8

  result = 0LL;
  *a6 = 0;
  if ( a3 == 3 )
  {
    if ( a4 && a5 == 8 )
    {
      v8 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x200u;
      *(_QWORD *)(a1 + 80) = v8;
      goto LABEL_10;
    }
  }
  else
  {
    if ( a3 != 4 )
      return DirectComposition::CTextObjectMarshaler::SetBufferProperty(a1, a2);
    if ( a4 && a5 == 8 )
    {
      v7 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x400u;
      *(_QWORD *)(a1 + 88) = v7;
LABEL_10:
      *a6 = 1;
      return result;
    }
  }
  return 3221225485LL;
}
