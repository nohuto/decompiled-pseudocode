/*
 * XREFs of ?SetBufferProperty@CDropShadowMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140244670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  int v8; // eax
  __int128 v9; // xmm0

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    v9 = *a4;
    *(_DWORD *)(a1 + 16) |= 0x200u;
    *(_OWORD *)(a1 + 80) = v9;
    goto LABEL_10;
  }
  if ( a3 != 4 )
    return 3221225485LL;
  if ( a4 && a5 == 12 )
  {
    *(_DWORD *)(a1 + 100) = *(_DWORD *)a4;
    *(_DWORD *)(a1 + 104) = *((_DWORD *)a4 + 1);
    v8 = *((_DWORD *)a4 + 2);
    *(_DWORD *)(a1 + 16) |= 0x800u;
    *(_DWORD *)(a1 + 108) = v8;
LABEL_10:
    *a6 = 1;
  }
  return v6;
}
