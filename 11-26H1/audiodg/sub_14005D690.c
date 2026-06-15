/*
 * XREFs of sub_14005D690 @ 0x14005D690
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005D690(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 56), 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 56), 1);
  v2 = sub_1400B6010(*(_QWORD *)(a1 + 40));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 130, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump_dsp.cpp", v2);
  return v3;
}
