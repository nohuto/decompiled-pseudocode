/*
 * XREFs of MiReleaseProcessorHugeMappingAtDpc @ 0x140705328
 * Callers:
 *     MiSoloZeroHugeRange @ 0x140705384 (MiSoloZeroHugeRange.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiWriteLargePte @ 0x1402A10E0 (MiWriteLargePte.c)
 */

unsigned __int64 __fastcall MiReleaseProcessorHugeMappingAtDpc(unsigned __int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *MmInternal; // rbx
  unsigned __int64 result; // rax

  v3 = a3;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  result = MiWriteLargePte(a1, a2, 0, 0);
  *MmInternal = 0LL;
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  __writecr8(v3);
  return result;
}
