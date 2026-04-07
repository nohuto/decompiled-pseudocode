/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E7430
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180077020 (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008DBB0 (-CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x1800E18D8 (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterSharedVirtualDesktopVisual(
        CWindowList *this,
        HWND a2,
        union _LARGE_INTEGER a3,
        void *a4)
{
  CBaseObject *v8; // r14
  CBaseObject *v9; // r15
  const struct std::nothrow_t *v10; // rdx
  struct CWindowData *v11; // r13
  unsigned int v12; // ebx
  struct CWindowData *v13; // rax
  CDCompVirtualDesktopThumbnailData *v14; // rax
  struct CWindowData *v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // esi
  int v22; // r9d
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // r9d
  unsigned int v28; // eax
  int v29; // eax
  int v30; // r9d
  unsigned int v32; // [rsp+20h] [rbp-30h]
  struct CVisualTargetProxy *v33; // [rsp+30h] [rbp-20h] BYREF
  struct CContainerVisual *v34; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v35; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+48h] [rbp-8h] BYREF

  v36 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v35);
  v11 = v35;
  if ( !v35 )
  {
    v12 = -2147024809;
    goto LABEL_29;
  }
  v13 = (struct CWindowData *)operator new[](0xD0uLL, v10);
  v35 = v13;
  if ( !v13 || (v14 = CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(v13), (v15 = v14) == 0LL) )
  {
    v12 = -2147024882;
    v32 = 4728;
    v30 = -2147024882;
    goto LABEL_28;
  }
  *((union _LARGE_INTEGER *)v14 + 1) = a3;
  *((_QWORD *)v14 + 2) = v11;
  *((_QWORD *)v14 + 3) = 0LL;
  *((_WORD *)v14 + 16) = 0;
  *((_BYTE *)v14 + 34) = 1;
  *((_DWORD *)v14 + 30) = 2;
  v16 = CCompositor::CreateVisualTargetProxyFromSharedHandle(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          a4,
          &v33);
  v12 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1284u, 0LL);
    v8 = v33;
    goto LABEL_29;
  }
  v17 = CContainerVisual::Create(&v34);
  v12 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x1285u, 0LL);
    v8 = v33;
    v9 = v34;
    goto LABEL_29;
  }
  v9 = v34;
  v8 = v33;
  v18 = CVisualTargetProxy::SetRoot(v33, *((struct CVisualProxy **)v34 + 2));
  v12 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x1286u, 0LL);
    goto LABEL_29;
  }
  *((_QWORD *)v15 + 12) = v8;
  *((_QWORD *)v15 + 13) = v9;
  v35 = v15;
  v19 = *((_DWORD *)this + 102);
  v20 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v21 = -2147024362;
    v12 = -2147024362;
    v22 = -2147024362;
    v23 = 179;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, v23, 0LL);
    v32 = 4749;
    goto LABEL_21;
  }
  if ( v20 > *((_DWORD *)this + 101) )
  {
    v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8, 1, &v35);
    v21 = v24;
    v12 = v24;
    if ( v24 < 0 )
    {
      v22 = v24;
      v23 = 190;
      goto LABEL_23;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * *((unsigned int *)this + 102)) = v15;
    *((_DWORD *)this + 102) = v20;
  }
  v8 = 0LL;
  v9 = 0LL;
  v35 = v15;
  v25 = *((_DWORD *)v11 + 140);
  v26 = v25 + 1;
  if ( v25 + 1 >= v25 )
  {
    v21 = 0;
    if ( v26 > *((_DWORD *)v11 + 139) )
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 536, 8, 1, &v35);
      v21 = v29;
      v12 = v29;
      if ( v29 < 0 )
      {
        v27 = v29;
        v28 = 190;
        goto LABEL_20;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v11 + 67) + 8LL * *((unsigned int *)v11 + 140)) = v15;
      *((_DWORD *)v11 + 140) = v26;
    }
    v12 = v21;
    goto LABEL_29;
  }
  v21 = -2147024362;
  v12 = -2147024362;
  v27 = -2147024362;
  v28 = 179;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, v28, 0LL);
  v32 = 4756;
LABEL_21:
  v30 = v21;
LABEL_28:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, v32, 0LL);
LABEL_29:
  CloseHandle(a4);
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v9 )
    CBaseObject::Release(v9);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v36);
  return v12;
}
