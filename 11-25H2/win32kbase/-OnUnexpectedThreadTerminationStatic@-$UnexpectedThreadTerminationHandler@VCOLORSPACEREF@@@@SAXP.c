/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1401C3E30
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 */

unsigned int __fastcall UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic(
        __int64 a1)
{
  struct _BASEOBJECT *v2; // rcx
  unsigned int result; // eax

  v2 = *(struct _BASEOBJECT **)(a1 + 32);
  if ( v2 )
  {
    result = HmgDecrementShareReferenceCountEx(v2, 0LL);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
