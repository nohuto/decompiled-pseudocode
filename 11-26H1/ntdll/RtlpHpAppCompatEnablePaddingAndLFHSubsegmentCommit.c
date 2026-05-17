/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x180144F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x180063C60 (RtlGetSuiteMask.c)
 */

__int64 RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  __int64 result; // rax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 2u;
  return result;
}
