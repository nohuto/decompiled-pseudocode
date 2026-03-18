/*
 * XREFs of ?SetBufferProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1402361A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236200 (-SetBufferProperty@CScenePbrMaterialMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 */

__int64 __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  __int128 v7; // xmm0

  result = 0LL;
  *a6 = 0;
  if ( a3 != 10 )
    return DirectComposition::CScenePbrMaterialMarshaler::SetBufferProperty(a1, a2);
  if ( !a4 || a5 != 16 )
    return 3221225485LL;
  v7 = *a4;
  *(_DWORD *)(a1 + 16) |= 0x10000u;
  *(_OWORD *)(a1 + 128) = v7;
  *a6 = 1;
  return result;
}
