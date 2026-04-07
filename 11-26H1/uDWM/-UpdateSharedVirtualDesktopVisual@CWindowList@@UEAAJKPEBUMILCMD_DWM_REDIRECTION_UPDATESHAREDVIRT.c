/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081770
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x180006614 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180027FF8 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x1800287E0 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180031E4C (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?Reset@?$DynArray@PEAVCWindowData@@$0A@@@QEAAXH@Z @ 0x18004AB50 (-Reset@-$DynArray@PEAVCWindowData@@$0A@@@QEAAXH@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x1800595A8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180066670 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  struct CThumbnailData *ThumbnailData; // rsi
  int v9; // r14d
  unsigned int v10; // edx
  _QWORD *ViewBase; // r13
  HWND v12; // rbx
  int updated; // eax
  unsigned int v14; // ebx
  int v15; // r14d
  HWND v16; // rbx
  CDesktopThumbnailBase *v17; // rcx
  int v18; // r9d
  CTopLevelWindow *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-49h]
  struct CWindowData *v22; // [rsp+30h] [rbp-39h] BYREF
  CWindowList *v23; // [rsp+38h] [rbp-31h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+40h] [rbp-29h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v25; // [rsp+48h] [rbp-21h] BYREF

  v23 = this;
  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset(&v25, 0, sizeof(v25));
  v9 = 0;
  if ( !ThumbnailData
    || a2 != *((_DWORD *)a3 + 2)
    || *((float *)a3 + 9) == 0.0
    || *((float *)a3 + 10) == 0.0
    || !*((_BYTE *)ThumbnailData + 34)
    || *((_DWORD *)ThumbnailData + 30) != 2 )
  {
    v21 = 5088;
    goto LABEL_36;
  }
  v10 = *((_DWORD *)a3 + 3) + *((_DWORD *)a3 + 4);
  if ( v10 < *((_DWORD *)a3 + 3) || (v22 = 0LL, !is_mul_ok(v10, 8uLL)) || a4->ViewSize < 8 * (unsigned __int64)v10 )
  {
    v21 = 5095;
LABEL_36:
    v18 = -2147024809;
    v14 = -2147024809;
    goto LABEL_37;
  }
  ViewBase = a4->ViewBase;
  DynArray<CWindowData *,0>::Reset((__int64)ThumbnailData + 136);
  if ( *((_DWORD *)a3 + 3) )
  {
    while ( 1 )
    {
      v12 = (HWND)ViewBase[v9];
      if ( (unsigned int)DwmValidateWindow(v12, a2) )
      {
        v22 = 0LL;
        CWindowList::GetSyncedWindowDataByHwnd(v23, v12, &v22);
        if ( v22 )
        {
          updated = DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)ThumbnailData + 136, &v22);
          v14 = updated;
          if ( updated < 0 )
            break;
        }
      }
      if ( (unsigned int)++v9 >= *((_DWORD *)a3 + 3) )
        goto LABEL_15;
    }
    v21 = 5111;
    goto LABEL_24;
  }
LABEL_15:
  DynArray<CWindowData *,0>::Reset((__int64)ThumbnailData + 168);
  v15 = 0;
  if ( *((_DWORD *)a3 + 4) )
  {
    while ( 1 )
    {
      v16 = (HWND)ViewBase[v15 + *((_DWORD *)a3 + 3)];
      if ( (unsigned int)DwmValidateWindow(v16, a2) )
      {
        v22 = 0LL;
        CWindowList::GetSyncedWindowDataByHwnd(v23, v16, &v22);
        if ( v22 )
        {
          updated = DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)ThumbnailData + 168, &v22);
          v14 = updated;
          if ( updated < 0 )
            break;
        }
      }
      if ( (unsigned int)++v15 >= *((_DWORD *)a3 + 4) )
        goto LABEL_20;
    }
    v21 = 5126;
    goto LABEL_24;
  }
LABEL_20:
  *((_BYTE *)ThumbnailData + 200) = *((_BYTE *)a3 + 44) & 1;
  *((_BYTE *)ThumbnailData + 201) = (*((_DWORD *)a3 + 11) & 2) != 0;
  v17 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 16);
  if ( v17 )
  {
    updated = CDesktopThumbnailBase::UpdateWindowClones(v17);
    v14 = updated;
    if ( updated < 0 )
    {
      v21 = 5138;
LABEL_24:
      v18 = updated;
LABEL_37:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v21, 0LL);
      goto LABEL_38;
    }
  }
  *(_QWORD *)&v25.dwFlags = 3LL;
  v25.rcSource = *(RECT *)((char *)a3 + 20);
  v25.rcDestination.top = 0;
  v25.rcDestination.right = (int)*((float *)a3 + 9);
  v25.rcDestination.bottom = (int)*((float *)a3 + 10);
  updated = CThumbnailData::UpdateProperties(ThumbnailData, &v25);
  v14 = updated;
  if ( updated < 0 )
  {
    v21 = 5146;
    goto LABEL_24;
  }
  updated = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
  v14 = updated;
  if ( updated < 0 )
  {
    v21 = 5147;
    goto LABEL_24;
  }
  updated = CContainerVisual::AddChild(
              *((CContainerVisual **)ThumbnailData + 13),
              *((struct CVisual **)ThumbnailData + 14));
  v14 = updated;
  if ( updated < 0 )
  {
    v21 = 5148;
    goto LABEL_24;
  }
  v19 = *(CTopLevelWindow **)(*((_QWORD *)ThumbnailData + 2) + 440LL);
  if ( v19 )
    CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v19);
LABEL_38:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return v14;
}
