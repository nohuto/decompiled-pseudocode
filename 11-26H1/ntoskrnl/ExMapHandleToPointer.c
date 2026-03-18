/*
 * XREFs of ExMapHandleToPointer @ 0x1408FA200
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     ObCaptureObjectStateForDuplication @ 0x140971174 (ObCaptureObjectStateForDuplication.c)
 *     ObQueryObjectAuditingByHandle @ 0x1409728D0 (ObQueryObjectAuditingByHandle.c)
 *     PspThreadDelete @ 0x140AA21E0 (PspThreadDelete.c)
 *     RtlpInsertStringAtom @ 0x140AAEF58 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x140ABFF80 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
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
