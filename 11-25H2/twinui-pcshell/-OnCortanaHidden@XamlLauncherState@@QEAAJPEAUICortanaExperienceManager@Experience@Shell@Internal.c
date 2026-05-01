/*
 * XREFs of ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801F09E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801F0A54 (--$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801F0AD0 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v3; // rbx
  int v5; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+30h] [rbp-18h]

  v3 = (_DWORD *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v6 = this;
  v7 = 1;
  *((_QWORD *)this + 134) = 0LL;
  XamlLauncherState::PostCortanaOrSearchVisibility(this, 0, 0LL);
  switch ( *v3 )
  {
    case 8:
      goto LABEL_4;
    case 9:
      *v3 = 11;
      break;
    case 0xA:
LABEL_4:
      *v3 = 0;
      break;
  }
  v7 = 0;
  StartWindowTelemetry::OnCortanaHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v5,
    v3);
  return 0LL;
}
