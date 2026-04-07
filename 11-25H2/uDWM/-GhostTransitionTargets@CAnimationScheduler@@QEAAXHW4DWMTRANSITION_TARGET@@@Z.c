/*
 * XREFs of ?GhostTransitionTargets@CAnimationScheduler@@QEAAXHW4DWMTRANSITION_TARGET@@@Z @ 0x1800A8608
 * Callers:
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x1800C84F0 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 * Callees:
 *     ?GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z @ 0x1800C7B10 (-GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z.c)
 */

__int64 __fastcall CAnimationScheduler::GhostTransitionTargets(__int64 a1)
{
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v4; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(result + 8 * i);
    if ( *(_DWORD *)(v4 + 24) == 3 && *(_DWORD *)(v4 + 72) == 71 )
      result = CStoryboard::GhostTargets();
  }
  return result;
}
