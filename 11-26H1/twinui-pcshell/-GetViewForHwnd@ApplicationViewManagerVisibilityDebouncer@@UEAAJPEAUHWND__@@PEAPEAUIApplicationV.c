/*
 * XREFs of ?GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180309F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180048120 (-IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z @ 0x180131818 (--0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViewForHwnd(
        ApplicationViewManagerVisibilityDebouncer *this,
        HWND a2,
        struct IApplicationView **a3)
{
  int v6; // esi
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 48LL))(*((_QWORD *)this + 18));
  if ( v6 < 0 )
  {
    CAutoSRWSharedLock::CAutoSRWSharedLock((CAutoSRWSharedLock *)&v10, (RTL_SRWLOCK *)this + 21);
    v7 = (__int64 *)*((_QWORD *)this + 22);
    v8 = &v7[*((_QWORD *)this + 23)];
    while ( v7 != v8 )
    {
      if ( IsEqualByHwnd(a2, (int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))*v7) )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
        *a3 = (struct IApplicationView *)*v7;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
        return 0LL;
      }
      ++v7;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
  }
  return (unsigned int)v6;
}
