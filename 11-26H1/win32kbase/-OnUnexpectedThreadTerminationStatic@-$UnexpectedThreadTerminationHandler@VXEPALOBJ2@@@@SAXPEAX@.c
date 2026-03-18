/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x14018D830
 * Callers:
 *     <none>
 * Callees:
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1400C497C (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic(
        unsigned int **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return XEPALOBJ::DecShareRefCountAndInvalidatePalette(a1);
  return result;
}
