/*
 * XREFs of HalpGetHibernateResumePc @ 0x1405A2CC4
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BED8E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpGetHibernateResumePc())()
{
  return HalpSecureResumePoint;
}
