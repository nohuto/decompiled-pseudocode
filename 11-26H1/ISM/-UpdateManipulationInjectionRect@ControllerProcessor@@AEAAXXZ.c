/*
 * XREFs of ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180180AC8
 * Callers:
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18018020C (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801803F4 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ @ 0x1801807E4 (-UpdateBoundsIfNeeded@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180180B1C (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1801153D4 (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 */

void __fastcall ControllerProcessor::UpdateManipulationInjectionRect(ControllerProcessor *this)
{
  bool v1; // al

  v1 = *((_DWORD *)this + 80) - *((_DWORD *)this + 78) >= 80 && *((_DWORD *)this + 81) - *((_DWORD *)this + 79) >= 80;
  *((_BYTE *)this + 1265) = v1;
  if ( v1 )
    ManipulationInjector::SetInjectionRect(
      (ControllerProcessor *)((char *)this + 448),
      (const struct tagRECT *)((char *)this + 312));
}
