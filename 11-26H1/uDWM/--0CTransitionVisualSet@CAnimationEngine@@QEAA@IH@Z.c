/*
 * XREFs of ??0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z @ 0x18003D1D0
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18003CFD0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::CTransitionVisualSet(
        CAnimationEngine::CTransitionVisualSet *this)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // r8d

  CBaseObject::CBaseObject(this);
  *(_DWORD *)(v2 + 16) = v1;
  *(_QWORD *)(v2 + 20) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_WORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  result = v2;
  *(_QWORD *)v2 = &CAnimationEngine::CTransitionVisualSet::`vftable';
  *(_DWORD *)(v2 + 28) = v4;
  return result;
}
