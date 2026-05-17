/*
 * XREFs of LdrpCondenseGraph @ 0x1801191B4
 * Callers:
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpPrepareModuleForExecution @ 0x18011ADA0 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpCondenseGraphRecurse @ 0x1801191F0 (LdrpCondenseGraphRecurse.c)
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
