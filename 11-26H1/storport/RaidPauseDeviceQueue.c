/*
 * XREFs of RaidPauseDeviceQueue @ 0x140029448
 * Callers:
 *     RaidStallDeviceQueue @ 0x140028300 (RaidStallDeviceQueue.c)
 *     RaidPauseUnitQueue @ 0x1400292F0 (RaidPauseUnitQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RaidPauseDeviceQueue(__int64 a1)
{
  signed __int32 v1; // edx
  signed __int64 v2; // rax
  signed __int32 v3; // edx
  signed __int64 v4; // rtt

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = v1 + 1;
  do
  {
    if ( (v2 & 3) != 0 )
      break;
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v2 | 2, v2);
  }
  while ( v4 != v2 );
  return v3 == 0;
}
