/*
 * XREFs of HalpInitializePmuArbiter @ 0x140CAE86C
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140BEA9A0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     <none>
 */

void **HalpInitializePmuArbiter()
{
  void **result; // rax

  result = &HalpPmuArbiter.SListFaultAddress;
  *(_QWORD *)&HalpPmuArbiter.Header.Lock = 0LL;
  HalpPmuArbiter.QuantumTarget = (unsigned __int64)&HalpPmuArbiter.SListFaultAddress;
  HalpPmuArbiter.SListFaultAddress = &HalpPmuArbiter.SListFaultAddress;
  HalpPmuArbiter.SystemCallNumber = 300000;
  LODWORD(HalpPmuArbiter.Header.WaitListHead.Blink) = 1;
  return result;
}
