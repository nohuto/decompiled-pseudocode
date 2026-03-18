/*
 * XREFs of ?SetBufferProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401B2FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  int v7; // r8d
  __int128 v8; // xmm0
  __int128 v9; // xmm0

  result = 0LL;
  *a6 = 0;
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 == 2 && a4 && a5 == 16 )
    {
      v8 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x200u;
      *(_OWORD *)(a1 + 88) = v8;
LABEL_9:
      *a6 = 1;
      return result;
    }
  }
  else if ( a4 && a5 == 16 )
  {
    v9 = *a4;
    *(_DWORD *)(a1 + 16) |= 0x80u;
    *(_OWORD *)(a1 + 60) = v9;
    goto LABEL_9;
  }
  return 3221225485LL;
}
