/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORTRANSFORMOBJ@@@@SAXPEAX@Z @ 0x14030A870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic(
        Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax

  if ( *((_QWORD *)a1 + 4) )
  {
    v2 = Gre::Base::Globals(a1);
    DEC_SHARE_REF_CNT(v2, *((_QWORD *)a1 + 4));
    *((_QWORD *)a1 + 4) = 0LL;
  }
}
