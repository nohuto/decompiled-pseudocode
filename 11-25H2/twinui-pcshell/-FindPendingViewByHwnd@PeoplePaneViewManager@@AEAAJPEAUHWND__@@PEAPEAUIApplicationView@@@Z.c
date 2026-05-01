/*
 * XREFs of ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1804003CC
 * Callers:
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804011C8 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetHwndFromView@PeoplePaneViewManager@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1804007C8 (-GetHwndFromView@PeoplePaneViewManager@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FindPendingViewByHwnd(
        RTL_SRWLOCK *this,
        HWND a2,
        struct IApplicationView **a3)
{
  PeoplePaneViewManager *v6; // rcx
  __int64 *Ptr; // rdi
  __int64 *v8; // rbx
  unsigned int v9; // ebx
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v11, this + 20);
  Ptr = (__int64 *)this[21].Ptr;
  v8 = (__int64 *)this[22].Ptr;
  while ( Ptr != v8 )
  {
    if ( PeoplePaneViewManager::GetHwndFromView(v6, (struct IApplicationView *)*Ptr) == a2 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(Ptr);
      *a3 = (struct IApplicationView *)*Ptr;
      v9 = 0;
      goto LABEL_7;
    }
    ++Ptr;
  }
  v9 = -2147023728;
LABEL_7:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
  return v9;
}
