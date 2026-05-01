/*
 * XREFs of ?SubscribeForPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListener@@@Z @ 0x180300970
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SubscribeForPresentationChanges(
        CImmersiveApp *this,
        struct IImmersiveApplicationPresentationListener *a2)
{
  struct IImmersiveApplicationPresentationListener *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IImmersiveApplicationPresentationListener *v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+18h] BYREF

  CIAMGlobals::AcquireExclusive((__int64)this, &v10);
  v4 = (struct IImmersiveApplicationPresentationListener *)*((_QWORD *)this + 78);
  v5 = 0;
  if ( v4 )
  {
    if ( v4 != a2 )
    {
      v5 = -2147024713;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9AA,
        (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)0x800700B7LL);
    }
  }
  else if ( a2 )
  {
    v9 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    v6 = *((_QWORD *)this + 78);
    *((_QWORD *)this + 78) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
  return v5;
}
