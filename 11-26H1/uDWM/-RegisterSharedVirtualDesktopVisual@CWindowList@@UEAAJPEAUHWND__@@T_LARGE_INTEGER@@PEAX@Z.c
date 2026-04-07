/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180069F10
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x1800380C0 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18006A244 (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008425C (-CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x1800DE7D4 (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
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
  struct CWindowData *v10; // r13
  unsigned int v11; // ebx
  struct CWindowData *v12; // rax
  CDCompVirtualDesktopThumbnailData *v13; // rax
  struct CWindowData *v14; // rdi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  int v21; // esi
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  int v25; // r9d
  unsigned int v26; // eax
  int v27; // r9d
  int v28; // r9d
  unsigned int v29; // eax
  unsigned int v31; // [rsp+20h] [rbp-30h]
  CVisualTargetProxy *v32; // [rsp+30h] [rbp-20h] BYREF
  struct CContainerVisual *v33; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v34[2]; // [rsp+40h] [rbp-10h] BYREF

  v34[1] = (struct CWindowData *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  v32 = 0LL;
  v9 = 0LL;
  v33 = 0LL;
  v34[0] = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, v34);
  v10 = v34[0];
  if ( !v34[0] )
  {
    v11 = -2147024809;
    goto LABEL_29;
  }
  v12 = (struct CWindowData *)operator new(0xD0uLL);
  v34[0] = v12;
  if ( !v12 || (v13 = CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(v12), (v14 = v13) == 0LL) )
  {
    v11 = -2147024882;
    v31 = 5028;
    v27 = -2147024882;
    goto LABEL_28;
  }
  *((union _LARGE_INTEGER *)v13 + 1) = a3;
  *((_QWORD *)v13 + 2) = v10;
  *((_QWORD *)v13 + 3) = 0LL;
  *((_WORD *)v13 + 16) = 0;
  *((_BYTE *)v13 + 34) = 1;
  *((_DWORD *)v13 + 30) = 2;
  v15 = CCompositor::CreateVisualTargetProxyFromSharedHandle(
          *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
          a4,
          &v32);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x13B0u, 0LL);
    v8 = v32;
    goto LABEL_29;
  }
  v16 = CContainerVisual::Create(&v33);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x13B1u, 0LL);
    v8 = v32;
    v9 = v33;
    goto LABEL_29;
  }
  v9 = v33;
  v8 = v32;
  v17 = CVisualTargetProxy::SetRoot(v32, *((struct CVisualProxy **)v33 + 2));
  v11 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x13B2u, 0LL);
    goto LABEL_29;
  }
  *((_QWORD *)v14 + 12) = v8;
  *((_QWORD *)v14 + 13) = v9;
  v34[0] = v14;
  v18 = *((_DWORD *)this + 102);
  v19 = v18 + 1;
  if ( v18 + 1 < v18 )
  {
    v21 = -2147024362;
    v11 = -2147024362;
    v28 = -2147024362;
    v29 = 183;
  }
  else
  {
    if ( v19 <= *((_DWORD *)this + 101) )
    {
      *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * v18) = v14;
      *((_DWORD *)this + 102) = v19;
LABEL_12:
      v8 = 0LL;
      v9 = 0LL;
      v34[0] = v14;
      v22 = *((_DWORD *)v10 + 140);
      v23 = v22 + 1;
      if ( v22 + 1 < v22 )
      {
        v21 = -2147024362;
        v11 = -2147024362;
        v25 = -2147024362;
        v26 = 183;
      }
      else
      {
        v21 = 0;
        if ( v23 <= *((_DWORD *)v10 + 139) )
        {
          *(_QWORD *)(*((_QWORD *)v10 + 67) + 8LL * v22) = v14;
          *((_DWORD *)v10 + 140) = v23;
LABEL_16:
          v11 = v21;
          goto LABEL_29;
        }
        v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10 + 536, 8, 1, v34);
        v21 = v24;
        v11 = v24;
        if ( v24 >= 0 )
          goto LABEL_16;
        v25 = v24;
        v26 = 194;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, v26, 0LL);
      v31 = 5056;
      goto LABEL_20;
    }
    v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8, 1, v34);
    v21 = v20;
    v11 = v20;
    if ( v20 >= 0 )
      goto LABEL_12;
    v28 = v20;
    v29 = 194;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, v29, 0LL);
  v31 = 5049;
LABEL_20:
  v27 = v21;
LABEL_28:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, v31, 0LL);
LABEL_29:
  CloseHandle(a4);
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v9 )
    CBaseObject::Release(v9);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v11;
}
