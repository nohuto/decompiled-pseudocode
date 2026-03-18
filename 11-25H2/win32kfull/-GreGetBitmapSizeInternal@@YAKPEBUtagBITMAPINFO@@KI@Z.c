/*
 * XREFs of ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015E270
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x140150C80 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateDIBSection @ 0x1401613C0 (NtGdiCreateDIBSection.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x140164D38 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x14017A820 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x14017F5E0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiStretchDIBitsInternal @ 0x14018B1C0 (NtGdiStretchDIBitsInternal.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402B3CB4 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapSizeInternal(const struct tagBITMAPINFO *a1, int a2, unsigned int a3)
{
  int v4; // edi
  int biBitCount; // esi
  DWORD biCompression; // eax
  int biHeight_high; // edx
  DWORD biClrUsed; // ecx
  int v9; // eax
  int v10; // r11d
  unsigned int v11; // eax
  __int64 result; // rax
  int v13; // eax

  if ( !a1 )
    return 0LL;
  v4 = 2;
  if ( a3 == 12 )
  {
    biHeight_high = HIWORD(a1->bmiHeader.biHeight);
    a3 = 12;
    biClrUsed = 0;
    v10 = 3;
LABEL_23:
    if ( biHeight_high != 1 )
    {
      if ( biHeight_high != 4 )
      {
        if ( biHeight_high != 8 )
        {
          v13 = 0;
          if ( a2 != 1 )
            v13 = a2;
          a2 = v13;
          v11 = 0;
          if ( biHeight_high != 16 && biHeight_high != 24 && biHeight_high != 32 )
            return 0LL;
          goto LABEL_12;
        }
LABEL_44:
        v11 = 256;
        goto LABEL_12;
      }
LABEL_50:
      v11 = 16;
      goto LABEL_12;
    }
LABEL_33:
    v11 = 2;
    goto LABEL_12;
  }
  if ( a3 < 0x28 )
    return 0LL;
  biBitCount = a1->bmiHeader.biBitCount;
  biCompression = a1->bmiHeader.biCompression;
  biHeight_high = biBitCount;
  biClrUsed = a1->bmiHeader.biClrUsed;
  if ( biCompression != 3 )
  {
    v10 = 4;
    if ( !biCompression )
      goto LABEL_23;
    if ( biCompression == 10 )
    {
      switch ( biBitCount )
      {
        case 1:
          goto LABEL_33;
        case 4:
          goto LABEL_50;
        case 8:
          goto LABEL_44;
        case 32:
LABEL_48:
          v11 = 0;
          goto LABEL_12;
      }
      return 0LL;
    }
    if ( biCompression != 2 )
    {
      if ( biCompression == 1 )
        goto LABEL_43;
      if ( biCompression != 12 )
      {
        if ( biCompression != 11 )
        {
          if ( biCompression - 4 <= 1 )
            goto LABEL_48;
          return 0LL;
        }
LABEL_43:
        if ( biBitCount == 8 )
          goto LABEL_44;
        return 0LL;
      }
    }
    if ( (_WORD)biBitCount == 4 )
      goto LABEL_50;
    return 0LL;
  }
  v9 = 0;
  if ( a2 != 1 )
    v9 = a2;
  a2 = v9;
  if ( (_WORD)biBitCount != 16 && (_WORD)biBitCount != 32 )
    return 0LL;
  biClrUsed = 3;
  v10 = 4;
  if ( a3 > 0x28 )
    biClrUsed = 0;
  v11 = biClrUsed;
LABEL_12:
  if ( biClrUsed )
  {
    if ( biClrUsed > v11 )
      biClrUsed = v11;
  }
  else
  {
    biClrUsed = v11;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v10 = 0;
    v4 = v10;
  }
  result = (a3 + v4 * biClrUsed + 3) & 0xFFFFFFFC;
  if ( (unsigned int)result < a3 )
    return 0LL;
  return result;
}
