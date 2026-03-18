/*
 * XREFs of ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403FC910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     LookUpTableFlushPartial @ 0x14028A4C4 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1403FC990 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalRegisteredProviderEtwCallback(
        const struct _GUID *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        _QWORD *a7)
{
  void (__fastcall *v8)(const struct _GUID *, _QWORD, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD); // rax

  v8 = (void (__fastcall *)(const struct _GUID *, _QWORD, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD))a7[41];
  if ( v8 )
    v8(a1, a2, a3, a4, a5, a6, a7[42]);
  if ( a2 == 1 )
  {
    LookUpTableFlushComplete(a7);
  }
  else if ( a2 == 2 )
  {
    LookUpTableFlushPartial((__int64)a7);
  }
}
