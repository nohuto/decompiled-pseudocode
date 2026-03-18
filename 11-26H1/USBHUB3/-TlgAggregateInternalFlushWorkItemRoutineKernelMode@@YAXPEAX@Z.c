/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140094AB0
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x140045F40 (EnableFlushTimer.c)
 *     LookUpTableFlushComplete @ 0x140094610 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x140094A08 (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(const __m128i *a1)
{
  if ( a1[23].m128i_i8[4] )
  {
    a1[23].m128i_i8[4] = 0;
    LookUpTableFlushComplete(a1);
  }
  else
  {
    LookUpTableFlushPartial((__int64)a1);
  }
  if ( a1[16].m128i_i32[0] )
    EnableFlushTimer(a1[22].m128i_i64[1], a1[23].m128i_u32[0]);
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a1[16].m128i_i64[1] + 56), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(a1[16].m128i_i64[1] + 32), 0, 0);
}
