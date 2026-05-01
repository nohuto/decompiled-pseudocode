/*
 * XREFs of ?UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800FE690
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18002A594 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18006E5DC (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowConsolidateRequested(RTL_SRWLOCK *this, __int64 (***a2)(void))
{
  __int64 (**v3)(void); // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  int v6; // eax
  const char *v7; // r9
  int v8; // ebx
  _QWORD *Ptr; // r12
  _QWORD *i; // r14
  __int64 *v11; // rax
  int v12; // esi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rbx
  int v14; // esi
  __int64 *v15; // rax
  __int64 v16; // r14
  std::_Ref_count_base *v17; // rsi
  __int64 v18; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v19; // rdi
  __int64 result; // rax
  int v21; // [rsp+20h] [rbp-88h]
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v24; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // [rsp+48h] [rbp-60h] BYREF
  std::_Ref_count_base *v26; // [rsp+50h] [rbp-58h]
  __int64 *v27; // [rsp+58h] [rbp-50h]
  __int128 v28; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v30; // [rsp+B8h] [rbp+10h] BYREF
  int v31; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+20h]

  LODWORD(v30) = 0;
  v3 = *a2;
  v32 = 0LL;
  v4 = *v3;
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x759,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v5,
        v21);
    v31 = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 48LL))(v32, &v31);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x75C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v21);
    v22 = 0LL;
    v28 = 0LL;
    AcquireSRWLockShared(this + 59);
    v27 = (__int64 *)&this[59];
    v8 = v31;
    Ptr = this[47].Ptr;
    for ( i = this[46].Ptr; i != Ptr && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 256LL))(*i) != v8; ++i )
      ;
    if ( i == this[47].Ptr )
    {
      v11 = (__int64 *)&v24;
      v12 = 2;
      v13 = 0LL;
    }
    else
    {
      v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*i;
      if ( *i )
        ((void (__fastcall *)(_QWORD))(*v13)[1])(*i);
      v11 = &v23;
      v12 = 1;
    }
    *v11 = 0LL;
    v25 = v13;
    v14 = v12 | 4;
    LODWORD(v30) = v14;
    if ( (v14 & 2) != 0 )
    {
      v14 &= ~2u;
      LODWORD(v30) = v14;
      if ( v24 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( (v14 & 1) != 0 )
    {
      LODWORD(v30) = v14 & 0xFFFFFFFE;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v25 = 0LL;
    v22 = v13;
    if ( v13 )
    {
      v15 = (__int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), _QWORD *))(*v13)[33])(
                         v13,
                         &v25);
      v16 = *v15;
      v17 = (std::_Ref_count_base *)v15[1];
      *v15 = 0LL;
      v15[1] = 0LL;
      *(_QWORD *)&v28 = v16;
      *((_QWORD *)&v28 + 1) = v17;
      if ( v26 )
        std::_Ref_count_base::_Decref(v26);
    }
    else
    {
      v17 = (std::_Ref_count_base *)*((_QWORD *)&v28 + 1);
      v16 = v28;
    }
    if ( this != (RTL_SRWLOCK *)-472LL )
      ReleaseSRWLockShared(this + 59);
    if ( v13 )
    {
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &v22,
        &v24);
      v18 = *(_QWORD *)(v16 + 24);
      v30 = v18;
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        v18 = v30;
      }
      v27 = &v30;
      v19 = v24;
      v23 = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      UwpWindowEventDispatcher::RaiseViewEventWithPropertySet((__int64)&this[-2], v19, 35, 0LL, &v23);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v30);
      if ( v24 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( v13 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v30) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x773,
                     (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                     v7);
    return (unsigned int)v30;
  }
  return result;
}
