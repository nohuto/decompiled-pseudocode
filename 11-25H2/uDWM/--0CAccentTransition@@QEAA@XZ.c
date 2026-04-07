/*
 * XREFs of ??0CAccentTransition@@QEAA@XZ @ 0x1800A09CC
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180084834 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 */

CAccentTransition *__fastcall CAccentTransition::CAccentTransition(CAccentTransition *this)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  CAccentTransition *result; // rax

  CBaseObject::CBaseObject((CAccentTransition *)((char *)this + 8));
  *(_DWORD *)(v1 + 36) = -1;
  *(_QWORD *)(v1 + 24) = 0LL;
  *v2 = &CAccentTransition::`vftable'{for `CBaseObject'};
  result = (CAccentTransition *)v1;
  *(_QWORD *)v1 = &CAccentTransition::`vftable'{for `IAnimationListener'};
  return result;
}
