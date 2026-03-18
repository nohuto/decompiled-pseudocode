/*
 * XREFs of W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x14016CF6C
 * Callers:
 *     _lambda_4c1584255ce3bbd473a704df5986d405_::operator() @ 0x1401B74EC (_lambda_4c1584255ce3bbd473a704df5986d405_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___ @ 0x1401B7118 (W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v3; // rdi

  v1 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v3 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v1 = W32AttachToProcessAndExecute__lambda_1ec3db9e1c0c24427195f10038c8b4c3_(ReferencedSessionProcessWithTag);
    ObfDereferenceObjectWithTag(v3, 0x47727355u);
  }
  return v1;
}
