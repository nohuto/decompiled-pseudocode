/*
 * XREFs of ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x140225918
 * Callers:
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x140225598 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1402256F8 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ @ 0x14028C9FC (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock(int a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rcx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v3 = *(void **)(v2 + 24176);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)(v2 + 24176) = 0LL;
  }
}
