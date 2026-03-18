/*
 * XREFs of ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x14012223C (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x14023CC1C (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  int v11; // eax

  v6 = 0;
  *a6 = 0;
  if ( a3 >= 6 )
  {
    if ( !a4 || a5 != 36 * (a5 / 0x24) )
      return (unsigned int)-1073741811;
    return (unsigned int)DirectComposition::CInkMarshaler::SetSegments(
                           (DirectComposition::CInkMarshaler *)a1,
                           a3 - 6,
                           (const struct D2D1_INK_BEZIER_SEGMENT *)a4,
                           a5 / 0x24,
                           a6);
  }
  if ( !a3 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    *(_OWORD *)(a1 + 56) = *(_OWORD *)a4;
LABEL_22:
    *(_DWORD *)(a1 + 16) &= ~0x40u;
    goto LABEL_18;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( !a4 || a5 != 28 )
      return (unsigned int)-1073741811;
    *(_OWORD *)(a1 + 72) = *(_OWORD *)a4;
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a4 + 16);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a4 + 24);
    goto LABEL_22;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 2 && a4 && a5 == 36 )
      {
        if ( *(_QWORD *)(a1 + 136) )
          return (unsigned int)DirectComposition::CInkMarshaler::SetSegments(
                                 (DirectComposition::CInkMarshaler *)a1,
                                 *(_DWORD *)(a1 + 136) - 1,
                                 (const struct D2D1_INK_BEZIER_SEGMENT *)a4,
                                 1u,
                                 a6);
        else
          return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741811;
    }
    if ( !a4 || a5 != 36 * (a5 / 0x24) )
      return (unsigned int)-1073741811;
    return (unsigned int)DirectComposition::CInkMarshaler::AddSegments(
                           (DirectComposition::CInkMarshaler *)a1,
                           (const struct D2D1_INK_BEZIER_SEGMENT *)a4,
                           a5 / 0x24,
                           a6);
  }
  if ( !a4 || a5 != 12 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 100) = *(_QWORD *)a4;
  v11 = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a1 + 16) &= ~0x80u;
  *(_DWORD *)(a1 + 108) = v11;
LABEL_18:
  *a6 = 1;
  return v6;
}
