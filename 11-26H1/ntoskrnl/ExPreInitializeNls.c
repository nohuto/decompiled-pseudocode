/*
 * XREFs of ExPreInitializeNls @ 0x140840ACC
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 ExPreInitializeNls()
{
  if ( InitNlsTableBase )
  {
    _InterlockedExchange64(&qword_140FC9DF0, InitNlsTableBase + 4);
    _InterlockedExchange64(&qword_140FC9DF8, InitNlsTableBase + 2 * (*(unsigned __int16 *)(InitNlsTableBase + 2) + 2LL));
    qword_140FC9DE8 = InitNlsTableBase;
  }
  return 0LL;
}
