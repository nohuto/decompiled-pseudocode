/*
 * XREFs of AMLISetNSObjectContext @ 0x140053F34
 * Callers:
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLISetNSObjectContext(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *(_QWORD *)(*a1 + 104) = a2;
  return result;
}
