/*
 * XREFs of ?ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x180446920
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D2B4 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2295e0733fe842dc7216b708d96c5c17___ @ 0x1804432D8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_2295e0733fe842dc7216b708d96c5c17.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::ApplyPresenter(
        Windows::Internal::ApplicationModel::WindowManagement *a1,
        int a2)
{
  const char *v3; // r9
  __int64 result; // rax
  _QWORD *v5; // rax
  int v6; // eax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = a2;
  try
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(a1)
      || (*(unsigned int (__fastcall **)(Windows::Internal::ApplicationModel::WindowManagement *))(*(_QWORD *)a1 + 224LL))(a1) == 1 )
    {
      (*(void (__fastcall **)(_QWORD *, RTL_SRWLOCK **))(**((_QWORD **)a1 + 33) + 208LL))(*((_QWORD **)a1 + 33), &v10);
      v5 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
             v7,
             (__int64)a1 - 16,
             (__int64)&v9);
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2295e0733fe842dc7216b708d96c5c17___((__int64)v5);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x58B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
      result = 0LL;
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x58F,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v3);
  }
  return result;
}
