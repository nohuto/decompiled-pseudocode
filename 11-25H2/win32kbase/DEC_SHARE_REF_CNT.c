/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x14001CA20
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(struct _BASEOBJECT *a1)
{
  return HmgDecrementShareReferenceCountEx(a1, 0LL);
}
