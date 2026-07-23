/*
 * XREFs of HalpResumePoint @ 0x140727CC0
 * Callers:
 *     HalpSecureResumePoint @ 0x140727BD0 (HalpSecureResumePoint.c)
 * Callees:
 *     KasanHibernationResume @ 0x1405E0060 (KasanHibernationResume.c)
 */

__int64 __fastcall HalpResumePoint(ULONG_PTR a1)
{
  _UNKNOWN *retaddr; // [rsp+30h] [rbp+0h] BYREF

  KasanHibernationResume(a1, &retaddr);
  return 1LL;
}
