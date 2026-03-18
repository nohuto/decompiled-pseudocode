/*
 * XREFs of ?MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z @ 0x1801C7DE4
 * Callers:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x1801C7D30 (-GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1802251B0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MilPfToWic(int a1, GUID *a2)
{
  GUID v3; // xmm0

  if ( a1 <= 31 )
  {
    *a2 = GUID_WICPixelFormatDontCare;
    a2->Data4[7] = a1;
    return 0LL;
  }
  switch ( a1 )
  {
    case ',':
      v3 = GUID_WICPixelFormat40bppCMYKAlpha;
LABEL_52:
      *a2 = v3;
      return 0LL;
    case '-':
      v3 = GUID_WICPixelFormat80bppCMYKAlpha;
      goto LABEL_52;
    case 'C':
      v3 = GUID_WICPixelFormat8bppAlpha;
      goto LABEL_52;
    case 'D':
      v3 = GUID_WICPixelFormat32bppRGBA;
      goto LABEL_52;
    case 'E':
      v3 = GUID_WICPixelFormat32bppPRGBA;
      goto LABEL_52;
    case 'H':
      v3 = GUID_WICPixelFormat64bppBGRA;
      goto LABEL_52;
    case 'I':
      v3 = GUID_WICPixelFormat64bppPBGRA;
      goto LABEL_52;
    case 'G':
      v3 = GUID_WICPixelFormat48bppBGR;
      goto LABEL_52;
    case 'F':
      v3 = GUID_WICPixelFormat16bppBGRA5551;
      goto LABEL_52;
    case 'J':
      v3 = GUID_WICPixelFormat48bppBGRFixedPoint;
      goto LABEL_52;
    case 'K':
      v3 = GUID_WICPixelFormat64bppBGRAFixedPoint;
      goto LABEL_52;
    case 'L':
      v3 = GUID_WICPixelFormat96bppRGBFloat;
      goto LABEL_52;
    case 'M':
      v3 = GUID_WICPixelFormat32bppRGB;
      goto LABEL_52;
    case 'N':
      v3 = GUID_WICPixelFormat64bppRGB;
      goto LABEL_52;
    case 'O':
      v3 = GUID_WICPixelFormat8bppY;
      goto LABEL_52;
    case 'P':
      v3 = GUID_WICPixelFormat8bppCb;
      goto LABEL_52;
    case 'Q':
      v3 = GUID_WICPixelFormat8bppCr;
      goto LABEL_52;
    case 'R':
      v3 = GUID_WICPixelFormat16bppCbCr;
      goto LABEL_52;
    case ' ':
      v3 = GUID_WICPixelFormat32bppR10G10B10A2;
      goto LABEL_52;
    case '!':
      v3 = GUID_WICPixelFormat32bppR10G10B10A2HDR10;
      goto LABEL_52;
    case 'S':
      v3 = GUID_WICPixelFormat8bppDepth;
      goto LABEL_52;
    case 'T':
      v3 = GUID_WICPixelFormat8bppGain;
      goto LABEL_52;
    case 'U':
      v3 = GUID_WICPixelFormat24bppRGBGain;
      goto LABEL_52;
    case 'V':
      v3 = GUID_WICPixelFormat32bppBGRGain;
      goto LABEL_52;
  }
  return 2147500037LL;
}
