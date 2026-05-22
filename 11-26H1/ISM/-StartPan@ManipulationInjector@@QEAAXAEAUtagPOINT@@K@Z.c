/*
 * XREFs of ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011576C
 * Callers:
 *     ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD918 (-DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18017FF1C (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x1800B1F9C (-IsInContact@ManipulationInjector@@QEAA_NXZ.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x180115314 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1801154D4 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 */

void __fastcall ManipulationInjector::StartPan(ManipulationInjector *this, struct tagPOINT *a2, int a3)
{
  POINT *v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r8d

  if ( *((_DWORD *)this + 22) == 64 )
  {
    if ( *((_DWORD *)this + 12) == 1 && ManipulationInjector::IsInContactForDeviceId(this, a3) )
    {
      if ( *((_BYTE *)this + 13) )
        DbgPrint("Transition from DRAG to PAN\n");
      *((_DWORD *)this + 22) = 1;
    }
  }
  else if ( !ManipulationInjector::IsInContact(this) )
  {
    ManipulationInjector::StartManipulation(v5, 1, *v4, v6);
  }
}
