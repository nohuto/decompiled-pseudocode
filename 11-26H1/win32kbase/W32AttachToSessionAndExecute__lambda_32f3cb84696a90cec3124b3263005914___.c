/*
 * XREFs of W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401DA538
 * Callers:
 *     _lambda_886f0718d54f63ba37976d1a3a98de38_::operator() @ 0x1401DA7AC (_lambda_886f0718d54f63ba37976d1a3a98de38_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401DA2E0 (W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_32f3cb84696a90cec3124b3263005914_(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v5; // rdi

  v3 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v5 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v3 = W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914_(ReferencedSessionProcessWithTag, a2);
    ObfDereferenceObjectWithTag(v5, 0x47727355u);
  }
  return v3;
}
