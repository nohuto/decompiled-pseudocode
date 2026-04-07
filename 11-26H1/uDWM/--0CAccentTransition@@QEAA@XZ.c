/*
 * XREFs of ??0CAccentTransition@@QEAA@XZ @ 0x180094FEC
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18006374C (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CAccentTransition *__fastcall CAccentTransition::CAccentTransition(CAccentTransition *this)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  CAccentTransition *result; // rax

  CBaseObject::CBaseObject((CAccentTransition *)((char *)this + 8));
  *(_DWORD *)(v1 + 36) = -1;
  *v2 = &CAccentTransition::`vftable'{for `CBaseObject'};
  result = (CAccentTransition *)v1;
  *(_QWORD *)v1 = &CAccentTransition::`vftable'{for `IAnimationListener'};
  *(_QWORD *)(v1 + 24) = 0LL;
  return result;
}
