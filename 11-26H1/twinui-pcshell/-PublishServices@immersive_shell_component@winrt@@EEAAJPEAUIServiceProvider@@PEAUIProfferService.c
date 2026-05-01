/*
 * XREFs of ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800DB470
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ @ 0x1800DB6FC (--R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1800DBB68 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 *     ??$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@1@PEAUimmersive_shell_component@1@@Z @ 0x1800DBBE0 (--$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@$0A@@impl@winrt@@YA-AU-$com_ptr@UISer.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall winrt::immersive_shell_component::PublishServices(
        RTL_SRWLOCK *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  RTL_SRWLOCK *v5; // rdi
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v7; // rdx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  const char *v11; // r9
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  void (__fastcall ***v16)(_QWORD, __int64 *, RTL_SRWLOCK **); // rcx
  int v17; // eax
  const char *v18; // r9
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-50h] BYREF
  char v23; // [rsp+48h] [rbp-40h]
  __int128 v24; // [rsp+50h] [rbp-38h] BYREF
  PVOID Ptr; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  RTL_SRWLOCK *v27; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h] BYREF

  v5 = this - 2;
  try
  {
    (*((void (**)(void))this[-2].Ptr + 9))();
    v27 = 0LL;
    v6 = 0LL;
    if ( v5 )
    {
      v27 = v5;
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
      v6 = v5;
    }
    winrt::impl::as<IServiceProvider,winrt::immersive_shell_component,0>(&v21, v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v27);
    v24 = 0LL;
    Ptr = 0LL;
    AcquireSRWLockExclusive(this + 8);
    v7 = this + 4;
    if ( &v24 != (__int128 *)&this[4] )
    {
      v8 = (void *)v24;
      *(RTL_SRWLOCK *)&v24 = (RTL_SRWLOCK)v7->Ptr;
      v7->Ptr = v8;
      v9 = (void *)*((_QWORD *)&v24 + 1);
      *((RTL_SRWLOCK *)&v24 + 1) = this[5];
      this[5].Ptr = v9;
      v10 = Ptr;
      Ptr = this[6].Ptr;
      this[6].Ptr = v10;
    }
    if ( this != (RTL_SRWLOCK *)-64LL )
      ReleaseSRWLockExclusive(this + 8);
    v22 = *(_OWORD *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                       &v22,
                       v5,
                       &v24);
    v23 = 1;
    v13 = *((_QWORD *)&v24 + 1);
    v12 = v24;
    v14 = v21;
    while ( v12 != v13 )
    {
      v15 = v14;
      v28 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v16 = *(void (__fastcall ****)(_QWORD, __int64 *, RTL_SRWLOCK **))(v12 + 16);
      if ( v16 )
      {
        v27 = 0LL;
        (**v16)(v16, &winrt::impl::guid_v<IServiceProvider>, &v27);
        if ( v27 )
        {
          winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=(&v28, (__int64 *)&v27);
          v15 = v28;
          if ( v27 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v27);
        }
      }
      if ( !v15 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x146,
          (unsigned int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
          v11);
      v17 = ((__int64 (__fastcall *)(struct IProfferService *, __int64, __int64, __int64))a3->lpVtbl->ProfferService)(
              a3,
              v12,
              v15,
              v12 + 24);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x148,
          (int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
          (const char *)(unsigned int)v17,
          v20);
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v28);
      v12 += 32LL;
    }
    v23 = 0;
    _lambda_bf0c31f178687dd5d0af47a31b5c5700_::operator()(&v22);
    std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v24);
    if ( v14 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v21);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x14D,
                     (int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
                     v18);
    return (unsigned int)v27;
  }
  return result;
}
