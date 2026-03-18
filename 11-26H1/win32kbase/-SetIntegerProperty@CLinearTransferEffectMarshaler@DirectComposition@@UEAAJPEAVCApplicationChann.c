/*
 * XREFs of ?SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140237210
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236CA0 (-SetIntegerProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::SetIntegerProperty(
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
    case 12:
      if ( *(_BYTE *)(a1 + 264) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x1000u;
      *(_BYTE *)(a1 + 264) = a4 != 0;
      goto LABEL_17;
    case 15:
      if ( *(_BYTE *)(a1 + 276) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x8000u;
      *(_BYTE *)(a1 + 276) = a4 != 0;
      goto LABEL_17;
    case 18:
      if ( *(_BYTE *)(a1 + 288) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x40000u;
      *(_BYTE *)(a1 + 288) = a4 != 0;
      goto LABEL_17;
    case 21:
      if ( *(_BYTE *)(a1 + 300) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x200000u;
      *(_BYTE *)(a1 + 300) = a4 != 0;
      goto LABEL_17;
    case 22:
      if ( *(_BYTE *)(a1 + 301) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x400000u;
      *(_BYTE *)(a1 + 301) = a4 != 0;
LABEL_17:
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty((_DWORD *)a1, a2, a3, a4, a5);
}
