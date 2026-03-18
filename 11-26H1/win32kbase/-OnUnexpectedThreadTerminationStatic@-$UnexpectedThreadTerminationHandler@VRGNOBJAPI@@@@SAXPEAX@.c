/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@SAXPEAX@Z @ 0x1401EDB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
    _InterlockedDecrement16((volatile signed __int16 *)(result + 12));
  return result;
}
