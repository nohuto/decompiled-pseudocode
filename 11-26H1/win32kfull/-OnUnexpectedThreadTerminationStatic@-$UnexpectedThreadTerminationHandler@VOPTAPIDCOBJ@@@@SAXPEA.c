/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@SAXPEAX@Z @ 0x14030F0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 104) )
    *(_QWORD *)a1 = 0LL;
}
