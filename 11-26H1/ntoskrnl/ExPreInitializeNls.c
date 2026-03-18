/*
 * XREFs of ExPreInitializeNls @ 0x14083A88C
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 ExPreInitializeNls()
{
  if ( InitNlsTableBase )
  {
    _InterlockedExchange64(&qword_140FC8DF0, InitNlsTableBase + 4);
    _InterlockedExchange64(&qword_140FC8DF8, InitNlsTableBase + 2 * (*(unsigned __int16 *)(InitNlsTableBase + 2) + 2LL));
    qword_140FC8DE8 = InitNlsTableBase;
  }
  return 0LL;
}
