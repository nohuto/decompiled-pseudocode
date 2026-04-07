/*
 * XREFs of ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x180028574
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x1800287E0 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180028830 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800289EC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?GetSourceRect@CDesktopThumbnailCVIVisual@@QEAAAEBUtagRECT@@XZ @ 0x1800ADDA0 (-GetSourceRect@CDesktopThumbnailCVIVisual@@QEAAAEBUtagRECT@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  char v9; // cl
  __int64 (__fastcall *v10)(struct CThumbnailData *); // rax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  int v16; // eax
  const struct tagRECT *SourceRect; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // eax
  struct tagRECT v22; // [rsp+30h] [rbp-28h] BYREF
  CSecondaryWindowRepresentation *v23; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+78h] [rbp+20h]

  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  v7 = ThumbnailData;
  v8 = 0;
  if ( ThumbnailData && a2 == *((_DWORD *)a3 + 2) )
  {
    if ( !*((_BYTE *)ThumbnailData + 34) || (v9 = 1, *((_DWORD *)ThumbnailData + 30) != 2) )
      v9 = 0;
    v10 = *(__int64 (__fastcall **)(struct CThumbnailData *))(*(_QWORD *)ThumbnailData + 8LL);
    if ( v9 )
    {
      v16 = v10(v7);
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1480u, 0LL);
        goto LABEL_13;
      }
      SourceRect = CDesktopThumbnailCVIVisual::GetSourceRect(*((CDesktopThumbnailCVIVisual **)v7 + 14));
      v18 = *(_QWORD *)&SourceRect->right;
      v19 = *(_QWORD *)&SourceRect->left;
      v20 = v18 - *(_QWORD *)&SourceRect->left;
      v21 = 0;
      if ( v20 >= 0 )
        v21 = v20;
      *((_DWORD *)a3 + 3) = v21;
      if ( HIDWORD(v18) - HIDWORD(v19) >= 0 )
        v8 = HIDWORD(v18) - HIDWORD(v19);
    }
    else
    {
      v23 = 0LL;
      v11 = v10(v7);
      v12 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x1489u, 0LL);
        goto LABEL_13;
      }
      v13 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(*((CThumbnailVisual **)v7 + 11), &v23);
      v12 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x148Au, 0LL);
        goto LABEL_13;
      }
      CSecondaryWindowRepresentation::GetRelativeWindowRect(v23, &v22);
      v14 = 0;
      if ( v22.right - v22.left >= 0 )
        v14 = v22.right - v22.left;
      *((_DWORD *)a3 + 3) = v14;
      if ( v22.bottom - v22.top >= 0 )
        v8 = v22.bottom - v22.top;
    }
    *((_DWORD *)a3 + 4) = v8;
  }
  else
  {
    v12 = -2147024809;
  }
LABEL_13:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v12;
}
