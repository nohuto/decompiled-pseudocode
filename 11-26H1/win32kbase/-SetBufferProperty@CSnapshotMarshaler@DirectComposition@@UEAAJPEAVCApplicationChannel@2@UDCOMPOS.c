/*
 * XREFs of ?SetBufferProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023FE20
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

__int64 __fastcall DirectComposition::CSnapshotMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        _OWORD *a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  __int128 v9; // xmm1

  v6 = 0;
  *a6 = 0;
  if ( a3 == 4 && a5 == 64 )
  {
    if ( memcmp((const void *)(a1 + 76), a4, 0x40uLL) )
    {
      *(_OWORD *)(a1 + 76) = *a4;
      *(_OWORD *)(a1 + 92) = a4[1];
      *(_OWORD *)(a1 + 108) = a4[2];
      v9 = a4[3];
      *(_DWORD *)(a1 + 16) |= 0x40u;
      *(_OWORD *)(a1 + 124) = v9;
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
