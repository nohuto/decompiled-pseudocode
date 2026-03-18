/*
 * XREFs of ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140185FB0
 * Callers:
 *     ?SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1402359F0 (-SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCO.c)
 *     ?SetBufferProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236640 (-SetBufferProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMP.c)
 * Callees:
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1401861AC (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?SetSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14018E828 (-SetSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14018FBD4 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x140190588 (-SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@.c)
 *     ?SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14019BC94 (-SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 *     ?SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14019FEB4 (-SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX.c)
 *     ?SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x14023B254 (-SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetBufferProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax

  v6 = 0;
  if ( a3 <= 0x1E )
  {
    if ( a3 == 30 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetRelativeOffsetHelper(
                             (DirectComposition::CVisualMarshaler *)a1,
                             a2,
                             a4,
                             a5,
                             a6);
    v7 = a3 - 12;
    if ( !v7 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(
                             (DirectComposition::CVisualMarshaler *)a1,
                             a2,
                             a4,
                             a5,
                             a6);
    v8 = v7 - 1;
    if ( !v8 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetClipRectangleHelper(
                             (DirectComposition::CVisualMarshaler *)a1,
                             a2,
                             a4,
                             a5,
                             a6);
    v9 = v8 - 2;
    if ( !v9 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetHeatMapColorHelper(
                             (DirectComposition::CVisualMarshaler *)a1,
                             a2,
                             a4,
                             a5,
                             a6);
    v10 = v9 - 13;
    if ( !v10 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetOffsetHelper(
                             (DirectComposition::CVisualMarshaler *)a1,
                             a2,
                             a4,
                             a5,
                             a6);
    if ( v10 == 1 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetSizeHelper(
                             (DirectComposition::CVisualMarshaler *)a1,
                             a2,
                             a4,
                             a5,
                             a6);
    return (unsigned int)-1073741811;
  }
  if ( a3 == 31 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetRelativeSizeHelper(
                           (DirectComposition::CVisualMarshaler *)a1,
                           a2,
                           a4,
                           a5,
                           a6);
  if ( a3 == 45 )
  {
    if ( a5 == 12 )
    {
      v14 = *(_QWORD *)a4 - *(_QWORD *)(a1 + 120);
      if ( *(_QWORD *)a4 == *(_QWORD *)(a1 + 120) )
        v14 = a4[2] - (unsigned __int64)*(unsigned int *)(a1 + 128);
      if ( v14 )
      {
        *(_QWORD *)(a1 + 120) = *(_QWORD *)a4;
        v15 = a4[2];
        *(_DWORD *)(a1 + 16) |= 0x40000000u;
        *(_DWORD *)(a1 + 128) = v15;
        goto LABEL_34;
      }
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 48 )
  {
    if ( a3 == 50 && a5 == 16 )
    {
      v12 = *(_QWORD *)a4 - *(_QWORD *)(a1 + 256);
      if ( *(_QWORD *)a4 == *(_QWORD *)(a1 + 256) )
        v12 = *((_QWORD *)a4 + 1) - *(_QWORD *)(a1 + 264);
      if ( v12 )
      {
        *(_OWORD *)(a1 + 256) = *(_OWORD *)a4;
        *(_DWORD *)(a1 + 328) |= 4u;
LABEL_34:
        *a6 = 1;
        return v6;
      }
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( a5 != 16 )
    return (unsigned int)-1073741811;
  v13 = *(_QWORD *)a4 - *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)a4 == *(_QWORD *)(a1 + 240) )
    v13 = *((_QWORD *)a4 + 1) - *(_QWORD *)(a1 + 248);
  if ( v13 )
  {
    *(_OWORD *)(a1 + 240) = *(_OWORD *)a4;
    *(_DWORD *)(a1 + 328) |= 2u;
    goto LABEL_34;
  }
  return v6;
}
