/*
 * XREFs of ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60
 * Callers:
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18001FD44 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180023C38 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180078C80 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x1800DF778 (-OnSourceModificationsChanged@CWindowNode@@AEAAXXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180112540 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?SetFlipExSurfaceClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x180152AE0 (-SetFlipExSurfaceClip@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?SetSpriteClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCRegionGeometry@@@Z @ 0x1801BCB64 (-SetSpriteClip@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCRegionGeometry@@@Z.c)
 *     ?SetAlphaMargins@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z @ 0x1801BF918 (-SetAlphaMargins@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z.c)
 *     ?ResetEffectiveGdiSpriteClip@CWindowNode@@AEAAXXZ @ 0x1801C6784 (-ResetEffectiveGdiSpriteClip@CWindowNode@@AEAAXXZ.c)
 *     ?SetMaximizedClipMargins@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z @ 0x1801CEC4C (-SetMaximizedClipMargins@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJU_MARGINS@@@Z.c)
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18001EC50 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // r8
  _QWORD ***v9; // rbx
  __int64 v10; // rcx
  _QWORD **v11; // rbx
  _QWORD *i; // rdi
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 42);
  v2 = (*((_QWORD *)this + 43) - v1) >> 4;
  if ( v2 )
  {
    v4 = 16 * v2;
    v5 = 16 * v2 + v1;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v13, v1, v2);
    for ( ; v1 != v5; v1 += 16LL )
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v1 + 8);
    *((_QWORD *)this + 43) -= v4;
  }
  v6 = *((_QWORD *)this + 28);
  if ( *(int *)v6 < 0 )
  {
    v7 = *(unsigned int *)(v6 + 4);
    v8 = (_BYTE *)(v6 + 8);
    v9 = 0LL;
    v10 = 0LL;
    if ( (_DWORD)v7 )
    {
      while ( *v8 != 1 )
      {
        v10 = (unsigned int)(v10 + 1);
        ++v8;
        if ( (unsigned int)v10 >= (unsigned int)v7 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      if ( (unsigned int)v10 >= (unsigned int)v7 )
        goto LABEL_9;
    }
    v9 = (_QWORD ***)(v6 + ((v7 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v10);
LABEL_9:
    v11 = *v9;
    if ( v11 )
    {
      for ( i = *v11; i != v11; i = (_QWORD *)*i )
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(i - 42);
    }
  }
}
