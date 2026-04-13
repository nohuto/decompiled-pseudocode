/*
 * XREFs of ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800785F0
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086034 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAW4TargetedContentKnownTrigger@2345@AEAPEAUHSTRING__@@AEAPEAU7@AEAPEAU7@AEAPEAU7@AEAPEAU7@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@AEAW4TargetedContentKnownTrigger@4567@AEAPEAUHSTRING__@@2222@Z @ 0x180078108 (--$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@V123.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(unsigned int a1, ...)
{
  HSTRING v1; // rdx
  HSTRING v2; // rsi
  HSTRING v3; // r14
  _QWORD *v4; // rdi
  int v5; // eax
  _QWORD *v6; // rax
  int v8; // [rsp+20h] [rbp-20h]
  int v9; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF
  HSTRING v12; // [rsp+78h] [rbp+38h] BYREF
  va_list va; // [rsp+78h] [rbp+38h]
  HSTRING v14; // [rsp+80h] [rbp+40h] BYREF
  va_list va1; // [rsp+80h] [rbp+40h]
  HSTRING v16; // [rsp+88h] [rbp+48h] BYREF
  va_list va2; // [rsp+88h] [rbp+48h]
  __int64 v18; // [rsp+90h] [rbp+50h] BYREF
  va_list va3; // [rsp+90h] [rbp+50h]
  __int64 v20; // [rsp+98h] [rbp+58h] BYREF
  va_list va4; // [rsp+98h] [rbp+58h]
  _QWORD *v22; // [rsp+A0h] [rbp+60h] BYREF
  va_list va5; // [rsp+A0h] [rbp+60h]
  va_list va6; // [rsp+A8h] [rbp+68h] BYREF

  va_start(va6, a1);
  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v12 = va_arg(va1, HSTRING);
  v1 = v12;
  va_copy(va2, va1);
  v14 = va_arg(va2, HSTRING);
  va_copy(va3, va2);
  v16 = va_arg(va3, HSTRING);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v22 = va_arg(va6, _QWORD *);
  v11 = a1;
  v2 = v16;
  v3 = v14;
  v4 = v22;
  *v22 = 0LL;
  if ( WindowsIsStringEmpty(v1) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      312LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL,
      v8);
  if ( WindowsIsStringEmpty(v3) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      313LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL,
      v8);
  if ( WindowsIsStringEmpty(v2) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      314LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL,
      v8);
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)va5);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,enum Windows::Services::TargetedContent::Internal::TargetedContentKnownTrigger &,HSTRING__ * &,HSTRING__ * &,HSTRING__ * &,HSTRING__ * &,HSTRING__ * &>(
         (__int64 *)va5,
         &v11,
         (HSTRING *)va,
         (__int64 *)va1,
         (HSTRING *)va2,
         (__int64 *)va3,
         (__int64 *)va4);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      317LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v5,
      v9);
  v6 = v22;
  v22 = 0LL;
  *v4 = v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)va5);
  return 0LL;
}
