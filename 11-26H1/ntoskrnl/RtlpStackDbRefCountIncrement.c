/*
 * XREFs of RtlpStackDbRefCountIncrement @ 0x14043C2B8
 * Callers:
 *     RtlStackDbStackAdd @ 0x14043BB88 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x14043C888 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpStackDbRefCountIncrement(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int64 v2; // r8

  v1 = *a1;
  while ( 1 )
  {
    v2 = (v1 + 1) ^ (v1 ^ (v1 + 1)) & 0xFF00000000000000uLL;
    if ( ((v1 + 1) & 0xFFFFFFFFFFFFFFuLL) < (v1 & 0xFFFFFFFFFFFFFFuLL) )
      break;
    v1 = _InterlockedCompareExchange64(a1, v2, v1);
    if ( v1 == ((v2 - 1) ^ (v2 ^ (v2 - 1)) & 0xFF00000000000000uLL) )
      return 1LL;
  }
  return 0LL;
}
