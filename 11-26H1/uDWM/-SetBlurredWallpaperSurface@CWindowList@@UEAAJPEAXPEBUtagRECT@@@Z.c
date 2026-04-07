/*
 * XREFs of ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180069050
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z @ 0x1800742F4 (-SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?CreateVisualSurfaceProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x1800A803C (-CreateVisualSurfaceProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::SetBlurredWallpaperSurface(CWindowList *this, void *a2, const struct tagRECT *a3)
{
  unsigned int v6; // ebx
  CCompositor *v7; // rbx
  int v8; // eax
  struct CResourceProxy **v9; // rdi
  struct CVisualSurfaceProxy *v10; // rdx
  CBaseObject **v11; // rcx
  CVisual *RootVisualForDesktop; // rax
  int v13; // eax
  CBaseObject *v15[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CVisualSurfaceProxy *v16; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v15[1] = (CBaseObject *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  if ( a2 )
  {
    v16 = 0LL;
    v7 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v16);
    v8 = CCompositor::CreateVisualSurfaceProxyFromSharedHandle(v7, a2, &v16);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x136Fu, 0LL);
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v16);
      goto LABEL_9;
    }
    v9 = (struct CResourceProxy **)((char *)this + 96);
    v10 = v16;
    v16 = 0LL;
    v15[0] = *((CBaseObject **)this + 12);
    *((_QWORD *)this + 12) = v10;
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v15);
    v11 = &v16;
  }
  else
  {
    v9 = (struct CResourceProxy **)((char *)this + 96);
    v11 = (CBaseObject **)((char *)this + 96);
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v11);
  *(struct tagRECT *)((char *)this + 104) = *a3;
  v17 = 0LL;
  GetDesktopID(2LL, &v17);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, v17);
  if ( RootVisualForDesktop )
  {
    v13 = CVisual::SetBlurredWallpaperSurface(RootVisualForDesktop, *v9, (const struct tagRECT *)((char *)this + 104));
    v6 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x1380u, 0LL);
  }
LABEL_9:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
