/*
 * XREFs of ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x1800E6D84
 * Callers:
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800E6B50 (-HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802B47E8 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6AF4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6DE8 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 */

bool __fastcall IsValidPixelFormatInfo(enum DXGI_FORMAT *a1)
{
  int *v1; // rdx
  _DWORD *v2; // rdx
  bool result; // al
  bool v4; // cl
  bool v5; // zf
  unsigned int v6; // ecx

  if ( !(unsigned int)IsValidPixelFormat(*a1) )
    return 0;
  v5 = (unsigned int)HasAlphaChannel(*v1) == 0;
  result = 1;
  if ( v5 )
  {
    if ( v2[1] == 1 )
      return 0;
    v5 = v2[1] == 2;
  }
  else
  {
    v4 = *v2 != 24 || v2[1] != 1;
    v5 = !v4;
  }
  if ( v5 )
    return 0;
  v6 = v2[2];
  if ( v6 >= 0x1A || v6 == 4 )
    return 0;
  return result;
}
