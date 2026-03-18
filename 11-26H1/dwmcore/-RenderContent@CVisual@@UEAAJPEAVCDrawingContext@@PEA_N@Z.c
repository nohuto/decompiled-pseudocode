/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079E90
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079CF0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z @ 0x18002BE10 (-InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z.c)
 *     McTemplateU0pffffss_EventWriteTransfer @ 0x18002F800 (McTemplateU0pffffss_EventWriteTransfer.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007A6F0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1801834A0 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ @ 0x1801A5BAC (-NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v4; // r15d
  unsigned int v6; // r9d
  const char *v8; // rsi
  char v9; // al
  __int64 v10; // rcx
  const char *v11; // rdi
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx

  v4 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( (*((_BYTE *)this + 102) & 0x40) != 0
    && (CDrawingContext::NotifyFrameContainsProtectedContent(a2), *(_BYTE *)(*((_QWORD *)this + 3) + 6458LL)) )
  {
    *a3 = 1;
  }
  else if ( *((_QWORD *)this + 31) )
  {
    CVisual::InvalidateDrawListCachesForBackdropInputsIfRequired(this, a2);
    CVisual::RenderContentWorker(
      this,
      *((struct CContent **)this + 31),
      0,
      v6,
      a2,
      (const struct D2D_SIZE_F *)((char *)this + 140));
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0
    && (*(unsigned __int8 (__fastcall **)(CVisual *, struct CDrawingContext *, bool *))(*(_QWORD *)this + 272LL))(
         this,
         a2,
         a3) )
  {
    v8 = word_1802F327A;
    if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 64LL))(this, 164LL) )
    {
      v11 = "Window";
      goto LABEL_33;
    }
    v9 = (*(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 64LL))(this, 139LL);
    v10 = *((_QWORD *)this + 31);
    v11 = "Sprite";
    v12 = v9;
    if ( !v9 )
      v11 = word_1802F327A;
    if ( !v10 )
      goto LABEL_33;
    if ( v4 != CCachedVisualImage::s_CVIEnsureBitmapCount )
    {
      v8 = "CVI";
      goto LABEL_33;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL))(v10, 94LL) )
    {
      v8 = "PG";
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 64LL))(
                *((_QWORD *)this + 31),
                31LL) )
    {
      v8 = "CS";
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 64LL))(
             *((_QWORD *)this + 31),
             157LL) )
      {
        v8 = "VisBmp";
        goto LABEL_33;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 64LL))(
             *((_QWORD *)this + 31),
             165LL) )
      {
        v8 = "YCbCr";
        goto LABEL_33;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 64LL))(
             *((_QWORD *)this + 31),
             136LL) )
      {
        v8 = "Snap";
        goto LABEL_33;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 64LL))(
             *((_QWORD *)this + 31),
             64LL) )
      {
        v8 = "Ink";
        goto LABEL_33;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 64LL))(
             *((_QWORD *)this + 31),
             55LL) )
      {
        v8 = "GenInk";
LABEL_33:
        CDrawingContext::EtwLogCurrentState(a2);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
          McTemplateU0pffffss_EventWriteTransfer(
            v14,
            v13,
            (__int64)this,
            *((float *)this + 43),
            *((_DWORD *)this + 44),
            *((_DWORD *)this + 45),
            *((_DWORD *)this + 46),
            v11,
            v8);
        return 0LL;
      }
      if ( v12 )
        goto LABEL_33;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) == 0 )
      return 0LL;
    goto LABEL_33;
  }
  return 0LL;
}
