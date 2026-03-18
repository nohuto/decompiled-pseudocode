/*
 * XREFs of ?SetIntegerProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140247100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 64) != a4 )
    *(_DWORD *)(a1 + 64) = a4;
  return result;
}
