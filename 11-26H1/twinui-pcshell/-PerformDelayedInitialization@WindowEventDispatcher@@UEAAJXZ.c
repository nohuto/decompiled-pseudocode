/*
 * XREFs of ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x18041B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804161A0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180420334 (-clear@-$vector@V-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowEventDispatcher::PerformDelayedInitialization(WindowEventDispatcher *this)
{
  WindowEventDispatcher *v1; // rbx
  char *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // r12
  __int64 v5; // r14
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD); // r15
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
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v18; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v19; // [rsp+68h] [rbp+10h] BYREF
  WindowEventDispatcher *v20; // [rsp+70h] [rbp+18h]
  WindowEventDispatcher *v21; // [rsp+78h] [rbp+20h]

  v1 = this;
  v20 = this;
  v21 = this;
  v2 = (char *)this + 264;
  v3 = (_QWORD *)*((_QWORD *)this + 33);
  v4 = (_QWORD *)*((_QWORD *)this + 34);
  try
  {
    while ( v3 != v4 )
    {
      v18 = 0LL;
      wil::AcquireSRWLockExclusive(&v19, (RTL_SRWLOCK *)v1 + 43);
      v5 = *((_QWORD *)v1 + 23);
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 288LL))(*v3);
      v8 = v6(v5, v7, 0LL);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA7,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v8);
      v9 = *v3;
      v10 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)*v3 + 240LL);
      v11 = v18;
      v18 = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = v10(v9, &v18);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA8,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
      if ( v18 )
      {
        v13 = WindowEventDispatcher::AppViewRemoved((RTL_SRWLOCK *)v1 - 14, v18);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB0,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v13);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
      ++v3;
    }
    std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::clear(v2);
    v15 = (RTL_SRWLOCK *)v1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB6,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v14);
    v15 = (RTL_SRWLOCK *)v20;
    v1 = v21;
  }
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v18, v15 + 43);
  *((_BYTE *)v1 + 368) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v18);
  return 0LL;
}
