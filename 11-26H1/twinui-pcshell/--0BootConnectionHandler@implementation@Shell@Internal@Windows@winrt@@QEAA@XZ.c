/*
 * XREFs of ??0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802BBE34
 * Callers:
 *     ??$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802BBDC0 (--$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x180358A84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ??$make_shared@UBootConnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectedState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180669B08 (--$make_shared@UBootConnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-AV-$.c)
 *     ??$make_shared@UBootConnectingState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectingState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180669B60 (--$make_shared@UBootConnectingState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-AV-.c)
 *     ??$make_shared@UBootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180669BB8 (--$make_shared@UBootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 *     ??$make_shared@UBootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180669C10 (--$make_shared@UBootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@$$V@s.c)
 *     ??$make_shared@UBootRecoveringState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootRecoveringState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180669C68 (--$make_shared@UBootRecoveringState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-AV-.c)
 *     ??$make_shared@UBootUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180669CC0 (--$make_shared@UBootUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@Y.c)
 *     ??0ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180669D18 (--0ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UConnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@URecoveringState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@@8@@Z @ 0x1806721BC (-SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV-$share.c)
 */

// Hidden C++ exception states: #wind=24
winrt::Windows::Internal::Shell::implementation::BootConnectionHandler *__fastcall winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::BootConnectionHandler(
        winrt::Windows::Internal::Shell::implementation::BootConnectionHandler *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  std::_Ref_count_base **v7; // rax
  std::_Ref_count_base *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // [rsp+48h] [rbp-69h] BYREF
  std::_Ref_count_base *v16; // [rsp+50h] [rbp-61h]
  __int64 v17; // [rsp+58h] [rbp-59h] BYREF
  std::_Ref_count_base *v18; // [rsp+60h] [rbp-51h]
  __int64 v19; // [rsp+68h] [rbp-49h] BYREF
  std::_Ref_count_base *v20; // [rsp+70h] [rbp-41h]
  __int64 v21; // [rsp+78h] [rbp-39h] BYREF
  std::_Ref_count_base *v22; // [rsp+80h] [rbp-31h]
  __int64 v23; // [rsp+88h] [rbp-29h] BYREF
  std::_Ref_count_base *v24; // [rsp+90h] [rbp-21h]
  std::_Ref_count_base *v25[2]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v26[8]; // [rsp+A8h] [rbp-9h] BYREF
  std::_Ref_count_base *v27; // [rsp+B0h] [rbp-1h]
  _BYTE v28[8]; // [rsp+B8h] [rbp+7h] BYREF
  std::_Ref_count_base *v29; // [rsp+C0h] [rbp+Fh]
  _BYTE v30[8]; // [rsp+C8h] [rbp+17h] BYREF
  std::_Ref_count_base *v31; // [rsp+D0h] [rbp+1Fh]
  _BYTE v32[8]; // [rsp+D8h] [rbp+27h] BYREF
  std::_Ref_count_base *v33; // [rsp+E0h] [rbp+2Fh]
  _BYTE v34[8]; // [rsp+E8h] [rbp+37h] BYREF
  std::_Ref_count_base *v35; // [rsp+F0h] [rbp+3Fh]
  _BYTE v36[8]; // [rsp+F8h] [rbp+47h] BYREF
  std::_Ref_count_base *v37; // [rsp+100h] [rbp+4Fh]

  winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ConnectionHandler(this);
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::`vftable';
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl) )
  {
    v2 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootPhysicalDeviceAccessState,>(v34);
    v23 = *(_QWORD *)v2;
    v24 = *(std::_Ref_count_base **)(v2 + 8);
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
    v3 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootRecoveringState,>(v32);
    v21 = *(_QWORD *)v3;
    v22 = *(std::_Ref_count_base **)(v3 + 8);
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    v4 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootDisconnectedState,>(v30);
    v19 = *(_QWORD *)v4;
    v20 = *(std::_Ref_count_base **)(v4 + 8);
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    v5 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectedState,>(v28);
    v17 = *(_QWORD *)v5;
    v18 = *(std::_Ref_count_base **)(v5 + 8);
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    v6 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootUserInputNeededState,>(v26);
    v15 = *(_QWORD *)v6;
    v16 = *(std::_Ref_count_base **)(v6 + 8);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    v7 = (std::_Ref_count_base **)std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectingState,>(v36);
    v25[0] = *v7;
    v25[1] = v7[1];
    *v7 = 0LL;
    v7[1] = 0LL;
    winrt::Windows::Internal::Shell::implementation::ConnectionHandler::SetStateHandler(
      (_DWORD)this,
      (unsigned int)v25,
      (unsigned int)&v15,
      (unsigned int)&v17,
      (__int64)&v19,
      (__int64)&v21,
      (__int64)&v23);
    if ( v25[1] )
      std::_Ref_count_base::_Decref(v25[1]);
    if ( v37 )
      std::_Ref_count_base::_Decref(v37);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v33 )
      std::_Ref_count_base::_Decref(v33);
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
    v8 = v35;
  }
  else
  {
    *(_OWORD *)v25 = 0LL;
    v9 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootRecoveringState,>(v26);
    v15 = *(_QWORD *)v9;
    v16 = *(std::_Ref_count_base **)(v9 + 8);
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    v10 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootDisconnectedState,>(v28);
    v17 = *(_QWORD *)v10;
    v18 = *(std::_Ref_count_base **)(v10 + 8);
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    v11 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectedState,>(v30);
    v19 = *(_QWORD *)v11;
    v20 = *(std::_Ref_count_base **)(v11 + 8);
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    v12 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootUserInputNeededState,>(v32);
    v21 = *(_QWORD *)v12;
    v22 = *(std::_Ref_count_base **)(v12 + 8);
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    v13 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectingState,>(v34);
    v23 = *(_QWORD *)v13;
    v24 = *(std::_Ref_count_base **)(v13 + 8);
    *(_QWORD *)v13 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
    winrt::Windows::Internal::Shell::implementation::ConnectionHandler::SetStateHandler(
      (_DWORD)this,
      (unsigned int)&v23,
      (unsigned int)&v21,
      (unsigned int)&v19,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)v25);
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
    if ( v35 )
      std::_Ref_count_base::_Decref(v35);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v33 )
      std::_Ref_count_base::_Decref(v33);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    v8 = v25[1];
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return this;
}
