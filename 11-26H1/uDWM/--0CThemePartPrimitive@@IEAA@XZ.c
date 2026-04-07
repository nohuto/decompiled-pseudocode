/*
 * XREFs of ??0CThemePartPrimitive@@IEAA@XZ @ 0x18008A080
 * Callers:
 *     ?Create@CThemePartPrimitive@@SAJPEAPEAV1@@Z @ 0x1800738BC (-Create@CThemePartPrimitive@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CNineGridImagePrimitive@@IEAA@XZ @ 0x18008A0AC (--0CNineGridImagePrimitive@@IEAA@XZ.c)
 */

CThemePartPrimitive *__fastcall CThemePartPrimitive::CThemePartPrimitive(CThemePartPrimitive *this)
{
  CThemePartPrimitive *v1; // rcx

  CNineGridImagePrimitive::CNineGridImagePrimitive(this);
  *((_DWORD *)v1 + 18) = 22;
  *(_QWORD *)v1 = &CThemePartPrimitive::`vftable';
  return v1;
}
