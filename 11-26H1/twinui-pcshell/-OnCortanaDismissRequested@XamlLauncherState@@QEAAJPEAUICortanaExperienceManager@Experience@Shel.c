/*
 * XREFs of ?OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801E8CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801E8D7C (--$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 *     _lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_ @ 0x1802DCF4C (_lambda_f2aaff89423395ef869fab9f2a1bbdde_--_lambda_f2aaff89423395ef869fab9f2a1bbdde_.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x180461B20 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDismissRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  __m128i v4; // xmm6
  _BYTE v6[16]; // [rsp+20h] [rbp-48h] BYREF
  __m128i v7; // [rsp+30h] [rbp-38h] BYREF
  char v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+70h] [rbp+8h] BYREF

  v9 = *((_DWORD *)this + 16);
  v4 = *(__m128i *)lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_(v6, &v9, this);
  v7 = v4;
  v8 = 1;
  if ( *((_DWORD *)this + 16) == 5 )
  {
    XamlLauncherState::MinimizeCortanaToBoxMode((XamlLauncherState *)((char *)this + 24));
  }
  else if ( *((_DWORD *)this + 16) == 7 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12), 3LL);
    *((_DWORD *)this + 16) = 8;
  }
  v8 = 0;
  StartWindowTelemetry::OnCortanaDismissRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v7,
    _mm_srli_si128(v4, 8).m128i_u64[0] + 64);
  return 0LL;
}
