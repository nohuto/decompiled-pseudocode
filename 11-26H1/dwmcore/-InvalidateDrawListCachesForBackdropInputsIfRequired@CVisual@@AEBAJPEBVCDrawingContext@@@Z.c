/*
 * XREFs of ?InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z @ 0x18002BE10
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079E90 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180019A30 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18002C040 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18014C07C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z @ 0x1801A4E24 (-GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1802079DC (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18021C1E0 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::InvalidateDrawListCachesForBackdropInputsIfRequired(
        CVisual *this,
        const struct CDrawingContext *a2)
{
  char v2; // al
  __int64 v5; // rbx
  char *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  _BYTE *v10; // r9
  _QWORD **v11; // rcx
  unsigned int v12; // r8d
  _QWORD *v13; // rax
  _QWORD *i; // rcx
  __int64 v16; // rdx
  float v17; // xmm0_4
  float v18; // xmm1_4
  int v19; // eax
  unsigned int v20; // ebx
  CVisual *WindowBackgroundTreatmentVisual; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  const char *v23; // rbx
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27[2]; // [rsp+20h] [rbp-28h] BYREF
  float v28; // [rsp+28h] [rbp-20h]
  float v29; // [rsp+2Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v31; // [rsp+50h] [rbp+8h] BYREF
  char v32; // [rsp+60h] [rbp+18h] BYREF
  char v33; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  if ( *((char *)this + 102) >= 0 )
  {
LABEL_2:
    if ( (*((_BYTE *)this + 103) & 2) != 0 )
    {
      WindowBackgroundTreatmentVisual = CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(this);
      if ( !WindowBackgroundTreatmentVisual
        || (WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(WindowBackgroundTreatmentVisual)) == 0LL )
      {
LABEL_4:
        v5 = *((_QWORD *)a2 + 993);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 192LL))(v5) )
        {
          v6 = (char *)this + 320;
LABEL_6:
          if ( v6 )
          {
            v7 = *((_QWORD *)v6 + 2);
            v8 = *((_QWORD *)v6 + 3);
            while ( v7 != v8 )
            {
              if ( !*(_DWORD *)v7 && !*(_DWORD *)(v7 + 4) )
                CDrawListCache::Invalidate(*(CDrawListCache **)(v7 + 8));
              v7 += 16LL;
            }
          }
          return 0LL;
        }
        v16 = *((_QWORD *)this + 28);
        if ( *(int *)v16 < 0 )
        {
          v9 = *(unsigned int *)(v16 + 4);
          v10 = (_BYTE *)(v16 + 8);
          v11 = 0LL;
          v12 = 0;
          if ( (_DWORD)v9 )
          {
            while ( *v10 != 1 )
            {
              ++v12;
              ++v10;
              if ( v12 >= (unsigned int)v9 )
                goto LABEL_29;
            }
          }
          else
          {
LABEL_29:
            if ( v12 >= (unsigned int)v9 )
            {
LABEL_16:
              v13 = *v11;
              if ( *v11 )
              {
                for ( i = (_QWORD *)*v13; i != v13; i = (_QWORD *)*i )
                {
                  v6 = (char *)(i - 44);
                  if ( i[4] == v5 )
                    goto LABEL_6;
                }
              }
              return 0LL;
            }
          }
          v11 = (_QWORD **)(v16 + ((v9 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * v12);
          goto LABEL_16;
        }
        return 0LL;
      }
      v2 = *((_BYTE *)WindowBackgroundTreatmentInternal + 301);
    }
    if ( !v2 )
      return 0LL;
    goto LABEL_4;
  }
  if ( dword_1803DC8B8 )
  {
    v23 = *(const char **)CVisualTreePath::GetDebugString(*((_QWORD *)a2 + 996), &v31);
    BackdropVisualImage = CVisual::GetBackdropVisualImage(this, *((const struct CVisualTreePath **)a2 + 996));
    v25 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v32, "pBVI=0x%p, bviPath=[%s]", BackdropVisualImage, v23);
    v26 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v33, "Visual-HasBackdropInput-ValidateBVI");
    DwmDbg::Backdrops::LogBrushEtwEvent(v26, this, v25);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v31);
  }
  v17 = *((float *)this + 35);
  v18 = *((float *)this + 36);
  v31 = 1;
  *(_QWORD *)v27 = 0LL;
  v28 = v17 + 0.0;
  v29 = v18 + 0.0;
  v19 = CDrawingContext::ValidateBVIEffectInputForRender(a2, v27, &v31);
  v20 = v19;
  if ( v19 >= 0 )
  {
    v2 = v31;
    goto LABEL_2;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x615,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
    (const char *)(unsigned int)v19,
    v27[0]);
  return v20;
}
