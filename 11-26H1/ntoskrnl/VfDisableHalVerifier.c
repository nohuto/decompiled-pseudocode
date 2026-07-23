/*
 * XREFs of VfDisableHalVerifier @ 0x140535724
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x140C297E0 (VfAllocateCrashDumpRegisters.c)
 *     VfAllocateCrashDumpRegistersEx @ 0x140C29880 (VfAllocateCrashDumpRegistersEx.c)
 *     VfNotifyOfHibernate @ 0x140C2B634 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

void VfDisableHalVerifier()
{
  ViVerifyDma = 0;
}
