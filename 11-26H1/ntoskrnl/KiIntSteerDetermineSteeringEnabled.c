/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x140CCBAF4
 * Callers:
 *     KiIntSteerInit @ 0x140CCBB80 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 *     HviIsXboxNanovisorPresent @ 0x1406DC9D4 (HviIsXboxNanovisorPresent.c)
 *     KiIntSteerInitCheckCycleCounters @ 0x140CCBCF4 (KiIntSteerInitCheckCycleCounters.c)
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
      && !(_BYTE)dword_140FBE22C
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
