/*
 * XREFs of CrmGlobalsPeriodicRundown @ 0x18006C7C0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x180061FF0 (LookUpTableFlushComplete.c)
 */

__int64 CrmGlobalsPeriodicRundown()
{
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, __int64, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1800E1310 == TlgAggregateInternalRegisteredProviderEtwCallback )
    LookUpTableFlushComplete(qword_1800E1318);
  return CrmGlobalsRundown();
}
