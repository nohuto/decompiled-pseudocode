/*
 * XREFs of ?_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ @ 0x18008B4D8
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002A330 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180075A0C (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800CFE34 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 */

void __fastcall CTransitionVisualController::_CleanupHighZOrderStaticWindowClones(CTransitionVisualController *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  v2 = (unsigned int)(*((_DWORD *)this + 12) - 1);
  if ( (int)v2 >= 0 )
  {
    v3 = 24LL * (int)v2;
    do
    {
      v4 = *((_QWORD *)this + 3);
      if ( *(_BYTE *)(v3 + v4 + 16) )
      {
        CTransitionVisualController::_CleanupHighZOrderClone(
          this,
          (struct CTransitionVisualController::TlwPair *)(v4 + 24 * v2));
        DynArray<CFlickTextFeedback,0>::RemoveAt((__int64 *)this + 3, v2);
      }
      v3 -= 24LL;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( (int)v2 >= 0 );
  }
}
