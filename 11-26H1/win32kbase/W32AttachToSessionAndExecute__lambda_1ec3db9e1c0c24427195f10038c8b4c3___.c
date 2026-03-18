/*
 * XREFs of W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401DA4C8
 * Callers:
 *     _lambda_df2f3eaa3e482cf290a08bb1842ad908_::operator() @ 0x1401DA890 (_lambda_df2f3eaa3e482cf290a08bb1842ad908_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401DA228 (W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v5; // rdi

  v3 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v5 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v3 = W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(ReferencedSessionProcessWithTag, a2);
    ObfDereferenceObjectWithTag(v5, 0x47727355u);
  }
  return v3;
}
