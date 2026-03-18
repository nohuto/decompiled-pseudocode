/*
 * XREFs of ?SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401910A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEBUD2D_RECT_F@@PEA_N@Z @ 0x1400B4FBC (-SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PE.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetBufferProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const __m128i *a4,
        __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8
  __int64 v12; // xmm0_8

  v6 = 0;
  v7 = a3 - 17;
  if ( !v7 )
  {
    if ( a5 == 16 && !*(_BYTE *)(a1 + 145) )
    {
      DirectComposition::CRectangleClipMarshaler::SetRectangleHelper(
        (DirectComposition::CRectangleClipMarshaler *)a1,
        a2,
        a4,
        a6);
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a5 == 8 && *(_BYTE *)(a1 + 145) )
    {
      v12 = a4->m128i_i64[0];
      *(_DWORD *)(a1 + 16) &= ~0x2000u;
      *(_QWORD *)(a1 + 96) = v12;
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a5 == 8 && *(_BYTE *)(a1 + 145) )
    {
      v11 = a4->m128i_i64[0];
      *(_DWORD *)(a1 + 16) &= ~0x8000u;
      *(_QWORD *)(a1 + 104) = v11;
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 || a5 != 8 || !*(_BYTE *)(a1 + 145) )
    return (unsigned int)-1073741811;
  v10 = a4->m128i_i64[0];
  *(_DWORD *)(a1 + 16) &= ~0x1000u;
  *(_QWORD *)(a1 + 112) = v10;
LABEL_8:
  *a6 = 1;
  return v6;
}
