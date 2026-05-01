/*
 * XREFs of ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180011DC4
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180013350 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x180247D00 (-OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z.c)
 *     _lambda_219695f63e651180cfc7ae358f81f100_::operator() @ 0x18037F880 (_lambda_219695f63e651180cfc7ae358f81f100_--operator().c)
 * Callees:
 *     ?StartActivity@Cloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180011F08 (-StartActivity@Cloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001ACAC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001AD68 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001AE78 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18001AF7C (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F990 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180238D2C (--1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::Cloak(HSTRING *this)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rbx
  unsigned int v4; // ebx
  int v5; // edi
  int v7[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v8[272]; // [rsp+28h] [rbp-160h] BYREF
  _BYTE v9[8]; // [rsp+138h] [rbp-50h] BYREF
  _BYTE v10[48]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v3 = WindowsGetStringRawBuffer(this[1], 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v7,
    "Cloak");
  *(_QWORD *)v7 = &SingleViewExperienceTelemetry::Cloak::`vftable';
  SingleViewExperienceTelemetry::Cloak::StartActivity((SingleViewExperienceTelemetry::Cloak *)v7, v3, StringRawBuffer);
  if ( *((_DWORD *)this + 10) == 1 )
  {
    v5 = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)this[10] + 48LL))(this[10]);
    v4 = 0;
    if ( v5 < 0 )
    {
      *(_QWORD *)v7 = &SingleViewExperienceTelemetry::Cloak::`vftable';
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
      wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v10);
      wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v9);
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v8);
      return (unsigned int)v5;
    }
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43D,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x80070057LL,
      v7[0]);
  }
  SingleViewExperienceTelemetry::Cloak::~Cloak((SingleViewExperienceTelemetry::Cloak *)v7);
  return v4;
}
