/*
 * XREFs of ?SetBufferProperty@CSpotLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSpotLightMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // edx
  __int128 v7; // xmm0
  int v8; // eax
  __int128 v9; // xmm0
  int v10; // eax

  v6 = 0;
  *a6 = 0;
  switch ( a3 )
  {
    case 5:
      if ( a4 && a5 == 12 )
      {
        *(_QWORD *)(a1 + 124) = *(_QWORD *)a4;
        v10 = *((_DWORD *)a4 + 2);
        *(_DWORD *)(a1 + 16) |= 0x200u;
        *(_DWORD *)(a1 + 132) = v10;
        goto LABEL_17;
      }
      return (unsigned int)-1073741811;
    case 7:
      if ( a4 && a5 == 16 )
      {
        v9 = *a4;
        *(_DWORD *)(a1 + 16) |= 0x800u;
        *(_OWORD *)(a1 + 140) = v9;
        goto LABEL_17;
      }
      return (unsigned int)-1073741811;
    case 12:
      if ( a4 && a5 == 12 )
      {
        *(_QWORD *)(a1 + 172) = *(_QWORD *)a4;
        v8 = *((_DWORD *)a4 + 2);
        *(_DWORD *)(a1 + 16) |= 0x10000u;
        *(_DWORD *)(a1 + 180) = v8;
        goto LABEL_17;
      }
      return (unsigned int)-1073741811;
  }
  if ( a3 != 14 || !a4 || a5 != 16 )
    return (unsigned int)-1073741811;
  v7 = *a4;
  *(_DWORD *)(a1 + 16) |= 0x40000u;
  *(_OWORD *)(a1 + 188) = v7;
LABEL_17:
  *a6 = 1;
  return v6;
}
