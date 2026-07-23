/*
 * XREFs of LdrpCondenseGraph @ 0x180118F64
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpCondenseGraphRecurse @ 0x180118FA0 (LdrpCondenseGraphRecurse.c)
 */

__int64 __fastcall LdrpCondenseGraph(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  result = *(unsigned int *)(a1 + 56);
  if ( (int)result < 6 )
  {
    v2 = 0;
    v3 = 1LL;
    return LdrpCondenseGraphRecurse(a1, &v2, &v3);
  }
  return result;
}
