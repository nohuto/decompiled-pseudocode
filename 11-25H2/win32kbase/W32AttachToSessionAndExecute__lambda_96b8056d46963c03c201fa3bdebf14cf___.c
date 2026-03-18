/*
 * XREFs of W32AttachToSessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___ @ 0x1401B7418
 * Callers:
 *     _lambda_d0156b0e98582612734d130e43c924a3_::operator() @ 0x1401B76A8 (_lambda_d0156b0e98582612734d130e43c924a3_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___ @ 0x1401B726C (W32AttachToProcessAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf_(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v5; // rdi

  v3 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v5 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v3 = W32AttachToProcessAndExecute__lambda_96b8056d46963c03c201fa3bdebf14cf_(ReferencedSessionProcessWithTag, a2);
    ObfDereferenceObjectWithTag(v5, 0x47727355u);
  }
  return v3;
}
