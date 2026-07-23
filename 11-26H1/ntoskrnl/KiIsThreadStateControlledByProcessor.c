/*
 * XREFs of KiIsThreadStateControlledByProcessor @ 0x14023944C
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
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
