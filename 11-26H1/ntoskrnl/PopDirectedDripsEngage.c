/*
 * XREFs of PopDirectedDripsEngage @ 0x1404C7D1C
 * Callers:
 *     PopDirectedDripsNotify @ 0x140B08694 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1404C7D84 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CC0E0 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407CC23C (PopDirectedDripsQueryEnabledMitigations.c)
 */

__int64 __fastcall PopDirectedDripsEngage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr(dword_140F12AC0, 0xA00u);
    LOBYTE(a3) = 1;
    return PopDirectedDripsNotifyAppsAndServices(dword_140F12AC0, &unk_140F12AF8, a3);
  }
  else
  {
    PopFxClearDirectedDripsCandidateDeviceList();
    dword_140F12CF0 = 0;
    _InterlockedAnd(dword_140F12AC0, 0xFFFFC1C7);
    result = dword_140F12AF0;
    if ( (dword_140F12AF0 & 4) != 0 )
      return PopDirectedDripsQueryEnabledMitigations(dword_140F12AC0);
  }
  return result;
}
