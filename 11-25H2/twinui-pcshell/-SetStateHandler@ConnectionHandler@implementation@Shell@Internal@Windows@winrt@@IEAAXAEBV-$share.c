/*
 * XREFs of ?SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UConnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@URecoveringState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@@8@@Z @ 0x18064C1F4
 * Callers:
 *     ??0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1802A9A20 (--0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr@UR.c)
 *     ??0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C4FBC (--0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$?0W4CloudPCState@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@std@@$0A@@?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@$$QEAW4CloudPCState@Shell@Internal@Windows@winrt@@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@1@@Z @ 0x1802C7F74 (--$-0W4CloudPCState@Shell@Internal@Windows@winrt@@AEBV-$shared_ptr@UDisconnectedState@implementa.c)
 *     ??4?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@@std@@QEAAAEAV01@V?$initializer_list@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@1@@Z @ 0x1802CA304 (--4-$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@V-$shared_ptr@UConnectionStateBa.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D566C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180352AB8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
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
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-D1h] BYREF
  int v14; // [rsp+24h] [rbp-CDh] BYREF
  int v15; // [rsp+28h] [rbp-C9h] BYREF
  int v16; // [rsp+2Ch] [rbp-C5h] BYREF
  int v17[4]; // [rsp+30h] [rbp-C1h] BYREF
  __m128i v18; // [rsp+40h] [rbp-B1h] BYREF
  char v19[24]; // [rsp+50h] [rbp-A1h] BYREF
  _BYTE v20[24]; // [rsp+68h] [rbp-89h] BYREF
  _BYTE v21[24]; // [rsp+80h] [rbp-71h] BYREF
  _BYTE v22[24]; // [rsp+98h] [rbp-59h] BYREF
  _BYTE v23[24]; // [rsp+B0h] [rbp-41h] BYREF
  int v24; // [rsp+C8h] [rbp-29h] BYREF
  __int128 v25; // [rsp+D0h] [rbp-21h]
  __int64 v26; // [rsp+E0h] [rbp-11h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl) )
  {
    v14 = 0;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v19,
      &v14,
      a2);
    v15 = 2;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v20,
      &v15,
      a3);
    v16 = 1;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v21,
      &v16,
      a4);
    v17[0] = 3;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v22,
      v17,
      a5);
    v13 = 99;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v23,
      &v13,
      a6);
    v24 = 98;
    v25 = 0LL;
    v11 = *((_QWORD *)a7 + 1);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v25 = *a7;
    v18.m128i_i64[0] = (__int64)v19;
    v18.m128i_i64[1] = (__int64)&v26;
    std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::operator=(
      (float *)(a1 + 8),
      &v18);
    v12 = 6LL;
  }
  else
  {
    v13 = 0;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v19,
      &v13,
      a2);
    v13 = 2;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v20,
      &v13,
      a3);
    v13 = 1;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v21,
      &v13,
      a4);
    v13 = 3;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v22,
      &v13,
      a5);
    v13 = 99;
    std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>(
      (__int64)v23,
      &v13,
      a6);
    v18.m128i_i64[0] = (__int64)v19;
    v18.m128i_i64[1] = (__int64)&v24;
    std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>::operator=(
      (float *)(a1 + 8),
      &v18);
    v12 = 5LL;
  }
  `eh vector destructor iterator'(
    v19,
    24LL,
    v12,
    (void (__fastcall *)(char *))std::pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>::~pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>);
}
