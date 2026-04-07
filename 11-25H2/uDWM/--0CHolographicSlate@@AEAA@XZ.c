/*
 * XREFs of ??0CHolographicSlate@@AEAA@XZ @ 0x1800B69D0
 * Callers:
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x1800B6A68 (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 */

CHolographicSlate *__fastcall CHolographicSlate::CHolographicSlate(CHolographicSlate *this)
{
  CHolographicSlate *v1; // rcx
  CHolographicSlate *result; // rax

  CBaseObject::CBaseObject(this);
  result = v1;
  *(_QWORD *)v1 = &CHolographicSlate::`vftable';
  *((_QWORD *)v1 + 3) = 0LL;
  return result;
}
