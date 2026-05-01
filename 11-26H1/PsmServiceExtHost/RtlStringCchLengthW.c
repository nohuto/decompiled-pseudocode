/*
 * XREFs of RtlStringCchLengthW @ 0x18008D2FC
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpSafeAllocAndConcatW @ 0x18008F4D0 (SdbpSafeAllocAndConcatW.c)
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x180099B6C (AslStringReplace.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x18008D38C (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall RtlStringCchLengthW(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = RtlStringLengthWorkerW();
    if ( (int)result >= 0 )
      return result;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( a3 )
    *a3 = 0LL;
  return result;
}
