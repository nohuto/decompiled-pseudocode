/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x140CD1C54
 * Callers:
 *     KiIntSteerInit @ 0x140CD1CE0 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     HviIsXboxNanovisorPresent @ 0x1406E0C74 (HviIsXboxNanovisorPresent.c)
 *     KiIntSteerInitCheckCycleCounters @ 0x140CD1E54 (KiIntSteerInitCheckCycleCounters.c)
 */

char KiIntSteerDetermineSteeringEnabled()
{
  if ( (KiInterruptSteeringFlags & 1) == 0 )
  {
    if ( (KiInterruptSteeringFlags & 2) != 0 )
    {
      KiIntSteerInitCheckCycleCounters();
      return 1;
    }
    if ( (KiActiveGroups != 1 || KeQueryActiveProcessorCountEx(0) >= 2)
      && !(_BYTE)dword_140FBF22C
      && !HviIsXboxNanovisorPresent() )
    {
      if ( HvlHypervisorConnected )
      {
        if ( (HvlpFlags & 2) == 0 || (HvlpRootFlags & 0x400) != 0 )
          return 0;
      }
      else if ( HviIsAnyHypervisorPresent() )
      {
        return 0;
      }
      KiIntSteerInitCheckCycleCounters();
      if ( KiIntSteerSlowestCyclesPerSec )
        return 1;
    }
  }
  return 0;
}
