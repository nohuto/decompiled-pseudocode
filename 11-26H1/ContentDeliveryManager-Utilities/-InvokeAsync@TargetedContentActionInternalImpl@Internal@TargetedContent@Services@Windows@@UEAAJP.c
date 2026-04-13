/*
 * XREFs of ?InvokeAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18006F750
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@CreativeFramework@@@Z @ 0x1800236BC (--0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@Creati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::InvokeOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x18006C384 (Windows--Internal--MakeAsyncHelper_Windows--Foundation--IAsyncAction_Windows--Found_ea_18006C384.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_64334da26fc4dbc2a9fcd40835aea43a___ @ 0x18006C71C (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_64334da26fc4dbc2a9fcd4083.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::InvokeAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  _lambda_62158d46a05af21ae3d227fe228597be_ *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v13; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = _lambda_62158d46a05af21ae3d227fe228597be_::_lambda_62158d46a05af21ae3d227fe228597be_(
         (_lambda_62158d46a05af21ae3d227fe228597be_ *)&v13,
         (Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *)((char *)this - 48));
  v10 = 2LL;
  v11 = 0;
  v4 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_64334da26fc4dbc2a9fcd40835aea43a___(v3);
  v7 = Windows::Internal::MakeAsyncHelper_Windows::Foundation::IAsyncAction_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_Windows::Internal::CNoResult_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::InvokeOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
         (__int64 *)a2,
         (__int64)&v10,
         v5,
         v6,
         (void (__fastcall ***)(_QWORD, __int64))v4);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
