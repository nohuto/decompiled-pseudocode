/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140AAF2C0
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x140AAF28C (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140478530 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  do
  {
    v5 = qword_140F10820;
    if ( qword_140F10820 + 50000000 > v3 )
      break;
    PopBatteryQueueWork(0x20u);
    v2 = ExBlockOnAddressPushLock(&qword_140F10828, &qword_140F10820, &v5, 8LL, a1);
  }
  while ( v2 != 258 );
  return v2;
}
