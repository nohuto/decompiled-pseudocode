/*
 * XREFs of RtlpConvertFunctionEntry @ 0x1800E17E4
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800E1644 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpConvertFunctionEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( !a1 )
    return 0LL;
  v2 = *(unsigned int *)(a1 + 8);
  if ( (v2 & 1) != 0 )
    return v2 + a2 - 1;
  return a1;
}
