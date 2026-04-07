/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x1800E3B60
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x180069874 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18008ADF4 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterThumbnail(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *a3)
{
  struct CWindowData *v6; // rsi
  struct CWindowData *v7; // r14
  char IsBaseThumbnailDestinationReachable; // al
  char *v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // r8d
  int v16; // edi
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // eax
  int v22; // r9d
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // r9d
  int v27; // r9d
  unsigned int v28; // eax
  unsigned int v30; // [rsp+20h] [rbp-20h]
  struct CWindowData *v31; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+40h] BYREF
  struct CWindowData *v34; // [rsp+88h] [rbp+48h] BYREF

  v32 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v34 = 0LL;
  v31 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 12), &v34);
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 20), &v31);
  dwProcessId = 0;
  v6 = v34;
  if ( !v34
    || !GetWindowThreadProcessId(*((HWND *)v34 + 5), &dwProcessId)
    || (v7 = v31) == 0LL
    || a2 != dwProcessId
    || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
    || (*((_QWORD *)this + 52) = v6,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                                (struct CWindowData **)this,
                                                v7),
        *((_QWORD *)this + 52) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v18 = -2147024809;
    goto LABEL_40;
  }
  v9 = (char *)operator new(0x60uLL);
  if ( !v9 )
  {
    v34 = 0LL;
    v18 = -2147024882;
    v30 = 4794;
    v26 = -2147024882;
    goto LABEL_38;
  }
  *(_QWORD *)v9 = &CThumbnailData::`vftable';
  *((_QWORD *)v9 + 1) = 0LL;
  *((_QWORD *)v9 + 2) = 0LL;
  *((_QWORD *)v9 + 3) = 0LL;
  *((_DWORD *)v9 + 8) = 0;
  *(_OWORD *)(v9 + 36) = 0LL;
  *(_OWORD *)(v9 + 52) = 0LL;
  *(_QWORD *)(v9 + 68) = 0LL;
  *((_DWORD *)v9 + 19) = 0;
  v9[80] = 0;
  *((_QWORD *)v9 + 11) = 0LL;
  v34 = (struct CWindowData *)v9;
  *((_QWORD *)v9 + 1) = *(_QWORD *)((char *)a3 + 4);
  *((_QWORD *)v34 + 2) = v6;
  *((_QWORD *)v34 + 3) = v7;
  *((_BYTE *)v34 + 32) = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)v34 + 33) = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)v34 + 34) = 0;
  v10 = *((_DWORD *)this + 102);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v16 = -2147024362;
    v18 = -2147024362;
    v19 = -2147024362;
    v20 = 183;
    goto LABEL_35;
  }
  if ( v11 <= *((_DWORD *)this + 101) )
  {
    *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * v10) = v34;
    *((_DWORD *)this + 102) = v11;
    goto LABEL_12;
  }
  v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8, 1, &v34);
  v16 = v17;
  v18 = v17;
  if ( v17 < 0 )
  {
    v19 = v17;
    v20 = 194;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20, 0LL);
    v30 = 4803;
    goto LABEL_36;
  }
LABEL_12:
  v12 = *((_DWORD *)v6 + 140);
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v16 = -2147024362;
    v18 = -2147024362;
    v22 = -2147024362;
    v23 = 183;
    goto LABEL_33;
  }
  if ( v13 <= *((_DWORD *)v6 + 139) )
  {
    *(_QWORD *)(*((_QWORD *)v6 + 67) + 8LL * v12) = v34;
    *((_DWORD *)v6 + 140) = v13;
    goto LABEL_15;
  }
  v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6 + 536, 8, 1, &v34);
  v16 = v21;
  v18 = v21;
  if ( v21 < 0 )
  {
    v22 = v21;
    v23 = 194;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v23, 0LL);
    v30 = 4810;
    goto LABEL_36;
  }
LABEL_15:
  v14 = *((_DWORD *)v7 + 148);
  v15 = v14 + 1;
  if ( v14 + 1 < v14 )
  {
    v16 = -2147024362;
    v18 = -2147024362;
    v27 = -2147024362;
    v28 = 183;
    goto LABEL_31;
  }
  v16 = 0;
  if ( v15 <= *((_DWORD *)v7 + 147) )
  {
    *(_QWORD *)(*((_QWORD *)v7 + 71) + 8LL * v14) = v34;
    *((_DWORD *)v7 + 148) = v15;
    goto LABEL_23;
  }
  v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7 + 568, 8, 1, &v34);
  v16 = v24;
  v18 = v24;
  if ( v24 < 0 )
  {
    v27 = v24;
    v28 = 194;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, v28, 0LL);
    v30 = 4811;
LABEL_36:
    v26 = v16;
    goto LABEL_38;
  }
LABEL_23:
  v18 = v16;
  if ( *((_QWORD *)v6 + 55) )
  {
    v25 = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v34 + 8LL))(v34);
    v18 = v25;
    if ( v25 < 0 )
    {
      v30 = 4819;
      goto LABEL_28;
    }
    v25 = CTopLevelWindow::OnThumbnailAdded(*((CContainerVisual ***)v6 + 55), *((struct CVisual **)v34 + 11));
    v18 = v25;
    if ( v25 < 0 )
    {
      v30 = 4821;
LABEL_28:
      v26 = v25;
LABEL_38:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, v30, 0LL);
    }
  }
LABEL_40:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return v18;
}
