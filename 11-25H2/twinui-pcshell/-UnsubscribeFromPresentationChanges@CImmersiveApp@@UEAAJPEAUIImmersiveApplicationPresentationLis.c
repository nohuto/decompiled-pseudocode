/*
 * XREFs of ?UnsubscribeFromPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListener@@@Z @ 0x180305190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::UnsubscribeFromPresentationChanges(
        CImmersiveApp *this,
        struct IImmersiveApplicationPresentationListener *a2)
{
  struct IImmersiveApplicationPresentationListener *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  CIAMGlobals::AcquireExclusive((__int64)this, &v7);
  v4 = (struct IImmersiveApplicationPresentationListener *)*((_QWORD *)this + 78);
  if ( v4 && a2 == v4 )
  {
    *((_QWORD *)this + 78) = 0LL;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
    (*(void (__fastcall **)(struct IImmersiveApplicationPresentationListener *))(*(_QWORD *)v4 + 16LL))(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C3,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
    return 2147942487LL;
  }
}
