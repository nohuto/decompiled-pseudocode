/*
 * XREFs of HalpSetPlatformFlags @ 0x140CB98BC
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140CB9944 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     strstr @ 0x140537FA0 (strstr.c)
 */

void __fastcall HalpSetPlatformFlags(__int64 a1, __int64 a2)
{
  const char *v2; // rcx

  if ( (!a2 || (v2 = *(const char **)(a2 + 216)) == 0LL || !strstr(v2, "FORCELEGACYPLATFORM"))
    && LOBYTE(HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink) >= 5u )
  {
    if ( (*(_DWORD *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[24] & 0x100000) != 0 )
      HalpPlatformFlags &= ~1u;
    if ( (HalpDeviceBlockUnblockPushLock.SavedApcStateFill[21] & 2) == 0 )
      HalpPlatformFlags &= ~2u;
    if ( (HalpDeviceBlockUnblockPushLock.SavedApcStateFill[21] & 0x20) != 0 )
      HalpPlatformFlags &= ~4u;
    off_140E00AC0[0] = (__int64 (__fastcall *)())HalpAcpiAoacCapable;
    if ( (*(_DWORD *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[24] & 0x200000) != 0 )
      HalpPlatformFlags |= 8u;
  }
}
