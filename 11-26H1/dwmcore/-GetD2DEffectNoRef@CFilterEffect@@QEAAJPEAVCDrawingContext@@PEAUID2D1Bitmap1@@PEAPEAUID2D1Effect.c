/*
 * XREFs of ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x1801D1910
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801D16E0 (-RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x1801D1910 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180015760 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x1801D1910 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x1801D1BE8 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180267314 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::GetD2DEffectNoRef(
        CFilterEffect *this,
        struct CDrawingContext *a2,
        struct ID2D1Bitmap1 *a3,
        struct ID2D1Effect **a4)
{
  int v4; // eax
  ID2D1Effect *v9; // rdi
  int v10; // ebx
  int v11; // r9d
  int D2DEffectNoRef; // eax
  struct ID2D1Effect *v13; // rbx
  __int64 v14; // rax
  __int64 i; // rbp
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned int v18; // r15d
  char v19; // al
  CFilterEffect *v20; // rcx
  int v21; // ecx
  unsigned int v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  struct ID2D1Effect *v25; // [rsp+80h] [rbp+8h] BYREF
  struct ID2D1Bitmap1 *v26; // [rsp+90h] [rbp+18h]
  struct ID2D1Effect *v27; // [rsp+98h] [rbp+20h] BYREF

  v26 = a3;
  v4 = *((_DWORD *)this + 10);
  v25 = 0LL;
  v27 = 0LL;
  *a4 = 0LL;
  v9 = 0LL;
  *((_DWORD *)this + 10) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 4)) & 0xC;
  if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 4)) & 0xC) & 0xC) != 4 )
  {
    v10 = -2147467259;
    v23 = 22;
LABEL_3:
    v11 = v10;
    goto LABEL_27;
  }
  D2DEffectNoRef = CDeviceResourceTable<CD2DEffect,CFilterEffect>::FindOrCreateResourceNoRef(
                     (char *)this + 256,
                     *((_QWORD *)a2 + 4),
                     &v25);
  v10 = D2DEffectNoRef;
  if ( D2DEffectNoRef < 0 )
  {
    v23 = 26;
    goto LABEL_26;
  }
  v13 = v25;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v25 + 9) + 8LL))(*((_QWORD *)v25 + 9));
  v9 = (ID2D1Effect *)*((_QWORD *)v13 + 9);
  D2DEffectNoRef = (*(__int64 (__fastcall **)(CFilterEffect *, ID2D1Effect *))(*(_QWORD *)this + 216LL))(this, v9);
  v10 = D2DEffectNoRef;
  if ( D2DEffectNoRef < 0 )
  {
    v23 = 28;
LABEL_26:
    v11 = D2DEffectNoRef;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v23, 0LL);
LABEL_28:
    *a4 = 0LL;
    goto LABEL_29;
  }
  v14 = *((int *)this + 82);
  if ( (_DWORD)v14 )
  {
    v24 = *((int *)this + 82);
    for ( i = 0LL; i < v14; ++i )
    {
      v16 = *(_QWORD *)(*((_QWORD *)this + 40) + 8 * i);
      v17 = *(_QWORD *)(v16 + 24);
      v18 = *(_DWORD *)(*((_QWORD *)this + 39) + 4 * i);
      if ( v17 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 64LL))(v17, 51LL);
        v20 = *(CFilterEffect **)(v16 + 24);
        if ( v19 )
        {
          v25 = 0LL;
          D2DEffectNoRef = CFilterEffect::GetD2DEffectNoRef(v20, a2, v26, &v25);
          v10 = D2DEffectNoRef;
          if ( D2DEffectNoRef < 0 )
          {
            v23 = 56;
            goto LABEL_26;
          }
          ID2D1Effect::SetInputEffect(v9, v18, v25);
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v20 + 64LL))(v20, 31LL) )
          {
            v10 = -2147467263;
            v23 = 77;
            goto LABEL_3;
          }
          D2DEffectNoRef = CFilterEffect::GetInputEffectForAtlasedSurface(
                             v21,
                             (_DWORD)a2,
                             (int)v16 + 4,
                             *(_QWORD *)(v16 + 24),
                             (__int64)&v27);
          v10 = D2DEffectNoRef;
          if ( D2DEffectNoRef < 0 )
          {
            v23 = 68;
            goto LABEL_26;
          }
          ID2D1Effect::SetInputEffect(v9, v18, v27);
          ReleaseInterface<ID2D1Geometry>((__int64 *)&v27);
        }
      }
      else
      {
        (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v9 + 112LL))(
          v9,
          v18,
          v26,
          1LL);
      }
      v14 = v24;
    }
  }
  else
  {
    (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v9 + 112LL))(
      v9,
      0LL,
      a3,
      1LL);
  }
  *a4 = v9;
  if ( v10 < 0 )
    goto LABEL_28;
LABEL_29:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v9);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v27);
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (4 * (*((_DWORD *)this + 10) >> 2) - 4)) & 0xC;
  return (unsigned int)v10;
}
