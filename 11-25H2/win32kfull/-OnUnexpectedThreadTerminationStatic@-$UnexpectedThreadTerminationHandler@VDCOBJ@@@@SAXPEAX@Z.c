/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@SAXPEAX@Z @ 0x1403000E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJ>::OnUnexpectedThreadTerminationStatic(OBJECT **a1)
{
  OBJECT *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( --*((_WORD *)v2 + 6) == 0xFFFF )
      OBJECT::ReportOverflow(v2, 4u);
    *a1 = 0LL;
  }
}
