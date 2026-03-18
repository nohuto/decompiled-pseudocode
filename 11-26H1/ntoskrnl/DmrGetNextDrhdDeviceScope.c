/*
 * XREFs of DmrGetNextDrhdDeviceScope @ 0x1405AFD8C
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x1405AEAE8 (HalpIvtProcessDrhdEntry.c)
 *     DmrFindDrhdForDeviceScope @ 0x1405AFCEC (DmrFindDrhdForDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x1405B0120 (DmrValidateDeviceScope.c)
 * Callees:
 *     DmrGetNextDeviceScope @ 0x1405B0084 (DmrGetNextDeviceScope.c)
 */

__int64 __fastcall DmrGetNextDrhdDeviceScope(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v3 > a1 )
    return DmrGetNextDeviceScope(a1 + 16, v3, a2);
  else
    return 0LL;
}
