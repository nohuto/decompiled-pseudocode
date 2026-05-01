/*
 * XREFs of ?SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UConnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@URecoveringState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@@8@@Z @ 0x1806721BC
 * Callers:
 *     ??0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802A1DA0 (--0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr@UR.c)
 *     ??0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802BBE34 (--0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$?0W4CloudPCState@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@std@@$0A@@?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@$$QEAW4CloudPCState@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@1@@Z @ 0x1802BF338 (--$-0W4CloudPCState@Shell@Internal@Windows@winrt@@AEBV-$shared_ptr@UDisconnectedState@implementa.c)
 *     ??4?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@@std@@QEAAAEAV01@V?$initializer_list@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@1@@Z @ 0x1802C1B80 (--4-$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@V-$shared_ptr@UConnectionStateBa.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802CDC8C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180358A84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::ConnectionHandler::SetStateHandler(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int128 *a7)
{
  __int64 v11; // r8
  __int64 v12; // rax
  _DWORD v13[4]; // [rsp+20h] [rbp-C1h] BYREF
  __m128i v14; // [rsp+30h] [rbp-B1h] BYREF
  char v15[24]; // [rsp+40h] [rbp-A1h] BYREF
  _BYTE v16[24]; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v17[24]; // [rsp+70h] [rbp-71h] BYREF
  _BYTE v18[24]; // [rsp+88h] [rbp-59h] BYREF
  _BYTE v19[24]; // [rsp+A0h] [rbp-41h] BYREF
  int v20; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v21; // [rsp+C0h] [rbp-21h]
  __int64 v22; // [rsp+D0h] [rbp-11h] BYREF

  v13[0] = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl) )
  {
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v15,
      v13,
      a2);
    v13[0] = 2;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v16,
      v13,
      a3);
    v13[0] = 1;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v17,
      v13,
      a4);
    v13[0] = 3;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v18,
      v13,
      a5);
    v13[0] = 99;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v19,
      v13,
      a6);
    v20 = 98;
    v21 = 0LL;
    v12 = *((_QWORD *)a7 + 1);
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v21 = *a7;
    v14.m128i_i64[0] = (__int64)v15;
    v14.m128i_i64[1] = (__int64)&v22;
    std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::operator=(
      (float *)(a1 + 8),
      &v14);
    v11 = 6LL;
  }
  else
  {
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v15,
      v13,
      a2);
    v13[0] = 2;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v16,
      v13,
      a3);
    v13[0] = 1;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v17,
      v13,
      a4);
    v13[0] = 3;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v18,
      v13,
      a5);
    v13[0] = 99;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v19,
      v13,
      a6);
    v14.m128i_i64[0] = (__int64)v15;
    v14.m128i_i64[1] = (__int64)&v20;
    std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::operator=(
      (float *)(a1 + 8),
      &v14);
    v11 = 5LL;
  }
  `eh vector destructor iterator'(
    v15,
    24LL,
    v11,
    (void (__fastcall *)(char *))std::pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>::~pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>);
}
