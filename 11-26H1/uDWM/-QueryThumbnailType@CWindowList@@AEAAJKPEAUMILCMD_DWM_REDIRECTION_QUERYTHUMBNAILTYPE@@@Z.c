/*
 * XREFs of ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180029810
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x1800287E0 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800289EC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ @ 0x18005CFE0 (-GetThumbnailType@CSecondaryWindowRepresentation@@QEBA-AW4THUMBNAIL_TYPE@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::QueryThumbnailType(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  struct CThumbnailData *v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  struct CSecondaryWindowRepresentation *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h]

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  v7 = ThumbnailData;
  if ( ThumbnailData && a2 == *((_DWORD *)a3 + 2) )
  {
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct CThumbnailData *))(*(_QWORD *)ThumbnailData + 8LL))(ThumbnailData);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x14D9u, 0LL);
    }
    else
    {
      v10 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(*((CThumbnailVisual **)v7 + 11), &v12);
      v9 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x14DAu, 0LL);
      else
        *((_DWORD *)a3 + 3) = CSecondaryWindowRepresentation::GetThumbnailType(v12);
    }
  }
  else
  {
    v9 = -2147024809;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
