/*
 * XREFs of ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001A06C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180025564 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180034670 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180067874 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x180073BBC (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800747B8 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18007D198 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18007E8F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x1800853A8 (-OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180087CB0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008AB18 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008AD08 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008B8B8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?CancelCrossfade@CButton@@QEAAJXZ @ 0x18008D478 (-CancelCrossfade@CButton@@QEAAJXZ.c)
 *     ?OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ @ 0x1800959E8 (-OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ.c)
 *     ?SetIsLightTheme@CAcrylicSheet@@QEAAJ_N@Z @ 0x180095A44 (-SetIsLightTheme@CAcrylicSheet@@QEAAJ_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800B61AC (-OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_RecursivelyRenderOwnedWindows_::_5_::_lambda_1___ @ 0x1800CE338 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_RecursivelyRender.c)
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800CF648 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800D01B4 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800D01F4 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA?AVDirtyFlags@@XZ @ 0x180016010 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA-AVDirtyFl.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016430 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CContainerVisual::RenderRecursive(CContainerVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebp
  __int64 v4; // r14
  char v5; // si
  char v6; // r15
  unsigned int v7; // edi
  __int64 v8; // rcx
  _DWORD *v9; // rax
  int v10; // edx
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+28h] [rbp-40h]
  unsigned int v14; // [rsp+2Ch] [rbp-3Ch]
  char v15; // [rsp+30h] [rbp-38h]
  char v16; // [rsp+31h] [rbp-37h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h] BYREF

  if ( (~*___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(&v18) & *((_DWORD *)this + 8)) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(CContainerVisual *))(*(_QWORD *)this + 32LL))(this);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D,
        (int)"clientcore\\windows\\dwm\\udwm\\containervisual.cpp",
        (const char *)(unsigned int)v2);
  }
  v3 = 0;
  while ( (*((_DWORD *)this + 8) & *___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(&v18)) != 0
       && v3 < 3 )
  {
    ++v3;
    VisualCollection::GetIterator((__int64)this + 136, (__int64)&v12);
    v4 = v12;
    v5 = v16;
    v6 = v15;
    v7 = v14;
    while ( 1 )
    {
      if ( v6 )
      {
        if ( !v5 )
          --v7;
      }
      else
      {
        v6 = 1;
        v7 = *(_DWORD *)(v4 + 32) - 1;
      }
      if ( v7 == -1 )
        v5 = 1;
      if ( v5 )
        break;
      v8 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL * v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
    }
    if ( v13 == *(_DWORD *)(v4 + 40) )
      *((_DWORD *)this + 8) &= ~*___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(&v19);
  }
  v9 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(&v18);
  if ( (~*v9 & v10) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(CContainerVisual *))(*(_QWORD *)this + 40LL))(this);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F,
        (int)"clientcore\\windows\\dwm\\udwm\\containervisual.cpp",
        (const char *)(unsigned int)v11);
  }
}
