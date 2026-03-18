/*
 * XREFs of ?UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z @ 0x1800222EC
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180139380 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18013D238 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x18018E98C (--1CProjectedShadow@@MEAA@XZ.c)
 *     ?SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180276C14 (-SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrac.c)
 *     ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314 (-StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?clear_region@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18001FE70 (-clear_region@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CResource::UnRegisterNotifierNoRelease(CResource *this, struct CResource *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // r14
  __int64 v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  CResource *v9; // rsi
  CResource **v10; // rdx
  __int64 v11; // rax
  CResource **v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  if ( !a2 )
    return 0;
  v4 = (_QWORD *)((char *)a2 + 32);
  v5 = *((_QWORD *)a2 + 4) & 3LL;
  if ( v5 )
  {
    if ( (*((_DWORD *)a2 + 8) & 3) == 1LL )
    {
      v6 = (char *)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_12:
      v7 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)a2 + 4) - 16);
      goto LABEL_13;
    }
    if ( (*((_DWORD *)a2 + 8) & 3) == 2LL )
    {
      v6 = 0LL;
LABEL_6:
      v7 = 0LL;
      goto LABEL_13;
    }
    if ( (*((_DWORD *)a2 + 8) & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v6 = (char *)a2 + 32;
  if ( v5 )
  {
    v8 = v5 - 1;
    if ( v8 )
    {
      if ( (unsigned __int64)(v8 - 1) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      goto LABEL_6;
    }
    goto LABEL_12;
  }
  v7 = 1LL;
LABEL_13:
  v9 = (CResource *)*v4;
  v10 = (CResource **)&v6[8 * v7];
  v11 = *v4 & 3LL;
  if ( !v11 )
  {
LABEL_37:
    v12 = (CResource **)v4;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)v4 & 3) == 1LL )
  {
    v12 = (CResource **)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)v4 & 3) != 2LL )
  {
    if ( (*(_DWORD *)v4 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_37;
  }
  v12 = 0LL;
LABEL_17:
  while ( v12 != v10 && *v12 != this )
    ++v12;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v13 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_28;
    }
    if ( v11 == 2 )
    {
      v13 = 0LL;
      goto LABEL_29;
    }
  }
  v13 = (unsigned __int64)v4;
  if ( !v11 )
  {
    v2 = 1LL;
    goto LABEL_29;
  }
  v14 = v11 - 1;
  if ( !v14 )
  {
LABEL_28:
    v2 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v4) - 16);
    goto LABEL_29;
  }
  if ( (unsigned __int64)(v14 - 1) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_29:
  if ( v12 != (CResource **)(v13 + 8 * v2) )
  {
    v15 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v4);
    detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::clear_region(
      v4,
      (__int64)((__int64)v12 - v15) >> 3,
      1LL);
    detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v4);
    return 1;
  }
  return 0;
}
