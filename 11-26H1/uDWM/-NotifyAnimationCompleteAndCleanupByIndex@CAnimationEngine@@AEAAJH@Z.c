/*
 * XREFs of ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18005354C
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800512BC (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?NotifyAnimationCompleteAndCleanup@CAnimationEngine@@AEAAJI@Z @ 0x180053498 (-NotifyAnimationCompleteAndCleanup@CAnimationEngine@@AEAAJI@Z.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180063CFC (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x180053648 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ?CleanupAnimation@CAnimationEngine@@AEAAJI@Z @ 0x180053690 (-CleanupAnimation@CAnimationEngine@@AEAAJI@Z.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x18008990C (McTemplateU0qdq_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(CAnimationEngine *this, unsigned int a2)
{
  __int64 v2; // rbp
  int v4; // ecx
  CAnimationEngine::CTransitionVisualSet *v5; // rdi
  __int64 i; // rsi
  void (__fastcall ***v7)(_QWORD, _QWORD); // rcx
  int v8; // eax
  unsigned int v9; // ebx

  v2 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8 * v2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq_EtwEventWriteTransfer(
      v4,
      (unsigned int)&UdwmAnimationEngine_Animation_End,
      *((_DWORD *)v5 + 4),
      *((_DWORD *)v5 + 7),
      *((_DWORD *)v5 + 6));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    v7 = *(void (__fastcall ****)(_QWORD, _QWORD))(*((_QWORD *)this + 9) + 8 * i);
    if ( v7 )
      (**v7)(v7, *((unsigned int *)v5 + 4));
  }
  CAnimationEngine::CTransitionVisualSet::StopStoryboard(v5);
  *((_BYTE *)this + 112) = 1;
  v8 = CAnimationEngine::CleanupAnimation(this, v2);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x599u, 0LL);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
