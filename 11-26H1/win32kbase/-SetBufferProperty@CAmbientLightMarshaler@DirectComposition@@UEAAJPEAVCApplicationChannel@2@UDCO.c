/*
 * XREFs of ?SetBufferProperty@CAmbientLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAmbientLightMarshaler::SetBufferProperty(
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
  if ( a3 != 3 || !a4 || a5 != 16 )
    return 3221225485LL;
  v7 = *a4;
  *(_DWORD *)(a1 + 16) |= 0x80u;
  *(_OWORD *)(a1 + 112) = v7;
  *a6 = 1;
  return result;
}
