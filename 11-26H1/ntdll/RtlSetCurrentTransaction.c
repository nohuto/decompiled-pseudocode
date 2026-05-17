/*
 * XREFs of RtlSetCurrentTransaction @ 0x1800CA250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetCurrentTransaction(void *a1)
{
  if ( a1 == (void *)-1LL )
    return 0LL;
  NtCurrentTeb()->CurrentTransactionHandle = a1;
  return 1LL;
}
