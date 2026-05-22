/*
 * XREFs of ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800969A4
 * Callers:
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x180072878 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800D07D4 (--$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MPCHeadMovementDetector::EnsureFrameOfReference(MPCHeadMovementDetector *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, char *); // r14
  __int64 *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r14
  __int64 (__fastcall *v10)(__int64, char *); // r15
  __int64 v11; // rcx
  int v12; // eax
  const char *v13; // r9
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbp
  __int64 v16; // rcx
  int v17; // eax
  const char *v18; // r9
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 88);
  if ( !*((_QWORD *)this + 11) )
  {
    wil::GetActivationFactory<Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal>(&v21);
    v3 = v21;
    v4 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 64LL);
    v5 = (__int64 *)((char *)this + 72);
    v6 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = v4(v3, (char *)this + 72);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v7,
        v19);
    if ( !*v5 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)0x8000FFFFLL);
    v8 = *v5;
    if ( !*v5 )
    {
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v21);
      return 0;
    }
    v10 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 88LL);
    v11 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = v10(v8, (char *)this + 80);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v12,
        v19);
    v14 = *((_QWORD *)this + 10);
    if ( !v14 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xBE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v13);
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 96LL);
    v16 = *v2;
    *v2 = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = v15(v14, v2);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v17,
        v19);
    if ( !*v2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xC2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v18);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v21);
  }
  return 1;
}
