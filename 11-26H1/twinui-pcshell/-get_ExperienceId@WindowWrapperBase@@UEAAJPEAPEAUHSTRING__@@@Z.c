/*
 * XREFs of ?get_ExperienceId@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18043FE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1f4950ba7cdc35714466b3ba8540e942___ @ 0x180436EB4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_1f4950ba7cdc35714466b3ba8540e942.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowWrapperBase::get_ExperienceId(WindowWrapperBase *this, HSTRING *a2)
{
  char *v2; // rbx
  __int128 *v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+8h] BYREF
  HSTRING *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (char *)this - 8;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34), &v8);
  v3 = (__int128 *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     v7,
                     (__int64)v2,
                     (__int64)&v9);
  CurrentThreadId = GetCurrentThreadId();
  LODWORD(v3) = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1f4950ba7cdc35714466b3ba8540e942___(
                  v5,
                  CurrentThreadId,
                  v3);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
  return (unsigned int)v3;
}
