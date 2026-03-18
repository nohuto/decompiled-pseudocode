/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1800E1A4C
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1800E14C4 (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelFormatToDXGIFormat@@YA?AW4DXGI_FORMAT@@W4Enum@MilPixelFormat@@PEA_N@Z @ 0x1800E1B20 (-PixelFormatToDXGIFormat@@YA-AW4DXGI_FORMAT@@W4Enum@MilPixelFormat@@PEA_N@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4Enum@MilPixelFormat@@PEAW4ColorSpace@@@Z @ 0x1800E1B74 (-GetPixelFormatColorSpace@@YAJW4Enum@MilPixelFormat@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4Enum@MilPixelFormat@@@Z @ 0x1800E1BF0 (-HasAlphaChannel@@YAHW4Enum@MilPixelFormat@@@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  void *v4; // r11
  _DWORD *v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // r8d
  int v8; // r11d
  int v9; // eax
  int PixelFormatColorSpace; // eax
  int v11; // r9d
  __int64 v12; // r10
  void *v13; // r11
  unsigned int v14; // ebx
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0;
  v2 = PixelFormatToDXGIFormat(a1, a2, (unsigned int)a1);
  *v5 = v2;
  if ( v2 )
  {
    if ( (unsigned int)HasAlphaChannel(v3) )
    {
      if ( v7 == 69 || v7 == 16 || v7 == 23 || v7 == 26 )
        v9 = v8 + 1;
      else
        v9 = 2;
    }
    else
    {
      v9 = v8 + 3;
    }
    *(_DWORD *)(v6 + 4) = v9;
    PixelFormatColorSpace = GetPixelFormatColorSpace(v7, &v16);
    v14 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, PixelFormatColorSpace, 0x36Du, v13);
    }
    else
    {
      if ( v16 != 2 )
      {
        v11 = (int)v13;
        if ( v16 == 3 )
          v11 = 25;
      }
      *(_DWORD *)(v12 + 8) = v11;
    }
  }
  else
  {
    v14 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, 0x359u, v4);
  }
  return v14;
}
