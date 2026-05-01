/*
 * XREFs of ?get_WindowProperties@WindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180440AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16037269bea56e9f5c861b1f74fcecf8___ @ 0x180436AF4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_16037269bea56e9f5c861b1f74fcecf8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::get_WindowProperties(
        WindowWrapperBase *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  __int64 v3; // rcx
  __int128 *v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet **v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  *a2 = 0LL;
  v3 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    if ( *((_QWORD *)this + 14) )
    {
      v4 = (__int128 *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                         v10,
                         (__int64)this - 16,
                         (__int64)&v13);
      CurrentThreadId = GetCurrentThreadId();
      v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16037269bea56e9f5c861b1f74fcecf8___(
             v6,
             CurrentThreadId,
             v4);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x53A,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v7,
          v10[0]);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x53F,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
