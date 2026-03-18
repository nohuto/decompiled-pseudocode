/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180102B5C
 * Callers:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180102130 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x180102424 (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x1801025E0 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801029C0 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180102AC0 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x180102DA0 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 *     ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x1802984C0 (-CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z.c)
 *     ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180298530 (-CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DIn.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::TranslateDXGIorD3DErrorInContext(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // r9d
  int v11; // ecx
  __int64 v12; // rax
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v3 = a1 + 1108;
  v4 = a2;
  if ( !a1 )
    v3 = 1124LL;
  if ( !*(_DWORD *)v3 && (a2 == -2005532292 || a2 == -2147024882 || a2 == -2005270523) )
  {
    v8 = a1;
    if ( !a1 )
      v8 = 16LL;
    if ( *(_DWORD *)(v8 + 424) )
    {
      if ( a2 == -2005270523 )
      {
        v9 = a1 + 528;
        if ( !a1 )
          v9 = 544LL;
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v9 + 312LL))(*(_QWORD *)v9) != -2005270480 )
        {
          if ( *(_DWORD *)v3 )
            return (unsigned int)-2003304307;
          *(_DWORD *)v3 = -2005270523;
LABEL_23:
          if ( !*(_DWORD *)v3 )
            goto LABEL_8;
          return (unsigned int)-2003304307;
        }
        if ( !*(_DWORD *)v3 )
          *(_DWORD *)v3 = -2005270480;
      }
      CD2DContext::TempDisableHardwareProtection((CD2DContext *)v8);
    }
  }
  if ( v4 < 0 )
    goto LABEL_23;
LABEL_8:
  v13 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v4, 0, &v13) )
  {
    v10 = v13;
    v11 = -2003304307;
    if ( v13 == -2003304307 && !*(_DWORD *)v3 )
    {
      v12 = a1 + 1108;
      if ( v4 < 0 )
        v11 = v4;
      if ( !a1 )
        v12 = 1124LL;
      *(_DWORD *)v12 = v11;
    }
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xB71u, 0LL);
  }
  return (unsigned int)v4;
}
