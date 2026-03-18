/*
 * XREFs of ExpGetThreadResourceHint @ 0x14043B8E0
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402B4158 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402E1B68 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14043AF30 (ExAcquireSharedWaitForExclusive.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14043B3BC (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetThreadResourceHint(__int64 a1)
{
  if ( (a1 & 3) != 0 )
    return 0LL;
  else
    return *(unsigned __int8 *)(a1 + 1120);
}
