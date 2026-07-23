/*
 * XREFs of PopDirectedDripsEngage @ 0x1404C1A5C
 * Callers:
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1404C1AC4 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CF180 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407CF2DC (PopDirectedDripsQueryEnabledMitigations.c)
 */

__int64 __fastcall PopDirectedDripsEngage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr(&PopDirectedDripsState, 0xA00u);
    LOBYTE(a3) = 1;
    return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140F12E38, a3);
  }
  else
  {
    PopFxClearDirectedDripsCandidateDeviceList();
    *(_DWORD *)&stru_140F12EA0.WaitBlockFill11[80] = 0;
    _InterlockedAnd(&PopDirectedDripsState, 0xFFFFC1C7);
    result = (unsigned int)dword_140F12E30;
    if ( (dword_140F12E30 & 4) != 0 )
      return PopDirectedDripsQueryEnabledMitigations(&PopDirectedDripsState);
  }
  return result;
}
