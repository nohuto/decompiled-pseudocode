/*
 * XREFs of ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x14020C454
 * Callers:
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x14020C2AC (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x140263A94 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ @ 0x14026899C (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock(int a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rcx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v3 = *(void **)(v2 + 24192);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)(v2 + 24192) = 0LL;
  }
}
