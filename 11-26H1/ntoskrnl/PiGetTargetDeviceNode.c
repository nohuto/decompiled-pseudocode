/*
 * XREFs of PiGetTargetDeviceNode @ 0x14091250C
 * Callers:
 *     PiProcessQueryRemoveNoFdo @ 0x1407B87D4 (PiProcessQueryRemoveNoFdo.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140912378 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiCheckRemovalPreconditions @ 0x140912850 (PiCheckRemovalPreconditions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiGetTargetDeviceNode(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 160);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  return result;
}
