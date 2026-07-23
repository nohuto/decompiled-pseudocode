/*
 * XREFs of PopFxDestroyDeviceCommon @ 0x1404E8FC0
 * Callers:
 *     PopFxDestroyDeviceDpm @ 0x1404E8E74 (PopFxDestroyDeviceDpm.c)
 *     PopFxAcpiRegisterDevice @ 0x140615144 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14061525C (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceCommon(PVOID *P, int a2)
{
  _m_prefetchw(P + 29);
  if ( _InterlockedAnd((volatile signed __int32 *)P + 58, ~a2) == a2 )
  {
    ExFreePoolWithTag(P[28], 0x4D584650u);
    ExFreePoolWithTag(P, 0x4D584650u);
  }
}
