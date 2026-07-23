/*
 * XREFs of ExMapHandleToPointer @ 0x14092A190
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     ObQueryObjectAuditingByHandle @ 0x1409BA6D0 (ObQueryObjectAuditingByHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1409BB2E4 (ObCaptureObjectStateForDuplication.c)
 *     PspThreadDelete @ 0x140AA3CB0 (PspThreadDelete.c)
 *     RtlpInsertStringAtom @ 0x140AACBA8 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x140AC2020 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(__int64 a1, __int64 a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry(a1, a2);
  if ( !v3 )
    return 0LL;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v3);
      v4 = *v3;
      if ( (*v3 & 1) != 0 )
        break;
      if ( !v4 )
        return 0LL;
      ExpBlockOnLockedHandleEntry(a1, v3, v4);
    }
  }
  while ( v4 != _InterlockedCompareExchange64(v3, v4 - 1, v4) );
  return v3;
}
