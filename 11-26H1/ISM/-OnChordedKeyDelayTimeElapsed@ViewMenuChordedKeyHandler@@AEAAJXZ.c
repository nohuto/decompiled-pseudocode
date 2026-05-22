/*
 * XREFs of ?OnChordedKeyDelayTimeElapsed@ViewMenuChordedKeyHandler@@AEAAJXZ @ 0x180182318
 * Callers:
 *     _lambda_f572978f71a60d63369f438c920ebe04_::_lambda_invoker_cdecl_ @ 0x180181790 (_lambda_f572978f71a60d63369f438c920ebe04_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress@@@details@wil@@QEAA_NXZ @ 0x1801816A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordP.c)
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x1801821F0 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?ReleaseBufferIfNeeded@ViewMenuChordedKeyHandler@@QEAAXXZ @ 0x1801824BC (-ReleaseBufferIfNeeded@ViewMenuChordedKeyHandler@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::OnChordedKeyDelayTimeElapsed(ViewMenuChordedKeyHandler *this)
{
  __int64 v2; // r8
  const char *v3; // r9
  __int64 (__fastcall *v4)(__int64, char *, __int64); // rax
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // r8
  __int64 (__fastcall *v10)(__int64, char *, __int64); // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
      v3);
  if ( *((_DWORD *)this + 4) == 4 )
  {
    v4 = (__int64 (__fastcall *)(__int64, char *, __int64))*((_QWORD *)this + 4);
    *((_BYTE *)this + 74) = 1;
    *((_DWORD *)this + 4) = 6;
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 5);
      if ( v5 )
      {
        LOBYTE(v2) = 1;
        v6 = v4(v5, (char *)this + 80, v2);
        if ( v6 < 0 )
        {
          v7 = 218LL;
LABEL_7:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v7,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v6);
          return (unsigned int)v6;
        }
      }
    }
  }
  else if ( *((_DWORD *)this + 4) == 5 )
  {
    *((_BYTE *)this + 74) = 0;
    *((_BYTE *)this + 72) = 1;
    ViewMenuChordedKeyHandler::ReleaseBufferIfNeeded(this);
    v10 = (__int64 (__fastcall *)(__int64, char *, __int64))*((_QWORD *)this + 4);
    *((_DWORD *)this + 4) = 6;
    if ( v10 )
    {
      v11 = *((_QWORD *)this + 5);
      if ( v11 )
      {
        LOBYTE(v9) = *((_BYTE *)this + 74);
        v6 = v10(v11, (char *)this + 80, v9);
        if ( v6 < 0 )
        {
          v7 = 239LL;
          goto LABEL_7;
        }
      }
    }
  }
  ControllerProcessorTelemetry::LogGamepadTaskSwitcherInvoked(*((_DWORD *)this + 4));
  result = 0LL;
  *((_BYTE *)this + 74) = 0;
  *((_BYTE *)this + 72) = 0;
  return result;
}
