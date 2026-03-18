/*
 * XREFs of VfDisableHalVerifier @ 0x140604C58
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x140B75890 (VfAllocateCrashDumpRegisters.c)
 *     VfAllocateCrashDumpRegistersEx @ 0x140B75930 (VfAllocateCrashDumpRegistersEx.c)
 *     VfNotifyOfHibernate @ 0x140B77648 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

void VfDisableHalVerifier()
{
  ViVerifyDma = 0;
}
