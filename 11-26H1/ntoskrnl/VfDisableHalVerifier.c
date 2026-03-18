/*
 * XREFs of VfDisableHalVerifier @ 0x1405332A4
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x140C237D0 (VfAllocateCrashDumpRegisters.c)
 *     VfAllocateCrashDumpRegistersEx @ 0x140C23870 (VfAllocateCrashDumpRegistersEx.c)
 *     VfNotifyOfHibernate @ 0x140C25624 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

void VfDisableHalVerifier()
{
  ViVerifyDma = 0;
}
