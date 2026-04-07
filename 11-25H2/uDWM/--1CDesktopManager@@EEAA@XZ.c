/*
 * XREFs of ??1CDesktopManager@@EEAA@XZ @ 0x1800AC090
 * Callers:
 *     ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x1800AC320 (--_ECDesktopManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180033990 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004911C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@QEAA@XZ @ 0x18008A8D0 (--1-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositionEffectCache@@@std@@@std.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1?$unique_ptr@VCDisplayBroker@@U?$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ @ 0x18009A0E4 (--1-$unique_ptr@VCDisplayBroker@@U-$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ.c)
 *     ??1CAnimationClockCoordinator@@QEAA@XZ @ 0x1800A5ED8 (--1CAnimationClockCoordinator@@QEAA@XZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A76A8 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800A9FA0 (-Shutdown@CCompositor@@IEAAXXZ.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x1800AA398 (--1CContactManager@@QEAA@XZ.c)
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800AC370 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800AC3C0 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800AC410 (--_ECWindowList@@UEAAPEAXI@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800AD610 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ??1CTransitionVisualController@@QEAA@XZ @ 0x1800D1C88 (--1CTransitionVisualController@@QEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800E9E44 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopManager::~CDesktopManager(CDesktopManager *this, const struct std::nothrow_t *a2)
{
  __int64 v3; // rbp
  void *v4; // rdi
  CBaseObject **v5; // rsi
  void *v6; // rdi
  const struct std::nothrow_t *v7; // rdx
  void *v8; // rdi
  const struct std::nothrow_t *v9; // rdx
  void *v10; // rdi
  void *v11; // rdi
  CWindowList *v12; // rcx
  void *v13; // rcx
  CBaseObject *v14; // rcx
  CIconicBitmapRegistry *v15; // rcx
  CImmersiveIconicBitmapRegistry *v16; // rcx
  CCompositor *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *lpMem; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDesktopManager::`vftable';
  v3 = *((unsigned int *)this + 136);
  if ( (_DWORD)v3 )
  {
    lpMem = 0LL;
    DynArrayImpl<0>::DetachData((char *)this + 520, a2, &lpMem);
    v4 = lpMem;
    if ( lpMem )
    {
      v5 = (CBaseObject **)lpMem;
      do
      {
        CBaseObject::Release(*v5++);
        --v3;
      }
      while ( v3 );
      DefaultHeap::Free(v4);
    }
  }
  v6 = (void *)*((_QWORD *)this + 21);
  if ( v6 )
  {
    CAnimationClockCoordinator::~CAnimationClockCoordinator(*((CAnimationClockCoordinator **)this + 21));
    CDisplayBlackCurtainAnimatedVisual::operator delete(v6, v7);
    *((_QWORD *)this + 21) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 23);
  if ( v8 )
  {
    CAnimationScheduler::~CAnimationScheduler(*((CAnimationScheduler **)this + 23));
    CDisplayBlackCurtainAnimatedVisual::operator delete(v8, v9);
    *((_QWORD *)this + 23) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 24);
  if ( v10 )
  {
    CTransitionVisualController::~CTransitionVisualController(*((CTransitionVisualController **)this + 24));
    DefaultHeap::Free(v10);
    *((_QWORD *)this + 24) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 20);
  if ( v11 )
  {
    CContactManager::~CContactManager(*((void ***)this + 20));
    DefaultHeap::Free(v11);
    *((_QWORD *)this + 20) = 0LL;
  }
  v12 = (CWindowList *)*((_QWORD *)this + 53);
  if ( v12 )
  {
    CWindowList::`vector deleting destructor'(v12, 1u);
    *((_QWORD *)this + 53) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 58);
  if ( v13 )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(v13, a2);
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
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 6);
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
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 162);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 156);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 65);
  std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>((_QWORD *)this + 27);
  std::unique_ptr<CCompositionEffectCache>::~unique_ptr<CCompositionEffectCache>((_QWORD *)this + 26);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 13);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 7);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 6);
  CBaseObject::~CBaseObject(this);
}
