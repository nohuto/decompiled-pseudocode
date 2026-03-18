/*
 * XREFs of HalpResumePoint @ 0x1407230F0
 * Callers:
 *     HalpSecureResumePoint @ 0x140723000 (HalpSecureResumePoint.c)
 * Callees:
 *     KasanHibernationResume @ 0x1405DD6F0 (KasanHibernationResume.c)
 */

__int64 __fastcall HalpResumePoint(ULONG_PTR a1)
{
  _UNKNOWN *retaddr; // [rsp+30h] [rbp+0h] BYREF

  KasanHibernationResume(a1, &retaddr);
  return 1LL;
}
