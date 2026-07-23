/*
 * XREFs of KsepStringDuplicateUnicode @ 0x140A38BC4
 * Callers:
 *     KseDriverLoadImage @ 0x140A38A18 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A39400 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x14061CB00 (RtlAssert.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall KsepStringDuplicateUnicode(__int64 a1, const void **a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  _WORD *Paged; // rax
  _WORD *v7; // rbp
  __int64 result; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount, 1u)
        + 1) & 0x3F;
    *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v9) = -1073740768;
    *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v9) = 197255;
    if ( ((__int64)stru_140E66D40.StackBase & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x287u, 0LL);
  }
  *(_OWORD *)a1 = 0LL;
  v4 = *(unsigned __int16 *)a2;
  v5 = v4 + 2;
  Paged = (_WORD *)KsepPoolAllocatePaged();
  v7 = Paged;
  if ( !Paged )
    return 3221225495LL;
  memmove(Paged, a2[1], (unsigned int)v4);
  v7[(v5 >> 1) - 1] = 0;
  *(_WORD *)a1 = v4;
  result = 0LL;
  *(_QWORD *)(a1 + 8) = v7;
  *(_WORD *)(a1 + 2) = v5;
  return result;
}
