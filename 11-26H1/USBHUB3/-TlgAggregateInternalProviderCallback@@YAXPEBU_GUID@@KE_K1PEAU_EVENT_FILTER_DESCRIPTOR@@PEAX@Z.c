/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140094B40
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x140094610 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  const __m128i *i; // rbx

  if ( a2 == 2 && a4 == 32 && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_140070CF8, 0LL) )
  {
    for ( i = (const __m128i *)qword_140070D00; i; i = (const __m128i *)i[22].m128i_i64[0] )
      LookUpTableFlushComplete(i);
    ExReleasePushLockExclusiveEx(&unk_140070CF8, 0LL);
  }
}
