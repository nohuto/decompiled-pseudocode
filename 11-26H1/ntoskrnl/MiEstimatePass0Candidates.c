/*
 * XREFs of MiEstimatePass0Candidates @ 0x1404CB7F0
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402A59C4 (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiEstimatePass0Candidates(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rcx
  __int64 v3; // rdx

  result = 0LL;
  v2 = (_QWORD *)(a1 + 200);
  v3 = 2LL;
  do
  {
    result += *v2++;
    --v3;
  }
  while ( v3 );
  return result;
}
