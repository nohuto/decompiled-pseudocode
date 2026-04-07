/*
 * XREFs of ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18002A260
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002A220 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18002A5A8 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18003E4D0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180069C28 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCStoryboard@@$0A@@@QEAAJI@Z @ 0x180071C10 (-RemoveAt@-$DynArray@PEAVCStoryboard@@$0A@@@QEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationScheduler::_RecycleAbandonedStoryboards(CAnimationScheduler *this)
{
  __int64 v1; // rbx
  _DWORD *v3; // rsi

  v1 = 0LL;
  while ( (unsigned int)v1 < *((_DWORD *)this + 10) )
  {
    v3 = *(_DWORD **)(*((_QWORD *)this + 2) + 8 * v1);
    if ( v3[6] == 4 )
    {
      DynArray<CStoryboard *,0>::RemoveAt((char *)this + 16, (unsigned int)v1);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 80LL))(v3);
    }
    else
    {
      v1 = (unsigned int)(v1 + 1);
    }
  }
}
