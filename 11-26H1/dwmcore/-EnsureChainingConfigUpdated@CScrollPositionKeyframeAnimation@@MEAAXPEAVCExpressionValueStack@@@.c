/*
 * XREFs of ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@@Z @ 0x180211550
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x1801E1948 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollPositionKeyframeAnimation::EnsureChainingConfigUpdated(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebx

  (*(void (__fastcall **)(_QWORD, struct CExpressionValueStack *, _QWORD))(**((_QWORD **)this + 59) + 208LL))(
    *((_QWORD *)this + 59),
    a2,
    0LL);
  v4 = v3;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 59) + 208LL))(
         *((_QWORD *)this + 59),
         **((_QWORD **)this + 59),
         1LL);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges((__int64)this, 0, v4);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges((__int64)this, 1u, v5);
}
