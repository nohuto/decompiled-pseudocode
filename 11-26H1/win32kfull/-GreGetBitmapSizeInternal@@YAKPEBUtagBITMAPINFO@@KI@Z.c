/*
 * XREFs of ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x140078B3C
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x140078CC0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402CE7E8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapSizeInternal(const struct tagBITMAPINFO *a1, int a2, unsigned int a3)
{
  int v5; // edi
  DWORD biCompression; // eax
  int biHeight_high; // ecx
  DWORD biClrUsed; // edx
  int v9; // eax
  int v10; // r10d
  unsigned int v11; // eax
  __int64 result; // rax
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  if ( !a1 )
    return 0LL;
  v5 = 2;
  if ( a3 == 12 )
  {
    biHeight_high = HIWORD(a1->bmiHeader.biHeight);
    a3 = 12;
    biClrUsed = 0;
    v10 = 3;
LABEL_21:
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
          goto LABEL_11;
        }
LABEL_46:
        v11 = 256;
        goto LABEL_11;
      }
LABEL_52:
      v11 = 16;
      goto LABEL_11;
    }
LABEL_33:
    v11 = 2;
    goto LABEL_11;
  }
  if ( a3 < 0x28 )
    return 0LL;
  biCompression = a1->bmiHeader.biCompression;
  biHeight_high = a1->bmiHeader.biBitCount;
  biClrUsed = a1->bmiHeader.biClrUsed;
  if ( biCompression != 3 )
  {
    v10 = 4;
    if ( !biCompression )
      goto LABEL_21;
    if ( biCompression == 10 )
    {
      v14 = biHeight_high - 1;
      if ( !v14 )
        goto LABEL_33;
      v15 = v14 - 3;
      if ( !v15 )
        goto LABEL_52;
      v16 = v15 - 4;
      if ( !v16 )
        goto LABEL_46;
      if ( v16 == 24 )
      {
LABEL_50:
        v11 = 0;
        goto LABEL_11;
      }
      return 0LL;
    }
    if ( biCompression != 2 )
    {
      if ( biCompression == 1 )
        goto LABEL_45;
      if ( biCompression != 12 )
      {
        if ( biCompression != 11 )
        {
          if ( biCompression - 4 <= 1 )
            goto LABEL_50;
          return 0LL;
        }
LABEL_45:
        if ( biHeight_high == 8 )
          goto LABEL_46;
        return 0LL;
      }
    }
    if ( biHeight_high == 4 )
      goto LABEL_52;
    return 0LL;
  }
  v9 = 0;
  if ( a2 != 1 )
    v9 = a2;
  a2 = v9;
  if ( biHeight_high != 32 && biHeight_high != 16 )
    return 0LL;
  biClrUsed = 3;
  v10 = 4;
  if ( a3 > 0x28 )
    biClrUsed = 0;
  v11 = biClrUsed;
LABEL_11:
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
    v5 = v10;
  }
  result = (a3 + v5 * biClrUsed + 3) & 0xFFFFFFFC;
  if ( (unsigned int)result < a3 )
    return 0LL;
  return result;
}
