/*
 * XREFs of ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1801107DC
 * Callers:
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800570F4 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x18011021C (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x1801105B8 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x180177DE4 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x180178440 (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x18017849C (-SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801784FC (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801974C0 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18019751C (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801B7D60 (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x1801BC928 (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 *     ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x1801DE61C (-ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SE.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x18020C960 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x18020E974 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180211BF8 (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z @ 0x1801121F8 (-ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

void __fastcall CSparseStorage::SetData(
        struct CSparseStorage::AllocatedStorage **this,
        int a2,
        unsigned int a3,
        const void *a4)
{
  struct CSparseStorage::AllocatedStorage *v4; // rdi
  size_t v6; // rsi
  int v7; // r12d
  int v10; // r15d
  unsigned int v11; // ebx
  char *v12; // rbx
  unsigned __int64 v13; // r8
  int v14; // edx
  int v15; // ecx
  size_t v16; // rcx
  signed __int64 v17; // rbx

  v4 = *this;
  v6 = a3;
  v7 = __ROR4__(1, a2);
  v10 = v7 & *((_DWORD *)*this + 1);
  if ( *this == (struct CSparseStorage::AllocatedStorage *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    v11 = a3 + 40;
    v4 = (struct CSparseStorage::AllocatedStorage *)DefaultHeap::AllocClear(a3 + 40);
    if ( !v4 )
      RaiseFailFastException(0LL, 0LL, 0);
    *(_DWORD *)v4 = v11;
    *this = v4;
  }
  v12 = (char *)v4 + 12;
  v13 = (unsigned __int64)v4 + *(unsigned int *)v4;
  while ( 1 )
  {
    if ( (unsigned __int64)(v12 + 4) > v13 )
    {
      v16 = v6;
      goto LABEL_13;
    }
    v14 = *(_DWORD *)v12;
    v15 = HIBYTE(*(_DWORD *)v12) & 0x7F;
    if ( v15 == a2 )
      goto LABEL_8;
    if ( !v15 )
      break;
    if ( !v10 && (v14 & 0xFFFFFF) == (_DWORD)v6 && (__ROR4__(1, v15) & *((_DWORD *)v4 + 1)) == 0 )
      goto LABEL_8;
    v12 += (*(_QWORD *)&v14 & 0xFFFFFFLL) + 4;
  }
  v16 = v6;
  if ( (unsigned __int64)&v12[v6 + 4] <= v13 )
  {
    *(_DWORD *)v12 = v14 ^ (v6 ^ v14) & 0xFFFFFF;
    goto LABEL_8;
  }
LABEL_13:
  v17 = v12 - (char *)*this;
  CSparseStorage::AllocatedStorage::ExpandStorage(this, v17 + v16 + 28);
  v12 = (char *)*this + v17;
  *(_DWORD *)v12 ^= (v6 ^ *(_DWORD *)v12) & 0xFFFFFF;
LABEL_8:
  memcpy_0(v12 + 4, a4, v6);
  *(_DWORD *)v12 ^= (*(_DWORD *)v12 ^ (a2 << 24)) & 0x7F000000;
  *((_DWORD *)*this + 1) |= v7;
}
