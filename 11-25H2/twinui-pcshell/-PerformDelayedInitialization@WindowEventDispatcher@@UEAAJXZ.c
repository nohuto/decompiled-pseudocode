/*
 * XREFs of ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x180410670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18040B290 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1804155B0 (-clear@-$vector@V-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::PerformDelayedInitialization(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v2; // rsi
  _QWORD *Ptr; // rdi
  _QWORD *v4; // r12
  PVOID v5; // r14
  __int64 (__fastcall *v6)(PVOID, _QWORD, _QWORD); // r15
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **); // r15
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v11; // rcx
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  RTL_SRWLOCK *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v18; // [rsp+60h] [rbp+8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v19; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v20; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v21; // [rsp+78h] [rbp+20h]

  v18 = this;
  v1 = this;
  v21 = this;
  v2 = this + 33;
  Ptr = this[33].Ptr;
  v4 = this[34].Ptr;
  try
  {
    while ( Ptr != v4 )
    {
      v19 = 0LL;
      wil::AcquireSRWLockExclusive(&v20, v1 + 43);
      v5 = v1[23].Ptr;
      v6 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 288LL))(*Ptr);
      v8 = v6(v5, v7, 0LL);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA8,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v8);
      v9 = *Ptr;
      v10 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)*Ptr + 240LL);
      v11 = v19;
      v19 = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = v10(v9, &v19);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA9,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v20);
      if ( v19 )
      {
        v13 = WindowEventDispatcher::AppViewRemoved(v1 - 14, v19);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB1,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v13);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
      ++Ptr;
    }
    std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::clear(v2);
    v15 = v1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v14);
    v15 = v21;
    v1 = v18;
  }
  wil::AcquireSRWLockExclusive(&v18, v15 + 43);
  LOBYTE(v1[46].Ptr) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
  return 0LL;
}
