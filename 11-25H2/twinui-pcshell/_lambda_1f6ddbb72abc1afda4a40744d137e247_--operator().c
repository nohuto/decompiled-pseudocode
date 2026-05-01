/*
 * XREFs of _lambda_1f6ddbb72abc1afda4a40744d137e247_::operator() @ 0x1804173D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1f6ddbb72abc1afda4a40744d137e247___::Run @ 0x180419670 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1f6ddbb72abc1afda4a40744d137e247___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_1f6ddbb72abc1afda4a40744d137e247_::operator()(RTL_SRWLOCK **a1)
{
  _QWORD *Ptr; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 *); // rbx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v15; // [rsp+58h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v15, *a1 + 61);
  Ptr = (*a1)[48].Ptr;
  v3 = (*a1)[49].Ptr;
  try
  {
    while ( Ptr != v3 )
    {
      if ( (PVOID)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 296LL))(*Ptr) == a1[1]->Ptr )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*Ptr + 288LL))(*Ptr, &v12);
        v13 = 0LL;
        v4 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)(*a1)[40].Ptr + 56LL))((*a1)[40].Ptr, &v14);
        v5 = *(_QWORD *)v4;
        v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v4 + 64LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v13);
        v7 = v6(v5, v12, &v13);
        if ( v7 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x8AC,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v7,
            v10);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
        break;
      }
      ++Ptr;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8B1,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v8);
  }
  return result;
}
