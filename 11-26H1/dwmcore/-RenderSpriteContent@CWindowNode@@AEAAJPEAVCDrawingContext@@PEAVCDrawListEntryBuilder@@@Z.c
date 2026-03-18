/*
 * XREFs of ?RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180202650
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000D8A0 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006C3D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DxBltConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800E38B8 (-DxBltConsumedTelemetry@CWindowNode@@AEBAXPEAVCDrawingContext@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z @ 0x18018E560 (-NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180193F90 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitma.c)
 *     ?GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z @ 0x18020284C (-GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderSpriteContent(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct CGdiSpriteBitmap *v9; // rbp
  int DrawListCache; // eax
  __int64 v11; // rdx
  CDrawListCache *v12; // rbx
  int v13; // eax
  int v14; // edi
  unsigned __int64 i; // r14
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r12d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CDrawListCache *v20; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 896) & 4) != 0 && !*((_BYTE *)this + 745) )
  {
    v6 = CWindowNode::EnsureEffectiveSpriteClip(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x361,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    v9 = *(struct CGdiSpriteBitmap **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 103);
    CWindowNode::DxBltConsumedTelemetry(this, a2, v9);
    v20 = 0LL;
    DrawListCache = CWindowNode::GetDrawListCache(this, a2, 4u, &v20);
    v7 = DrawListCache;
    if ( DrawListCache < 0 )
    {
      v11 = 876LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
        (const char *)(unsigned int)DrawListCache);
      goto LABEL_21;
    }
    v12 = v20;
    if ( !*((_QWORD *)v20 + 3) )
    {
      if ( CGdiSpriteBitmap::NeedsTiling(v9, *(_DWORD *)(*((_QWORD *)a2 + 4) + 968LL)) )
      {
        for ( i = 0LL; ; ++i )
        {
          v16 = *((_QWORD *)v9 + 57);
          if ( i >= (*((_QWORD *)v9 + 58) - v16) >> 3 )
            break;
          v17 = CWindowNode::RenderSpriteBitmap(
                  this,
                  a2,
                  a3,
                  (struct IBitmapResource *)((*(_QWORD *)(v16 + 8 * i) + 72LL) & -(__int64)(*(_QWORD *)(v16 + 8 * i) != 0LL)));
          v18 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x37E,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
              (const char *)(unsigned int)v17);
            v7 = v18;
            goto LABEL_21;
          }
        }
      }
      else
      {
        v13 = CWindowNode::RenderSpriteBitmap(
                this,
                a2,
                a3,
                (struct IBitmapResource *)(((unsigned __int64)v9 + 104) & -(__int64)(v9 != 0LL)));
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x375,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
            (const char *)(unsigned int)v13);
          v7 = v14;
LABEL_21:
          wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
          return v7;
        }
      }
      CDrawListCache::Update(v12, a2, a3);
      CDrawListEntryBuilder::Reset(a3);
    }
    DrawListCache = CDrawingContext::EmitDrawListCache(a2, v12);
    v7 = DrawListCache;
    if ( DrawListCache < 0 )
    {
      v11 = 902LL;
      goto LABEL_20;
    }
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
  }
  return 0LL;
}
