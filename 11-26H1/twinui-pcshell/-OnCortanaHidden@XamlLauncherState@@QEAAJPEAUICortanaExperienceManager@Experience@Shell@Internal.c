/*
 * XREFs of ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801E2620
 * Callers:
 *     <none>
 * Callees:
 *     ??$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801E26C0 (--$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801E273C (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     _lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_ @ 0x1802DCF4C (_lambda_f2aaff89423395ef869fab9f2a1bbdde_--_lambda_f2aaff89423395ef869fab9f2a1bbdde_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaHidden(
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
  *((_QWORD *)this + 134) = 0LL;
  XamlLauncherState::PostCortanaOrSearchVisibility(this, 0, 0LL);
  switch ( *((_DWORD *)this + 16) )
  {
    case 8:
      goto LABEL_4;
    case 9:
      *((_DWORD *)this + 16) = 11;
      break;
    case 0xA:
LABEL_4:
      *((_DWORD *)this + 16) = 0;
      break;
  }
  v8 = 0;
  StartWindowTelemetry::OnCortanaHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v7,
    _mm_srli_si128(v4, 8).m128i_u64[0] + 64);
  return 0LL;
}
