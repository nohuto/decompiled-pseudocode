/*
 * XREFs of KiIsThreadStateControlledByProcessor @ 0x140237AEC
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x14022B800 (KiAttemptToStealStandbyThread.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140237654 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiStartRescheduleContext @ 0x14032F5E0 (KiStartRescheduleContext.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsThreadStateControlledByProcessor(__int64 a1, __int64 a2)
{
  int v2; // r8d
  char result; // al
  char v4; // cl

  v2 = *(unsigned __int8 *)(a1 + 388);
  if ( *(_DWORD *)(a1 + 536) != *(_DWORD *)(a2 + 36) )
    return 0;
  result = 1;
  if ( v2 != 2 && v2 != 3 )
  {
    if ( v2 != 5 )
      return 0;
    v4 = *(_BYTE *)(a1 + 112) & 7;
    if ( v4 == 1 || (unsigned __int8)(v4 - 3) <= 3u )
      return 0;
  }
  return result;
}
