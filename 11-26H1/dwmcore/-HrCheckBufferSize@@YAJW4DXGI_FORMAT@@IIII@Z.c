/*
 * XREFs of ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x1800E79E8
 * Callers:
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800E6E4C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800E7330 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x1802B432C (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall HrCheckBufferSize(enum DXGI_FORMAT a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned __int8 PixelFormatSize; // al
  int v6; // r9d
  __int64 v7; // r11
  unsigned int v8; // r8d
  unsigned __int64 v9; // r10
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // r9d
  unsigned int v15; // ebx
  int v16; // edi

  if ( a4 )
  {
    PixelFormatSize = GetPixelFormatSize(a1);
    v9 = v8 * (unsigned __int64)PixelFormatSize;
    if ( v9 > 0xFFFFFFFF )
    {
      v13 = 1620;
      goto LABEL_8;
    }
    if ( (int)v9 + 7 < (unsigned int)v9 )
    {
      v13 = 1621;
      goto LABEL_8;
    }
    v10 = (unsigned int)(v9 + 7) >> 3;
    if ( (unsigned int)v7 < v10 )
    {
      v16 = -2147024809;
      v13 = 1626;
      v15 = -2147024809;
      v14 = -2147024809;
      goto LABEL_9;
    }
    v11 = v7 * (unsigned int)(v6 - 1);
    if ( v11 > 0xFFFFFFFF )
    {
      v13 = 1629;
      goto LABEL_8;
    }
    v12 = v10 + v11;
    if ( v10 + (unsigned int)v11 < (unsigned int)v11 )
    {
      v13 = 1630;
LABEL_8:
      v14 = -2147024362;
      v15 = -2147024362;
      v16 = -2147024362;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v13, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x682u, 0LL);
      return v15;
    }
    v15 = 0;
  }
  else
  {
    v15 = 0;
    v12 = 0;
  }
  if ( v12 > a5 )
  {
    v15 = -2003292276;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292276, 0x686u, 0LL);
  }
  return v15;
}
