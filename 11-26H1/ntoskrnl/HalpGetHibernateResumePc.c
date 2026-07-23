/*
 * XREFs of HalpGetHibernateResumePc @ 0x1405A54D4
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpGetHibernateResumePc())()
{
  return HalpSecureResumePoint;
}
