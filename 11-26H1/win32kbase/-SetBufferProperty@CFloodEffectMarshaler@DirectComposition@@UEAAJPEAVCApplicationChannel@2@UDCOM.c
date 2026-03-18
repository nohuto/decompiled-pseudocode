/*
 * XREFs of ?SetBufferProperty@CFloodEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235C80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235B90 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCO.c)
 */

__int64 __fastcall DirectComposition::CFloodEffectMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  __int128 v7; // xmm0

  result = 0LL;
  *a6 = 0;
  if ( a3 != 10 )
    return DirectComposition::CFilterEffectMarshaler::SetBufferProperty(a1, a2, a3, a4, a5, a6);
  if ( !a4 || a5 != 16 )
    return 3221225485LL;
  v7 = *a4;
  *(_DWORD *)(a1 + 16) |= 0x400u;
  *(_OWORD *)(a1 + 256) = v7;
  *a6 = 1;
  return result;
}
