/*
 * XREFs of PpmWmiIdleAccountingWork @ 0x1407D9F90
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmWmiIdleAccountingWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x656C6469u);
  return PopExecuteOnTargetProcessors(
           (__int64)&stru_140FC01F0.WaitRegister,
           (__int64)PpmWmiFireIdleAccountingEvent,
           0LL,
           0LL);
}
