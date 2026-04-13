/*
 * XREFs of ?StageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180070670
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@CreativeFramework@@@Z @ 0x1800236BC (--0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@Creati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncActionHelper_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___ @ 0x18006C290 (Windows--Internal--MakeAsyncActionHelper_Windows--Internal--ComTaskPoolHandler_Microsoft--WRL--A.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_0d276c7ea3d710d19b822c1822ed0068___ @ 0x18006C5F4 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_0d276c7ea3d710d19b822c182.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::StageAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  int v2; // ebx
  _lambda_62158d46a05af21ae3d227fe228597be_ *v3; // rax
  _QWORD *v4; // rax
  int v5; // r8d
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+24h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (int)a2;
  *a2 = 0LL;
  v3 = _lambda_62158d46a05af21ae3d227fe228597be_::_lambda_62158d46a05af21ae3d227fe228597be_(
         (_lambda_62158d46a05af21ae3d227fe228597be_ *)&v12,
         (Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *)((char *)this - 48));
  v9 = 3;
  v10 = 130LL;
  v4 = Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_0d276c7ea3d710d19b822c1822ed0068___(v3);
  v6 = Windows::Internal::MakeAsyncActionHelper_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___(
         (int)&v9,
         v2,
         v5,
         (__int64)v4);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
