/*
 * XREFs of ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800C52DC
 * Callers:
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008EBFC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800C2880 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800C5340 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D66EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSolidRectangleVisual::UpdateRect(const RECT *this, const struct tagRECT *a2)
{
  struct tagRECT *v3; // rsi
  void (__fastcall *v5)(const RECT *, __int64); // rax

  v3 = (struct tagRECT *)&this[15];
  if ( !EqualRect(a2, this + 15) )
  {
    v5 = *(void (__fastcall **)(const RECT *, __int64))(*(_QWORD *)&this->left + 24LL);
    *v3 = *a2;
    v5(this, 0x4000LL);
  }
}
