/*
 * XREFs of ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x18007B58C
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18003AB7C (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CTransitionVisualController::_IsOwnedByVisibleAC(
        CTransitionVisualController *this,
        const struct CWindowData *a2)
{
  CTransitionVisualController *v3; // rbp
  char v4; // si
  __int64 i; // rdi
  struct CAnimationComponent *v6; // rdx

  v3 = this;
  v4 = 0;
  do
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v3 + 34); i = (unsigned int)(i + 1) )
    {
      v6 = *(struct CAnimationComponent **)(*((_QWORD *)v3 + 14) + 8 * i);
      if ( *((_QWORD *)v6 + 2) == *((_QWORD *)a2 + 5)
        && CTransitionVisualController::_IsAnimationComponentVisible(this, v6) )
      {
        v4 = 1;
        break;
      }
    }
    a2 = (const struct CWindowData *)*((_QWORD *)a2 + 75);
    if ( !a2 )
      break;
    this = (CTransitionVisualController *)(*((_DWORD *)a2 + 186) & 0xFFF);
    if ( (_DWORD)this != 4095 && (*((_DWORD *)a2 + 186) & 0x10000000) == 0 )
      break;
  }
  while ( *((_QWORD *)a2 + 5) );
  return v4;
}
