/*
 * XREFs of ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1402258B0
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x140225158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x140225598 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1402256F8 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock(int a1, __int64 a2)
{
  __int64 v2; // rdi
  PVOID *v3; // rbx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v3 = *(PVOID **)(v2 + 24152);
  if ( v3 )
  {
    ExFreePoolWithTag(v3[6], 0);
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(v2 + 24152) = 0LL;
  }
}
