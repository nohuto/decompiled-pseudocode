/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@SAXPEAX@Z @ 0x140300130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 112) )
    *(_QWORD *)a1 = 0LL;
}
