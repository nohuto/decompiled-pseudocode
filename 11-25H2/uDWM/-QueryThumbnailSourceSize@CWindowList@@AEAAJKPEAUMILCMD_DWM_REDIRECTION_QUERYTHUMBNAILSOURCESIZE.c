/*
 * XREFs of ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180060078
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800150BC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x1800189C4 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18006027C (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?GetSourceRect@CDesktopThumbnailCVIVisual@@QEAA?AUtagRECT@@XZ @ 0x1800AE6AC (-GetSourceRect@CDesktopThumbnailCVIVisual@@QEAA-AUtagRECT@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::QueryThumbnailSourceSize(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  struct CThumbnailData *v7; // rsi
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v14; // eax
  int v15; // ecx
  struct tagRECT v16; // [rsp+30h] [rbp-10h] BYREF
  CSecondaryWindowRepresentation *v17; // [rsp+80h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+88h] [rbp+48h]

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  v7 = ThumbnailData;
  v8 = 0;
  if ( ThumbnailData && a2 == *((_DWORD *)a3 + 2) )
  {
    if ( *((_BYTE *)ThumbnailData + 34) && *((_DWORD *)ThumbnailData + 30) == 2 )
    {
      v14 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(*(_QWORD *)ThumbnailData + 8LL))(ThumbnailData);
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x135Fu, 0LL);
        goto LABEL_12;
      }
      CDesktopThumbnailCVIVisual::GetSourceRect(*((CDesktopThumbnailCVIVisual **)v7 + 14), &v16);
      v15 = 0;
      if ( v16.right - v16.left >= 0 )
        v15 = v16.right - v16.left;
      *((_DWORD *)a3 + 3) = v15;
    }
    else
    {
      v17 = 0LL;
      v9 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(*(_QWORD *)ThumbnailData + 8LL))(ThumbnailData);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1368u, 0LL);
        goto LABEL_12;
      }
      v11 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(*((CThumbnailVisual **)v7 + 11), &v17);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x1369u, 0LL);
        goto LABEL_12;
      }
      CSecondaryWindowRepresentation::GetRelativeWindowRect(v17, &v16);
      v12 = 0;
      if ( v16.right - v16.left >= 0 )
        v12 = v16.right - v16.left;
      *((_DWORD *)a3 + 3) = v12;
    }
    if ( v16.bottom - v16.top >= 0 )
      v8 = v16.bottom - v16.top;
    *((_DWORD *)a3 + 4) = v8;
  }
  else
  {
    v10 = -2147024809;
  }
LABEL_12:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}
