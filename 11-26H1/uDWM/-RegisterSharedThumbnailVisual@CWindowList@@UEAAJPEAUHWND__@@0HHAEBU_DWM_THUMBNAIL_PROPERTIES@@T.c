/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E3560
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180027FF8 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18004D0EC (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x1800595A8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x180069874 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18006A244 (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008425C (-CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18008B634 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  struct CWindowData *v14; // r12
  struct CWindowData *v15; // r14
  unsigned int v16; // ebx
  char *v18; // rax
  _QWORD *v19; // rdi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // edx
  int updated; // eax
  CContainerVisual *v31; // rbx
  struct CVisual *v32; // rax
  int v33; // r9d
  char IsBaseThumbnailDestinationReachable; // al
  int v35; // eax
  int v36; // esi
  int v37; // r9d
  unsigned int v38; // eax
  int v39; // eax
  int v40; // esi
  int v41; // r9d
  unsigned int v42; // eax
  int v43; // eax
  int v44; // r9d
  unsigned int v45; // eax
  struct CWindowData *v46; // rsi
  CContainerVisual *v47; // rbx
  struct CVisual *v48; // rax
  CTopLevelWindow *v49; // rcx
  unsigned int v50; // [rsp+20h] [rbp-40h]
  CVisualTargetProxy *v51; // [rsp+30h] [rbp-30h] BYREF
  struct CWindowData *v52; // [rsp+38h] [rbp-28h] BYREF
  struct CContainerVisual *v53; // [rsp+40h] [rbp-20h] BYREF
  struct CWindowData *v54; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v55; // [rsp+50h] [rbp-10h] BYREF

  v55 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  v51 = 0LL;
  v13 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v52 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v54);
  CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v52);
  v14 = v54;
  if ( !v54 )
    goto LABEL_4;
  v15 = v52;
  if ( a4 )
  {
    if ( v52 )
    {
LABEL_4:
      v16 = -2147024809;
LABEL_5:
      if ( v12 )
        CBaseObject::Release(v12);
      if ( v13 )
        CBaseObject::Release(v13);
      goto LABEL_9;
    }
  }
  else if ( !v52 )
  {
    goto LABEL_4;
  }
  *((_QWORD *)this + 52) = v54;
  if ( v15 )
  {
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                            (struct CWindowData **)this,
                                            v15);
    *((_QWORD *)this + 52) = 0LL;
    if ( IsBaseThumbnailDestinationReachable )
    {
      v16 = -2147024809;
      goto LABEL_9;
    }
  }
  else
  {
    *((_QWORD *)this + 52) = 0LL;
  }
  v18 = (char *)operator new(0x80uLL);
  v19 = v18;
  if ( !v18 )
  {
    v16 = -2147024882;
    v50 = 4885;
    v33 = -2147024882;
    goto LABEL_67;
  }
  v18[35] = 0;
  *(_OWORD *)(v18 + 36) = 0LL;
  *(_OWORD *)(v18 + 52) = 0LL;
  *(_QWORD *)(v18 + 68) = 0LL;
  *((_DWORD *)v18 + 19) = 0;
  v18[80] = 0;
  *((_QWORD *)v18 + 11) = 0LL;
  *(_QWORD *)v18 = &CDCompThumbnailData::`vftable';
  *((_QWORD *)v18 + 12) = 0LL;
  *((_QWORD *)v18 + 13) = 0LL;
  *((_QWORD *)v18 + 14) = 0LL;
  *((union _LARGE_INTEGER *)v18 + 1) = a7;
  *((_QWORD *)v18 + 2) = v14;
  *((_QWORD *)v18 + 3) = v15;
  v18[32] = 0;
  v18[33] = a5 != 0;
  v18[34] = 1;
  *((_DWORD *)v18 + 30) = a4 != 0;
  v20 = CCompositor::CreateVisualTargetProxyFromSharedHandle(
          *((struct IDwmChannel ***)CDesktopManager::s_pDesktopManagerInstance + 6),
          a8,
          &v51);
  v16 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x1320u, 0LL);
    v12 = v51;
    goto LABEL_5;
  }
  v21 = CContainerVisual::Create(&v53);
  v16 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x1321u, 0LL);
    v12 = v51;
    v13 = v53;
    goto LABEL_5;
  }
  v13 = v53;
  v12 = v51;
  v22 = CVisualTargetProxy::SetRoot(v51, *((struct CVisualProxy **)v53 + 2));
  v16 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x1322u, 0LL);
    goto LABEL_5;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v23, (int)&CommitChannel_WindowList_Thumbnail, (__int64)a2);
  v19[12] = v12;
  v54 = (struct CWindowData *)(v19 + 13);
  v19[13] = v13;
  v53 = (struct CContainerVisual *)v19;
  v24 = *((_DWORD *)this + 102);
  v25 = v24 + 1;
  if ( v24 + 1 < v24 )
  {
    v36 = -2147024362;
    v16 = -2147024362;
    v37 = -2147024362;
    v38 = 183;
    goto LABEL_61;
  }
  if ( v25 <= *((_DWORD *)this + 101) )
  {
    *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * v24) = v19;
    *((_DWORD *)this + 102) = v25;
    goto LABEL_22;
  }
  v35 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8, 1, &v53);
  v36 = v35;
  v16 = v35;
  if ( v35 < 0 )
  {
    v37 = v35;
    v38 = 194;
LABEL_61:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, v38, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x132Au, 0LL);
    goto LABEL_5;
  }
LABEL_22:
  v53 = (struct CContainerVisual *)v19;
  v26 = *((_DWORD *)v14 + 140);
  v27 = v26 + 1;
  if ( v26 + 1 < v26 )
  {
    v40 = -2147024362;
    v16 = -2147024362;
    v41 = -2147024362;
    v42 = 183;
    goto LABEL_59;
  }
  if ( v27 <= *((_DWORD *)v14 + 139) )
  {
    *(_QWORD *)(*((_QWORD *)v14 + 67) + 8LL * v26) = v19;
    *((_DWORD *)v14 + 140) = v27;
    goto LABEL_25;
  }
  v39 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v14 + 536, 8, 1, &v53);
  v40 = v39;
  v16 = v39;
  if ( v39 < 0 )
  {
    v41 = v39;
    v42 = 194;
LABEL_59:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, v42, 0LL);
    v50 = 4915;
    goto LABEL_45;
  }
LABEL_25:
  if ( !v15 )
    goto LABEL_29;
  v53 = (struct CContainerVisual *)v19;
  v28 = *((_DWORD *)v15 + 148);
  v29 = v28 + 1;
  if ( v28 + 1 < v28 )
  {
    v40 = -2147024362;
    v16 = -2147024362;
    v44 = -2147024362;
    v45 = 183;
    goto LABEL_44;
  }
  if ( v29 <= *((_DWORD *)v15 + 147) )
  {
    *(_QWORD *)(*((_QWORD *)v15 + 71) + 8LL * v28) = v19;
    *((_DWORD *)v15 + 148) = v29;
    goto LABEL_29;
  }
  v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15 + 568, 8, 1, &v53);
  v40 = v43;
  v16 = v43;
  if ( v43 < 0 )
  {
    v44 = v43;
    v45 = 194;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, v45, 0LL);
    v50 = 4918;
LABEL_45:
    v33 = v40;
    goto LABEL_67;
  }
LABEL_29:
  if ( a4 )
  {
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v19, a6);
    v16 = updated;
    if ( updated < 0 )
    {
      v50 = 4930;
      goto LABEL_34;
    }
    updated = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
    v16 = updated;
    if ( updated < 0 )
    {
      v50 = 4931;
      goto LABEL_34;
    }
    v31 = *(CContainerVisual **)v54;
    v32 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
    updated = CContainerVisual::AddChild(v31, v32);
    v16 = updated;
    if ( updated < 0 )
    {
      v50 = 4932;
LABEL_34:
      v33 = updated;
LABEL_67:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, v50, 0LL);
      goto LABEL_9;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
    v16 = updated;
    if ( updated < 0 )
    {
      v50 = 4936;
      goto LABEL_34;
    }
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v19, a6);
    v16 = updated;
    if ( updated < 0 )
    {
      v50 = 4937;
      goto LABEL_34;
    }
    v46 = v54;
    v47 = *(CContainerVisual **)v54;
    v48 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
    updated = CContainerVisual::AddChild(v47, v48);
    v16 = updated;
    if ( updated < 0 )
    {
      v50 = 4938;
      goto LABEL_34;
    }
    if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v14 + 17)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v46 + 48LL))(*(_QWORD *)v46);
  }
  v49 = (CTopLevelWindow *)*((_QWORD *)v14 + 55);
  if ( v49 )
    CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v49);
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v55);
  return v16;
}
