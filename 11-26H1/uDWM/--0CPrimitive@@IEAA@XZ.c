/*
 * XREFs of ??0CPrimitive@@IEAA@XZ @ 0x18008A0E4
 * Callers:
 *     ??0CNineGridImagePrimitive@@IEAA@XZ @ 0x18008A0AC (--0CNineGridImagePrimitive@@IEAA@XZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CPrimitive *__fastcall CPrimitive::CPrimitive(CPrimitive *this)
{
  CPrimitive *v1; // rcx
  CPrimitive *result; // rax

  CBaseObject::CBaseObject(this);
  result = v1;
  *((_QWORD *)v1 + 2) = 0LL;
  return result;
}
