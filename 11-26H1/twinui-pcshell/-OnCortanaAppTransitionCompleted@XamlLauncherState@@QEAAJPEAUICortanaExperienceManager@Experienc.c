/*
 * XREFs of ?OnCortanaAppTransitionCompleted@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180461B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_ @ 0x1802DCF4C (_lambda_f2aaff89423395ef869fab9f2a1bbdde_--_lambda_f2aaff89423395ef869fab9f2a1bbdde_.c)
 *     ??$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18045FA04 (--$OnCortanaAppTransitionCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaAppTransitionCompleted(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  __int64 v3; // r8
  __m128i v4; // xmm6
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE v8[16]; // [rsp+20h] [rbp-48h] BYREF
  __m128i v9; // [rsp+30h] [rbp-38h] BYREF
  char v10; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v12; // [rsp+70h] [rbp+8h] BYREF

  v12 = *((_DWORD *)this + 16);
  v4 = *(__m128i *)lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_(
                     (__int64)v8,
                     &v12,
                     (__int64)this);
  v9 = v4;
  v10 = 1;
  if ( *(_DWORD *)(v3 + 64) == 13
    && (*(_DWORD *)(v3 + 64) = 14,
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 80) + 64LL))(*(_QWORD *)(v3 + 80), 7LL),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB6,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = 0;
  }
  v10 = 0;
  StartWindowTelemetry::OnCortanaAppTransitionCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v9.m128i_i32,
    (int *)(_mm_srli_si128(v4, 8).m128i_u64[0] + 64));
  return v6;
}
