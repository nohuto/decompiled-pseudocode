/*
 * XREFs of ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18001AB10
 * Callers:
 *     ?Uncloak@CStartExperienceManager@@UEAAJXZ @ 0x1802C3150 (-Uncloak@CStartExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1803B63A0 (-Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001ACAC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001AD68 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18001AD9C (-StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001AE78 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18001AF7C (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F990 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180223694 (--1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::Uncloak(HSTRING *this)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v8[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v9[272]; // [rsp+28h] [rbp-160h] BYREF
  _BYTE v10[8]; // [rsp+138h] [rbp-50h] BYREF
  _BYTE v11[48]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v3 = WindowsGetStringRawBuffer(this[1], 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v8,
    "Uncloak");
  *(_QWORD *)v8 = &SingleViewExperienceTelemetry::Uncloak::`vftable';
  SingleViewExperienceTelemetry::Uncloak::StartActivity(
    (SingleViewExperienceTelemetry::Uncloak *)v8,
    v3,
    StringRawBuffer);
  if ( *((_DWORD *)this + 10) == 2 )
  {
    v4 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 32LL))(this[11], this);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x433,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4,
        v8[0]);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(HSTRING))(*(_QWORD *)this[10] + 40LL))(this[10]);
      if ( v6 >= 0 )
      {
        (*(void (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)this[11] + 40LL))(this[11], this);
        wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
        v5 = 0;
      }
      else
      {
        v5 = v6;
      }
    }
    *(_QWORD *)v8 = &SingleViewExperienceTelemetry::Uncloak::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v11);
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v10);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v9);
  }
  else
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x432,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x80070057LL,
      v8[0]);
    SingleViewExperienceTelemetry::Uncloak::~Uncloak((SingleViewExperienceTelemetry::Uncloak *)v8);
  }
  return v5;
}
