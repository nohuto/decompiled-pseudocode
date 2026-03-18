/*
 * XREFs of ?SetIntegerProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140237610
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236CA0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  switch ( a3 )
  {
    case 10:
      if ( *(_BYTE *)(a1 + 256) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x400u;
      *(_BYTE *)(a1 + 256) = a4 != 0;
      goto LABEL_17;
    case 11:
      if ( *(_BYTE *)(a1 + 257) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x800u;
      *(_BYTE *)(a1 + 257) = a4 != 0;
      goto LABEL_17;
    case 12:
      if ( *(_BYTE *)(a1 + 258) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x1000u;
      *(_BYTE *)(a1 + 258) = a4 != 0;
      goto LABEL_17;
    case 13:
      if ( *(_BYTE *)(a1 + 259) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x2000u;
      *(_BYTE *)(a1 + 259) = a4 != 0;
      goto LABEL_17;
    case 14:
      if ( *(_BYTE *)(a1 + 260) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x4000u;
      *(_BYTE *)(a1 + 260) = a4 != 0;
LABEL_17:
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty((_DWORD *)a1, a2, a3, a4, a5);
}
