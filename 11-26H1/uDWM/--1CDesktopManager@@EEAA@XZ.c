/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x1800AA010
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x1800AA300 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800066F4 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??1?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@QEAA@XZ @ 0x180079794 (--1-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositionEffectCache@@@std@@@std.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1?$unique_ptr@VCDisplayBroker@@U?$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ @ 0x18008DB08 (--1-$unique_ptr@VCDisplayBroker@@U-$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 *     ??1CAnimationClockCoordinator@@QEAA@XZ @ 0x180098AD4 (--1CAnimationClockCoordinator@@QEAA@XZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x18009A068 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800A80A4 (-Shutdown@CCompositor@@IEAAXXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x1800A84D4 (--1CContactManager@@QEAA@XZ.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800AA350 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800AA3A0 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800AA3F0 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800AC730 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ??1CTransitionVisualController@@QEAA@XZ @ 0x1800CE4C0 (--1CTransitionVisualController@@QEAA@XZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E5528 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this)
{
  char *v2; // rsi
  __int64 v3; // rbp
  CBaseObject **v4; // rdi
  int v5; // eax
  CBaseObject **v6; // r14
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  CWindowList *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  CBaseObject *v14; // rcx
  CIconicBitmapRegistry *v15; // rcx
  CImmersiveIconicBitmapRegistry *v16; // rcx
  CCompositor *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDesktopManager::`vftable';
  v2 = (char *)this + 528;
  v3 = *((unsigned int *)this + 138);
  if ( (_DWORD)v3 )
  {
    v4 = *(CBaseObject ***)v2;
    if ( *((_QWORD *)this + 66) == *((_QWORD *)this + 67) )
    {
      v20 = 0LL;
      if ( (int)HrMalloc((unsigned __int64)this, *((unsigned int *)this + 137), &v20) < 0 )
        goto LABEL_10;
      v5 = *((_DWORD *)v2 + 6);
      v4 = (CBaseObject **)v20;
      if ( v5 )
        memcpy_0(v20, *(const void **)v2, (unsigned int)(8 * v5));
    }
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 20) = 0LL;
    if ( v4 )
    {
      v6 = v4;
      do
      {
        CBaseObject::Release(*v6++);
        --v3;
      }
      while ( v3 );
      DefaultHeap::Free(v4);
    }
  }
LABEL_10:
  v7 = (void *)*((_QWORD *)this + 21);
  if ( v7 )
  {
    CAnimationClockCoordinator::~CAnimationClockCoordinator(*((CAnimationClockCoordinator **)this + 21));
    operator delete(v7, (const struct std::nothrow_t *)0x58);
    *((_QWORD *)this + 21) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 23);
  if ( v8 )
  {
    CAnimationScheduler::~CAnimationScheduler(*((CAnimationScheduler **)this + 23));
    operator delete(v8, (const struct std::nothrow_t *)0x58);
    *((_QWORD *)this + 23) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 24);
  if ( v9 )
  {
    CTransitionVisualController::~CTransitionVisualController(*((CTransitionVisualController **)this + 24));
    DefaultHeap::Free(v9);
    *((_QWORD *)this + 24) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 20);
  if ( v10 )
  {
    CContactManager::~CContactManager(*((void ***)this + 20));
    DefaultHeap::Free(v10);
    *((_QWORD *)this + 20) = 0LL;
  }
  v11 = (CWindowList *)*((_QWORD *)this + 53);
  if ( v11 )
  {
    CWindowList::`vector deleting destructor'(v11, 1u);
    *((_QWORD *)this + 53) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 59);
  if ( v12 )
  {
    operator delete(v12, (const struct std::nothrow_t *)8);
    *((_QWORD *)this + 59) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 58);
  if ( v13 )
  {
    operator delete(v13, (const struct std::nothrow_t *)8);
    *((_QWORD *)this + 58) = 0LL;
  }
  CDesktopManager::ReleaseDCompResources(this);
  v14 = (CBaseObject *)*((_QWORD *)this + 57);
  if ( v14 )
    CBaseObject::Release(v14);
  v15 = (CIconicBitmapRegistry *)*((_QWORD *)this + 28);
  if ( v15 )
  {
    CIconicBitmapRegistry::`vector deleting destructor'(v15, 1u);
    *((_QWORD *)this + 28) = 0LL;
  }
  v16 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)this + 29);
  if ( v16 )
  {
    CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(v16, 1u);
    *((_QWORD *)this + 29) = 0LL;
  }
  CDesktopManager::UnloadTheme(this);
  v17 = (CCompositor *)*((_QWORD *)this + 6);
  if ( v17 )
  {
    CCompositor::Shutdown(v17);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)this + 6);
  }
  v18 = *((_QWORD *)this + 30);
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    *((_QWORD *)this + 30) = 0LL;
  }
  v19 = *((_QWORD *)this + 31);
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    *((_QWORD *)this + 31) = 0LL;
  }
  CDesktopManager::s_pDesktopManagerInstance = 0LL;
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 159);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 152);
  CBitmapSourceArray::~CBitmapSourceArray((void **)v2);
  std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>((_QWORD *)this + 27);
  std::unique_ptr<CCompositionEffectCache>::~unique_ptr<CCompositionEffectCache>((_QWORD *)this + 26);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 13);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 7);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 6);
  CBaseObject::~CBaseObject(this);
}
