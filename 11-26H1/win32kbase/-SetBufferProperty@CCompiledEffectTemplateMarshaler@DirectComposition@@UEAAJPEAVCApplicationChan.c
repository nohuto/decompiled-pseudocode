/*
 * XREFs of ?SetBufferProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1402436E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 4 && a5 == 8 )
    *(_QWORD *)(a1 + 88) = *a4;
  else
    return (unsigned int)-1073741811;
  return v6;
}
