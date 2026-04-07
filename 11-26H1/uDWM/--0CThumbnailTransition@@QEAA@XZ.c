/*
 * XREFs of ??0CThumbnailTransition@@QEAA@XZ @ 0x1800C8FFC
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800739C4 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CThumbnailTransition *__fastcall CThumbnailTransition::CThumbnailTransition(CThumbnailTransition *this)
{
  CThumbnailTransition *v1; // rcx
  CThumbnailTransition *result; // rax

  CBaseObject::CBaseObject(this);
  *((_QWORD *)v1 + 3) = 0LL;
  *((_QWORD *)v1 + 2) = &CThumbnailTransition::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CThumbnailTransition::`vftable'{for `CBaseObject'};
  return result;
}
