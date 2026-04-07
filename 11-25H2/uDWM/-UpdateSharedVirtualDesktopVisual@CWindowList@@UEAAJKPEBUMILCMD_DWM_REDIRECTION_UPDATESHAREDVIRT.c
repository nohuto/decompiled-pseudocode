/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800924C0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x1800133D8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18005FBC0 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18006027C (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18006B984 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18006EC80 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtual_OOBR@@@details@wil@@QEAA_NXZ @ 0x1800E92D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesk.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  unsigned int v6; // r14d
  struct CThumbnailData *ThumbnailData; // rdi
  unsigned int v9; // r12d
  char IsEnabled; // al
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  SIZE_T v14; // rax
  unsigned __int64 v15; // kr00_8
  _QWORD *ViewBase; // r13
  HWND v17; // rbx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  int v21; // r14d
  unsigned int v22; // ebx
  int v23; // r12d
  HWND v24; // rbx
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // r9d
  unsigned int v28; // eax
  int v29; // r9d
  int v30; // eax
  CDesktopThumbnailBase *v31; // rcx
  int updated; // eax
  int v33; // r9d
  unsigned int v34; // eax
  CTopLevelWindow *v35; // rcx
  unsigned int v37; // [rsp+20h] [rbp-59h]
  struct CWindowData *v38; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-41h]
  CWindowList *v40; // [rsp+40h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+48h] [rbp-31h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v42; // [rsp+50h] [rbp-29h] BYREF

  v6 = a2;
  v39 = a2;
  v40 = this;
  v41 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset(&v42, 0, sizeof(v42));
  v9 = 0;
  if ( !ThumbnailData
    || v6 != *((_DWORD *)a3 + 2)
    || *((float *)a3 + 9) == 0.0
    || *((float *)a3 + 10) == 0.0
    || !*((_BYTE *)ThumbnailData + 34)
    || *((_DWORD *)ThumbnailData + 30) != 2 )
  {
    v37 = 4788;
    goto LABEL_52;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtual_OOBR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtual_OOBR>::GetImpl'::`2'::impl);
  v11 = *((_DWORD *)a3 + 4);
  v12 = *((_DWORD *)a3 + 3);
  if ( IsEnabled )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v12 || (v38 = 0LL, v15 = v13, v14 = 8LL * v13, !is_mul_ok(v15, 8uLL)) || a4->ViewSize < v14 )
    {
      v37 = 4797;
LABEL_52:
      v29 = -2147024809;
      v22 = -2147024809;
      goto LABEL_53;
    }
  }
  else if ( a4->ViewSize < 8 * (unsigned __int64)(v11 + v12) )
  {
    v37 = 4805;
    goto LABEL_52;
  }
  ViewBase = a4->ViewBase;
  *((_DWORD *)ThumbnailData + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 136, 8u);
  if ( *((_DWORD *)a3 + 3) )
  {
    do
    {
      v17 = (HWND)ViewBase[v9];
      if ( (unsigned int)DwmValidateWindow(v17, v6) )
      {
        v38 = 0LL;
        CWindowList::GetSyncedWindowDataByHwnd(v40, v17, &v38);
        if ( v38 )
        {
          v18 = *((_DWORD *)ThumbnailData + 40);
          v19 = v18 + 1;
          if ( v18 + 1 < v18 )
          {
            v21 = -2147024362;
            v22 = -2147024362;
            v27 = -2147024362;
            v28 = 179;
            goto LABEL_31;
          }
          if ( v19 > *((_DWORD *)ThumbnailData + 39) )
          {
            v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)ThumbnailData + 136, 8, 1, &v38);
            v21 = v20;
            v22 = v20;
            if ( v20 < 0 )
            {
              v27 = v20;
              v28 = 190;
LABEL_31:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, v28, 0LL);
              v37 = 4822;
              goto LABEL_32;
            }
            v6 = v39;
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)ThumbnailData + 17) + 8LL * v18) = v38;
            *((_DWORD *)ThumbnailData + 40) = v19;
          }
        }
      }
      ++v9;
    }
    while ( v9 < *((_DWORD *)a3 + 3) );
  }
  *((_DWORD *)ThumbnailData + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 168, 8u);
  v23 = 0;
  if ( !*((_DWORD *)a3 + 4) )
  {
LABEL_36:
    *((_BYTE *)ThumbnailData + 200) = *((_BYTE *)a3 + 44) & 1;
    *((_BYTE *)ThumbnailData + 201) = (*((_DWORD *)a3 + 11) & 2) != 0;
    v31 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 16);
    if ( v31 && (updated = CDesktopThumbnailBase::UpdateWindowClones(v31), v22 = updated, updated < 0) )
    {
      v37 = 4849;
    }
    else
    {
      *(_QWORD *)&v42.dwFlags = 3LL;
      v42.rcSource = *(RECT *)((char *)a3 + 20);
      v42.rcDestination.top = 0;
      v42.rcDestination.right = (int)*((float *)a3 + 9);
      v42.rcDestination.bottom = (int)*((float *)a3 + 10);
      updated = CThumbnailData::UpdateProperties(ThumbnailData, &v42);
      v22 = updated;
      if ( updated < 0 )
      {
        v37 = 4857;
      }
      else
      {
        updated = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
        v22 = updated;
        if ( updated < 0 )
        {
          v37 = 4858;
        }
        else
        {
          updated = CContainerVisual::AddChild(
                      *((CContainerVisual **)ThumbnailData + 13),
                      *((struct CVisual **)ThumbnailData + 14));
          v22 = updated;
          if ( updated >= 0 )
          {
            v35 = *(CTopLevelWindow **)(*((_QWORD *)ThumbnailData + 2) + 440LL);
            if ( v35 )
              CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v35);
            goto LABEL_54;
          }
          v37 = 4859;
        }
      }
    }
    v29 = updated;
    goto LABEL_53;
  }
  while ( 1 )
  {
    v24 = (HWND)ViewBase[v23 + *((_DWORD *)a3 + 3)];
    if ( !(unsigned int)DwmValidateWindow(v24, v6) )
      goto LABEL_35;
    v38 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(v40, v24, &v38);
    if ( !v38 )
      goto LABEL_35;
    v25 = *((_DWORD *)ThumbnailData + 48);
    v26 = v25 + 1;
    if ( v25 + 1 < v25 )
      break;
    if ( v26 > *((_DWORD *)ThumbnailData + 47) )
    {
      v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)ThumbnailData + 168, 8, 1, &v38);
      v21 = v30;
      v22 = v30;
      if ( v30 < 0 )
      {
        v33 = v30;
        v34 = 190;
        goto LABEL_42;
      }
      v6 = v39;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)ThumbnailData + 21) + 8LL * v25) = v38;
      *((_DWORD *)ThumbnailData + 48) = v26;
    }
LABEL_35:
    if ( (unsigned int)++v23 >= *((_DWORD *)a3 + 4) )
      goto LABEL_36;
  }
  v21 = -2147024362;
  v22 = -2147024362;
  v33 = -2147024362;
  v34 = 179;
LABEL_42:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, v34, 0LL);
  v37 = 4837;
LABEL_32:
  v29 = v21;
LABEL_53:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, v37, 0LL);
LABEL_54:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
  return v22;
}
