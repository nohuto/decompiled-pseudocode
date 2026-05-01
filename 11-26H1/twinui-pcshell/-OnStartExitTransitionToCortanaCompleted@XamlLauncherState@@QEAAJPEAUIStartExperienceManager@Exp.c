/*
 * XREFs of ?OnStartExitTransitionToCortanaCompleted@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180462710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_ @ 0x1802DCF4C (_lambda_f2aaff89423395ef869fab9f2a1bbdde_--_lambda_f2aaff89423395ef869fab9f2a1bbdde_.c)
 *     ??$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18045FC00 (--$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartExitTransitionToCortanaCompleted(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i v5; // xmm6
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  __m128i v10; // [rsp+30h] [rbp-38h] BYREF
  char v11; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = *((_DWORD *)this + 16);
  v5 = *(__m128i *)lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_(
                     (__int64)v9,
                     &v13,
                     (__int64)this);
  v10 = v5;
  v11 = 1;
  if ( *(_DWORD *)(v3 + 64) == 12
    && (*(_DWORD *)(v3 + 64) = 13,
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v3 + 88) + 56LL))(
               *(_QWORD *)(v3 + 88),
               *(_QWORD *)(v4 + 1088),
               2LL),
        v7 = v6,
        v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB85,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v7 = 0;
  }
  v11 = 0;
  StartWindowTelemetry::OnStartExitTransitionToCortanaCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v10.m128i_i32,
    (int *)(_mm_srli_si128(v5, 8).m128i_u64[0] + 64));
  return v7;
}
