/*
 * XREFs of ??0CNineGridImagePrimitive@@IEAA@XZ @ 0x18008A0AC
 * Callers:
 *     ??0CThemePartPrimitive@@IEAA@XZ @ 0x18008A080 (--0CThemePartPrimitive@@IEAA@XZ.c)
 *     ?Create@CNineGridImagePrimitive@@SAJPEAPEAV1@@Z @ 0x1800BCDB0 (-Create@CNineGridImagePrimitive@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CPrimitive@@IEAA@XZ @ 0x18008A0E4 (--0CPrimitive@@IEAA@XZ.c)
 */

CNineGridImagePrimitive *__fastcall CNineGridImagePrimitive::CNineGridImagePrimitive(CNineGridImagePrimitive *this)
{
  __int64 v1; // rcx
  CNineGridImagePrimitive *result; // rax

  CPrimitive::CPrimitive(this);
  result = (CNineGridImagePrimitive *)v1;
  *(_QWORD *)v1 = &CNineGridImagePrimitive::`vftable';
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 68) = 1065353216;
  return result;
}
