/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800606A4
 * Callers:
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18005FBC0 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180060520 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?Cloak@CThumbnailData@@QEAAJ_N@Z @ 0x18008AC4C (-Cloak@CThumbnailData@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180013380 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180013CB8 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800154D0 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180015B04 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001F2BC (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x180060F88 (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800611DC (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800640F8 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180064BC4 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800C5B98 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualI.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800CF840 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateProperties(CThumbnailVisual *this, unsigned int a2)
{
  unsigned int v2; // esi
  int v3; // edi
  int updated; // r12d
  struct tagPOINT **v6; // r14
  __int64 v7; // rax
  char v8; // al
  double v9; // xmm1_8
  int v10; // r8d
  int v11; // edx
  struct tagPOINT *v12; // rax
  double v13; // xmm1_8
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  int BrushForCVI; // eax
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  __int64 v20; // rdx
  bool v21; // r10
  int v22; // r8d
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  __int64 v28; // rdx
  CBaseObject *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  struct tagPOINT **v32; // r14
  struct tagPOINT v33; // rcx
  struct IDwmWindow *v34; // rax
  struct tagPOINT v35; // r15
  __int64 v36; // r10
  unsigned int v37; // eax
  unsigned int v38; // r8d
  unsigned int v39; // eax
  int v40; // ebp
  CBaseObject *v41; // rcx
  CBaseObject *v42; // rcx
  CBaseObject *v43; // rcx
  CBaseObject *v44; // rcx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // rcx
  CBaseObject *v47; // rcx
  CBaseObject *v48; // rcx
  CBaseObject *v49; // rcx
  CBaseObject *v50; // rcx
  unsigned int v52; // [rsp+20h] [rbp-38h]
  struct tagPOINT v53; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 0;
  updated = CThumbnailVisual::_UpdateAnimatedProperties(this, a2);
  if ( (v2 & 4) != 0 )
  {
    v7 = *((_QWORD *)this + 41);
    v6 = (struct tagPOINT **)((char *)this + 328);
    if ( v7 )
    {
      v8 = *(_BYTE *)(v7 + 35);
      if ( *((_BYTE *)this + 316) != v8 )
      {
        *((_BYTE *)this + 316) = v8;
        if ( v8 )
        {
          v9 = 0.0;
          *((_QWORD *)this + 37) = *((_QWORD *)this + 15);
        }
        else
        {
          v9 = *((double *)this + 37);
        }
        CVisual::SetOpacity(this, v9);
      }
    }
  }
  else
  {
    v6 = (struct tagPOINT **)((char *)this + 328);
  }
  if ( updated < 0 && (v2 & 1) != 0 && *v6 )
  {
    if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
    {
      CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
    }
    else
    {
      v53 = (*v6)[5];
      CVisual::SetOffset((struct tagPOINT *)this, &v53);
    }
    v10 = 0;
    if ( (*v6)[6].y - (*v6)[5].y >= 0 )
      v10 = (*v6)[6].y - (*v6)[5].y;
    v11 = 0;
    if ( (*v6)[6].x - (*v6)[5].x >= 0 )
      v11 = (*v6)[6].x - (*v6)[5].x;
    CVisual::SetSize(this, v11, v10);
    CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000u);
  }
  if ( !*((_BYTE *)this + 316) && updated < 0 && (v2 & 4) != 0 )
  {
    v12 = *v6;
    if ( *v6 )
    {
      if ( (v12[4].y & 4) != 0 )
      {
        v13 = (double)LOBYTE(v12[9].x) / 255.0;
        *((double *)this + 37) = v13;
        CVisual::SetOpacity(this, v13);
      }
    }
  }
  if ( (v2 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
  if ( (v2 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*(CWindowData **)&(*v6)[3])
     || !AreAllMarginsZero((const struct _MARGINS *)(*(_QWORD *)&(*v6)[3] + 64LL))) )
  {
    v14 = (CBaseObject *)*((_QWORD *)this + 43);
    if ( v14 )
    {
      CBaseObject::Release(v14);
      *((_QWORD *)this + 43) = 0LL;
    }
    v15 = (CBaseObject *)*((_QWORD *)this + 49);
    if ( v15 )
    {
      CBaseObject::Release(v15);
      *((_QWORD *)this + 49) = 0LL;
    }
    v16 = (CBaseObject *)*((_QWORD *)this + 42);
    if ( v16 )
    {
      CBaseObject::Release(v16);
      *((_QWORD *)this + 42) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  }
  if ( (v2 & 8) != 0 && *v6 )
  {
    *((_BYTE *)this + 432) = *(LONG *)((char *)&(*v6)[9].x + 1) != 0;
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  }
  if ( (v2 & 0x80000) != 0 )
  {
    BrushForCVI = CVisual::MoveToFront(this, 0);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v52 = 365;
LABEL_45:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BrushForCVI, v52, 0LL);
      goto LABEL_125;
    }
  }
  if ( (v2 & 0x400000) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  if ( (v2 & 0xC000000) == 0xC000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
  if ( (v2 & 0x30000000) == 0x30000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x20000u);
  if ( (v2 & 0xC0000000) == 0xC0000000 )
  {
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    if ( (v2 & 0x40000000) != 0 )
    {
      BrushForCVI = CThumbnailVisual::EnsureVisualBrush(this);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v52 = 388;
        goto LABEL_45;
      }
    }
    else
    {
      v18 = (CBaseObject *)*((_QWORD *)this + 43);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *((_QWORD *)this + 43) = 0LL;
      }
      v19 = (CBaseObject *)*((_QWORD *)this + 49);
      if ( v19 )
      {
        CBaseObject::Release(v19);
        *((_QWORD *)this + 49) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
    }
  }
  if ( (v2 & 0x100000) != 0 )
  {
    if ( *((_QWORD *)this + 42) && *((_QWORD *)this + 49) )
    {
      v20 = *((_QWORD *)this + 41);
      v21 = 0;
      if ( (*(_BYTE *)(v20 + 36) & 3) == 3 && *((_BYTE *)this + 434) )
      {
        v22 = 0;
        if ( *(_DWORD *)(v20 + 48) - *(_DWORD *)(v20 + 40) >= 0 )
          v22 = *(_DWORD *)(v20 + 48) - *(_DWORD *)(v20 + 40);
        v23 = 0;
        if ( *(_DWORD *)(v20 + 64) - *(_DWORD *)(v20 + 56) >= 0 )
          v23 = *(_DWORD *)(v20 + 64) - *(_DWORD *)(v20 + 56);
        if ( v22 == v23 )
        {
          v24 = *(_DWORD *)(v20 + 52) - *(_DWORD *)(v20 + 44);
          v25 = *(_DWORD *)(v20 + 68) - *(_DWORD *)(v20 + 60);
          v26 = 0;
          if ( v24 >= 0 )
            v26 = v24;
          v27 = 0;
          if ( v25 >= 0 )
            v27 = v25;
          if ( v26 == v27 && v22 == *((_DWORD *)this + 114) && v26 == *((_DWORD *)this + 115) )
            v21 = 1;
        }
      }
      CSecondaryWindowRepresentation::MakeStatic(
        *((CSecondaryWindowRepresentation **)this + 42),
        v21,
        (CThumbnailVisual *)((char *)this + 480),
        (struct CCachedVisualImageProxy **)this + 49);
      v29 = (CBaseObject *)*((_QWORD *)this + 43);
      if ( v29 )
      {
        CBaseObject::Release(v29);
        *((_QWORD *)this + 43) = 0LL;
      }
      BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(
                      (__int64)v29,
                      v28,
                      *((_QWORD *)this + 49),
                      *((_QWORD *)this + 45),
                      0LL,
                      (CBaseObject **)this + 43);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v52 = 424;
        goto LABEL_45;
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 42) + 161LL) )
      {
        if ( CThumbnailVisual::_IsImmersiveIconic(this) )
        {
          *(_DWORD *)(*((_QWORD *)this + 41) + 36LL) |= 0x800000u;
          v2 |= 0x800000u;
        }
        else
        {
          CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
          CThumbnailVisual::SetDirtyFlags(this, 0x40000u);
          CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
          *((_BYTE *)this + 434) = 0;
          CContainerVisual::RenderRecursive(this, v30, v31);
        }
      }
      goto LABEL_105;
    }
    v32 = (struct tagPOINT **)((char *)this + 328);
    if ( CWindowData::IsShellManaged(*(CWindowData **)(*((_QWORD *)this + 41) + 24LL)) )
    {
      v33 = (*v32)[3];
      if ( !*(_QWORD *)(*(_QWORD *)&v33 + 480LL) )
      {
        v34 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v33 + 24LL) + 352LL))(*(_QWORD *)(*(_QWORD *)&v33 + 24LL));
        if ( v34 )
        {
          v53 = 0LL;
          CWindowList::GetSyncedWindowData(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
            v34,
            0,
            (struct CWindowData **)&v53);
          DynArray<CThumbnailData *,0>::Remove(*(_QWORD *)&(*v32)[3] + 568LL, (char *)this + 328);
          v35 = v53;
          v36 = *(_QWORD *)&v53 + 568LL;
          (*v32)[3] = v53;
          v37 = *(_DWORD *)(v36 + 24);
          v38 = v37 + 1;
          if ( v37 + 1 < v37 )
          {
            v3 = -2147024362;
            v39 = 179;
            v40 = -2147024362;
LABEL_130:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v39, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x1C9u, 0LL);
LABEL_125:
            v50 = (CBaseObject *)*((_QWORD *)this + 53);
            if ( v50 )
              CBaseObject::Release(v50);
            *((_QWORD *)this + 53) = 0LL;
            return (unsigned int)v3;
          }
          v40 = 0;
          if ( v38 > *(_DWORD *)(v36 + 20) )
          {
            v40 = DynArrayImpl<0>::AddMultipleAndSet(v36, 8, 1, (char *)this + 328);
            v3 = v40;
            if ( v40 < 0 )
            {
              v39 = 190;
              goto LABEL_130;
            }
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)v36 + 8LL * *(unsigned int *)(v36 + 24)) = *v32;
            *(_DWORD *)(v36 + 24) = v38;
          }
          v3 = v40;
          if ( (v2 & 0x10) == 0 )
            OffsetRect(
              (LPRECT)(*((_QWORD *)this + 41) + 56LL),
              *(_DWORD *)(*(_QWORD *)&v35 + 96LL),
              *(_DWORD *)(*(_QWORD *)&v35 + 104LL));
        }
      }
    }
    v41 = (CBaseObject *)*((_QWORD *)this + 43);
    if ( v41 )
    {
      CBaseObject::Release(v41);
      *((_QWORD *)this + 43) = 0LL;
    }
    v42 = (CBaseObject *)*((_QWORD *)this + 49);
    if ( v42 )
    {
      CBaseObject::Release(v42);
      *((_QWORD *)this + 49) = 0LL;
    }
    v43 = (CBaseObject *)*((_QWORD *)this + 42);
    if ( v43 )
    {
      CBaseObject::Release(v43);
      *((_QWORD *)this + 42) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  }
LABEL_105:
  if ( (v2 & 0x800000) != 0 )
  {
    v44 = (CBaseObject *)*((_QWORD *)this + 43);
    if ( v44 )
    {
      CBaseObject::Release(v44);
      *((_QWORD *)this + 43) = 0LL;
    }
    v45 = (CBaseObject *)*((_QWORD *)this + 49);
    if ( v45 )
    {
      CBaseObject::Release(v45);
      *((_QWORD *)this + 49) = 0LL;
    }
    v46 = (CBaseObject *)*((_QWORD *)this + 42);
    if ( v46 )
    {
      CBaseObject::Release(v46);
      *((_QWORD *)this + 42) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
    CThumbnailVisual::OnRepresentationTypeUpdated(this);
  }
  if ( (v2 & 0x1000000) != 0 )
  {
    v47 = (CBaseObject *)*((_QWORD *)this + 43);
    if ( v47 )
    {
      CBaseObject::Release(v47);
      *((_QWORD *)this + 43) = 0LL;
    }
    v48 = (CBaseObject *)*((_QWORD *)this + 49);
    if ( v48 )
    {
      CBaseObject::Release(v48);
      *((_QWORD *)this + 49) = 0LL;
    }
    v49 = (CBaseObject *)*((_QWORD *)this + 42);
    if ( v49 )
    {
      CBaseObject::Release(v49);
      *((_QWORD *)this + 42) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  }
  if ( *((_BYTE *)this + 432) && !*((_DWORD *)this + 58) )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  if ( v3 < 0 )
    goto LABEL_125;
  return (unsigned int)v3;
}
