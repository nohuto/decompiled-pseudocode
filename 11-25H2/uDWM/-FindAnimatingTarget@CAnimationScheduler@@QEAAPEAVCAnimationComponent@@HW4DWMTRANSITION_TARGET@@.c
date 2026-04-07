/*
 * XREFs of ?FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@@Z @ 0x1800A77A4
 * Callers:
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x1800C84F0 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FindAnimatingTarget@CStoryboard@@QEAAPEAVCAnimationComponent@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800C6CE4 (-FindAnimatingTarget@CStoryboard@@QEAAPEAVCAnimationComponent@@W4DWMTRANSITION_TARGET@@@Z.c)
 */

CBaseObject *__fastcall CAnimationScheduler::FindAnimatingTarget(__int64 a1)
{
  CBaseObject *v1; // rbx
  __int64 i; // r11
  __int64 v4; // rcx
  CBaseObject *AnimatingTarget; // rax

  v1 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( *(_DWORD *)(v4 + 24) != 4 && *(_DWORD *)(v4 + 72) == 72 )
    {
      AnimatingTarget = (CBaseObject *)CStoryboard::FindAnimatingTarget();
      if ( AnimatingTarget )
      {
        if ( v1 )
        {
          CBaseObject::Release(AnimatingTarget);
          CBaseObject::Release(v1);
          return 0LL;
        }
        v1 = AnimatingTarget;
      }
    }
  }
  return v1;
}
