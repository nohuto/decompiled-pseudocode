/*
 * XREFs of ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180097AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180097994 (--$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ??$LauncherClosed@AEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@CommonStartTelemetry@@SAXAEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180097BB0 (--$LauncherClosed@AEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@CommonStartTelemetry@@SAXAEAW4IMMERSIVEL.c)
 *     ?CompleteAutoInvokeTestIfNecessary@XamlLauncherState@@AEAAXXZ @ 0x180097C24 (-CompleteAutoInvokeTestIfNecessary@XamlLauncherState@@AEAAXXZ.c)
 *     _lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_ @ 0x1802DCF4C (_lambda_f2aaff89423395ef869fab9f2a1bbdde_--_lambda_f2aaff89423395ef869fab9f2a1bbdde_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  __m128i v4; // xmm6
  int v5; // eax
  _BYTE v7[16]; // [rsp+20h] [rbp-48h] BYREF
  __m128i v8; // [rsp+30h] [rbp-38h] BYREF
  char v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = *((_DWORD *)this + 16);
  v4 = *(__m128i *)lambda_f2aaff89423395ef869fab9f2a1bbdde_::_lambda_f2aaff89423395ef869fab9f2a1bbdde_(v7, &v10, this);
  v8 = v4;
  v9 = 1;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 32LL))(*((_QWORD *)this + 16));
  v5 = *((_DWORD *)this + 16);
  switch ( v5 )
  {
    case 17:
      goto LABEL_7;
    case 9:
      *((_DWORD *)this + 16) = 10;
      break;
    case 11:
LABEL_7:
      *((_DWORD *)this + 16) = 0;
      break;
    case 14:
      *((_DWORD *)this + 16) = 7;
      break;
  }
  XamlLauncherState::CompleteAutoInvokeTestIfNecessary(this);
  CommonStartTelemetry::LauncherClosed<enum IMMERSIVELAUNCHERDISMISSMETHOD &>((char *)this + 304);
  v9 = 0;
  StartWindowTelemetry::OnStartHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v8.m128i_i32,
    (int *)(_mm_srli_si128(v4, 8).m128i_u64[0] + 64));
  return 0LL;
}
