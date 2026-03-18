/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@SAXPEAX@Z @ 0x14030F3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 96) )
    *(_QWORD *)a1 = 0LL;
}
