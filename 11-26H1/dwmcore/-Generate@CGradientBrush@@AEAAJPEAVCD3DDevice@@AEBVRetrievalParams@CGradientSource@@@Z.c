/*
 * XREFs of ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180103FE0
 * Callers:
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x180103A28 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180103E5C (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180104138 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 * Callees:
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x180038158 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180103060 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 *     ?GetExtendMode@CGradientBrush@@QEBA?AW4Enum@ExtendMode@@XZ @ 0x18021CD70 (-GetExtendMode@CGradientBrush@@QEBA-AW4Enum@ExtendMode@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::Generate(
        CGradientBrush *this,
        struct CD3DDevice *a2,
        const struct CGradientSource::RetrievalParams *a3)
{
  __int64 v3; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  __int64 i; // rax
  char ExtendMode; // al
  unsigned int v12; // eax
  unsigned __int8 v13; // r8
  int v14; // eax
  unsigned int v15; // edi
  _QWORD v17[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 27);
  gsl::details::extent_type<-1>::extent_type<-1>(v17, 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 28) - v3) >> 2));
  v17[1] = v3;
  if ( v17[0] == -1LL || !v3 && v17[0] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v9 = *((_DWORD *)this + 28) == 4;
  *((_BYTE *)this + 241) = 1;
  LOBYTE(v8) = v9;
  for ( i = *((_QWORD *)this + 27); i != *((_QWORD *)this + 28); i += 20LL )
  {
    if ( *(float *)(i + 16) < 1.0 )
    {
      *((_BYTE *)this + 241) = 0;
      break;
    }
  }
  ExtendMode = CGradientBrush::GetExtendMode(this, v7, v8);
  v12 = ExtendMode::ToD2D1ExtendMode(ExtendMode);
  v14 = CGradientSource::Generate(
          (CGradientBrush *)((char *)this + 152),
          (__int64)a2,
          (__int64)a3,
          (unsigned int *)v17,
          v13,
          *((_BYTE *)this + 241),
          *((_BYTE *)this + 242),
          v12);
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xF8u, 0LL);
  else
    *((_BYTE *)this + 240) = 1;
  return v15;
}
