/*
 * XREFs of ?Release@CExpressionForce@@UEAAKXZ @ 0x1800E1C70
 * Callers:
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x18028E8F0 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CExpressionForce::Release(CExpressionForce *this)
{
  return CMILRefCountBaseT<IAccelerator,CMilObjectDeleter>::InternalRelease(this);
}
