/*
 * XREFs of ?PartialTrustGetSubscriptionAsync@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@89@@Z @ 0x180063670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::PartialTrustGetSubscriptionAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  HSTRING v7; // rbx
  int ActivationFactory; // eax
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  HSTRING v14; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v15; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a4 = 0LL;
  v13 = 0LL;
  if ( WindowsCreateStringReference(L"ContentManagement.TargetedContent.TargetedContentSubscription", 0x3Du, &v15, &v14) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v7 = v14;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  ActivationFactory = RoGetActivationFactory(v7, &GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584, &v13);
  try
  {
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        166LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v12);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, a2, a3, a4);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        167LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v9,
        v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA9,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v10);
  }
  return result;
}
