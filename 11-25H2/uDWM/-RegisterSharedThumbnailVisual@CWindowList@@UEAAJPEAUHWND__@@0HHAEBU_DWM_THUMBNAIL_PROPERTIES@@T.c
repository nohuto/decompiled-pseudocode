/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E6E20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x1800133D8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18001D434 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18005FBC0 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180077020 (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x1800798A8 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008DBB0 (-CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180097F20 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterSharedThumbnailVisual(
        CWindowList *this,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        const struct _DWM_THUMBNAIL_PROPERTIES *a6,
        union _LARGE_INTEGER a7,
        void *a8)
{
  CBaseObject *v12; // r15
  CBaseObject *v13; // r13
  const struct std::nothrow_t *v14; // rdx
  struct CWindowData *v15; // r12
  struct CWindowData *v16; // r14
  unsigned int v17; // ebx
  char *v19; // rax
  _QWORD *v20; // rdi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // esi
  int v28; // r9d
  unsigned int v29; // eax
  char IsBaseThumbnailDestinationReachable; // al
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // esi
  int v34; // r9d
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // r9d
  unsigned int v40; // eax
  int v41; // eax
  int updated; // eax
  CContainerVisual *v43; // rbx
  struct CVisual *v44; // rax
  int v45; // r9d
  int v46; // eax
  struct CWindowData *v47; // rsi
  CContainerVisual *v48; // rbx
  struct CVisual *v49; // rax
  CTopLevelWindow *v50; // rcx
  unsigned int v51; // [rsp+20h] [rbp-40h]
  struct CVisualTargetProxy *v52; // [rsp+30h] [rbp-30h] BYREF
  struct CWindowData *v53; // [rsp+38h] [rbp-28h] BYREF
  struct CContainerVisual *v54; // [rsp+40h] [rbp-20h] BYREF
  struct CWindowData *v55; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v56; // [rsp+50h] [rbp-10h] BYREF

  v56 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  v52 = 0LL;
  v13 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v55);
  CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v53);
  v15 = v55;
  if ( !v55 )
    goto LABEL_4;
  v16 = v53;
  if ( a4 )
  {
    if ( v53 )
    {
LABEL_4:
      v17 = -2147024809;
LABEL_5:
      if ( v12 )
        CBaseObject::Release(v12);
      if ( v13 )
        CBaseObject::Release(v13);
      goto LABEL_9;
    }
  }
  else if ( !v53 )
  {
    goto LABEL_4;
  }
  *((_QWORD *)this + 52) = v55;
  if ( v16 )
  {
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                            (struct CWindowData **)this,
                                            v16);
    *((_QWORD *)this + 52) = 0LL;
    if ( IsBaseThumbnailDestinationReachable )
    {
      v17 = -2147024809;
      goto LABEL_9;
    }
  }
  else
  {
    *((_QWORD *)this + 52) = 0LL;
  }
  v19 = (char *)operator new[](0x80uLL, v14);
  v20 = v19;
  if ( !v19 )
  {
    v17 = -2147024882;
    v51 = 4585;
    v45 = -2147024882;
    goto LABEL_68;
  }
  *((_DWORD *)v19 + 8) = 0;
  *(_OWORD *)(v19 + 36) = 0LL;
  *(_OWORD *)(v19 + 52) = 0LL;
  *(_QWORD *)(v19 + 68) = 0LL;
  *((_DWORD *)v19 + 19) = 0;
  v19[80] = 0;
  *((_QWORD *)v19 + 11) = 0LL;
  *(_QWORD *)v19 = &CDCompThumbnailData::`vftable';
  *((_QWORD *)v19 + 12) = 0LL;
  *((_QWORD *)v19 + 13) = 0LL;
  *((_QWORD *)v19 + 14) = 0LL;
  *((union _LARGE_INTEGER *)v19 + 1) = a7;
  *((_QWORD *)v19 + 2) = v15;
  *((_QWORD *)v19 + 3) = v16;
  v19[32] = 0;
  v19[33] = a5 != 0;
  v19[34] = 1;
  *((_DWORD *)v19 + 30) = a4 != 0;
  v21 = CCompositor::CreateVisualTargetProxyFromSharedHandle(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          a8,
          &v52);
  v17 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x11F4u, 0LL);
    v12 = v52;
    goto LABEL_5;
  }
  v22 = CContainerVisual::Create(&v54);
  v17 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x11F5u, 0LL);
    v12 = v52;
    v13 = v54;
    goto LABEL_5;
  }
  v13 = v54;
  v12 = v52;
  v23 = CVisualTargetProxy::SetRoot(v52, *((struct CVisualProxy **)v54 + 2));
  v17 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x11F6u, 0LL);
    goto LABEL_5;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v24, (__int64)&CommitChannel_WindowList_Thumbnail, (__int64)a2);
  v20[12] = v12;
  v55 = (struct CWindowData *)(v20 + 13);
  v20[13] = v13;
  v54 = (struct CContainerVisual *)v20;
  v25 = *((_DWORD *)this + 102);
  v26 = v25 + 1;
  if ( v25 + 1 < v25 )
  {
    v27 = -2147024362;
    v17 = -2147024362;
    v28 = -2147024362;
    v29 = 179;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, v29, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x11FEu, 0LL);
    goto LABEL_5;
  }
  if ( v26 > *((_DWORD *)this + 101) )
  {
    v36 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8, 1, &v54);
    v27 = v36;
    v17 = v36;
    if ( v36 < 0 )
    {
      v28 = v36;
      v29 = 190;
      goto LABEL_29;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * *((unsigned int *)this + 102)) = v20;
    *((_DWORD *)this + 102) = v26;
  }
  v54 = (struct CContainerVisual *)v20;
  v31 = *((_DWORD *)v15 + 140);
  v32 = v31 + 1;
  if ( v31 + 1 < v31 )
  {
    v33 = -2147024362;
    v17 = -2147024362;
    v34 = -2147024362;
    v35 = 179;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, v35, 0LL);
    v51 = 4615;
LABEL_49:
    v45 = v33;
    goto LABEL_68;
  }
  if ( v32 > *((_DWORD *)v15 + 139) )
  {
    v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15 + 536, 8, 1, &v54);
    v33 = v41;
    v17 = v41;
    if ( v41 < 0 )
    {
      v34 = v41;
      v35 = 190;
      goto LABEL_37;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v15 + 67) + 8LL * *((unsigned int *)v15 + 140)) = v20;
    *((_DWORD *)v15 + 140) = v32;
  }
  if ( v16 )
  {
    v54 = (struct CContainerVisual *)v20;
    v37 = *((_DWORD *)v16 + 148);
    v38 = v37 + 1;
    if ( v37 + 1 < v37 )
    {
      v33 = -2147024362;
      v17 = -2147024362;
      v39 = -2147024362;
      v40 = 179;
LABEL_48:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, v40, 0LL);
      v51 = 4618;
      goto LABEL_49;
    }
    if ( v38 > *((_DWORD *)v16 + 147) )
    {
      v46 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v16 + 568, 8, 1, &v54);
      v33 = v46;
      v17 = v46;
      if ( v46 < 0 )
      {
        v39 = v46;
        v40 = 190;
        goto LABEL_48;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v16 + 71) + 8LL * *((unsigned int *)v16 + 148)) = v20;
      *((_DWORD *)v16 + 148) = v38;
    }
  }
  if ( a4 )
  {
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v17 = updated;
    if ( updated < 0 )
    {
      v51 = 4630;
      goto LABEL_45;
    }
    updated = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
    v17 = updated;
    if ( updated < 0 )
    {
      v51 = 4631;
      goto LABEL_45;
    }
    v43 = *(CContainerVisual **)v55;
    v44 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
    updated = CContainerVisual::AddChild(v43, v44);
    v17 = updated;
    if ( updated < 0 )
    {
      v51 = 4632;
LABEL_45:
      v45 = updated;
LABEL_68:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, v51, 0LL);
      goto LABEL_9;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
    v17 = updated;
    if ( updated < 0 )
    {
      v51 = 4636;
      goto LABEL_45;
    }
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v17 = updated;
    if ( updated < 0 )
    {
      v51 = 4637;
      goto LABEL_45;
    }
    v47 = v55;
    v48 = *(CContainerVisual **)v55;
    v49 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
    updated = CContainerVisual::AddChild(v48, v49);
    v17 = updated;
    if ( updated < 0 )
    {
      v51 = 4638;
      goto LABEL_45;
    }
    if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v15 + 17)) )
    {
      updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v47 + 48LL))(*(_QWORD *)v47);
      v17 = updated;
      if ( updated < 0 )
      {
        v51 = 4644;
        goto LABEL_45;
      }
    }
  }
  v50 = (CTopLevelWindow *)*((_QWORD *)v15 + 55);
  if ( v50 )
    CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v50);
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v56);
  return v17;
}
