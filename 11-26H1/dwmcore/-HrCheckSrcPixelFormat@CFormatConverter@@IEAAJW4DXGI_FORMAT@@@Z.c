/*
 * XREFs of ?HrCheckSrcPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1802B4624
 * Callers:
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802B47E8 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFormatConverter::HrCheckSrcPixelFormat(CFormatConverter *this, enum DXGI_FORMAT a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v2 = -2003292288;
  v3 = a2 - 2;
  if ( !v3 )
    return 0;
  v4 = v3 - 8;
  if ( !v4 )
    return 0;
  v5 = v4 - 1;
  if ( !v5 )
    return 0;
  v6 = v5 - 13;
  if ( !v6 )
    return 0;
  v7 = v6 - 4;
  if ( !v7 )
    return 0;
  v8 = v7 - 37;
  if ( !v8 )
    return 0;
  v9 = v8 - 2;
  if ( !v9 || (unsigned int)(v9 - 20) <= 1 )
    return 0;
  return v2;
}
