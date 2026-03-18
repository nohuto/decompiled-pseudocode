/*
 * XREFs of ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@@Z @ 0x180289B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollScaleKeyframeAnimation::EnsureChainingConfigUpdated(
        CScrollScaleKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  unsigned int v3; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD, struct CExpressionValueStack *, __int64))(**((_QWORD **)this + 59) + 208LL))(
         *((_QWORD *)this + 59),
         a2,
         2LL);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges((__int64)this, 2u, v3);
}
