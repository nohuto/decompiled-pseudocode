/*
 * XREFs of CmpCreateRegistryThread @ 0x14085D308
 * Callers:
 *     CmpInitializeSystemHivesLoad @ 0x1408514A8 (CmpInitializeSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 *     CmpInitializeRegistryProcess @ 0x14085D3B4 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeLazyWriters @ 0x140862FD4 (CmpInitializeLazyWriters.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1408684F8 (CmpHiveCachePopulateHiveEntry.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall CmpCreateRegistryThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[4]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v6; // [rsp+70h] [rbp-18h]

  v5[0] = 48LL;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v5[3] = 512LL;
  v6 = 0LL;
  return PsCreateSystemThreadEx(a1, 0x1FFFFFLL, v5, CmpFreezeListLock.ThreadLock, 0LL, a3, a4, 0LL, 0LL);
}
