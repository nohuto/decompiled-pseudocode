/*
 * XREFs of ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140094BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     LookUpTableFlushComplete @ 0x140094610 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x140094A08 (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalRegisteredProviderEtwCallback(
        const struct _GUID *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        const __m128i *a7)
{
  void (__fastcall *v8)(const struct _GUID *, _QWORD, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, __int64); // rax

  v8 = (void (__fastcall *)(const struct _GUID *, _QWORD, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, __int64))a7[20].m128i_i64[1];
  if ( v8 )
    v8(a1, a2, a3, a4, a5, a6, a7[21].m128i_i64[0]);
  if ( a2 == 1 )
  {
    LookUpTableFlushComplete(a7);
  }
  else if ( a2 == 2 )
  {
    LookUpTableFlushPartial((__int64)a7);
  }
}
