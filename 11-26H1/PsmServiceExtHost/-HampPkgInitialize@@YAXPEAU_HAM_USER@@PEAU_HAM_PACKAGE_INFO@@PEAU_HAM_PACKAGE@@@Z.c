/*
 * XREFs of ?HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z @ 0x180036008
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800371B8 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 * Callees:
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampPkgInitialize(struct _HAM_USER *a1, struct _HAM_PACKAGE_INFO *a2, struct _HAM_PACKAGE *a3)
{
  __int128 v6; // xmm1
  char *v7; // rsi

  memset_0((char *)a3 + 88, 0, 0x108uLL);
  memset_0(a3, 0, 0x58uLL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 3) = 1LL;
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 4) = (char *)a1 + 40;
  *((_QWORD *)a3 + 7) = 0LL;
  *((_QWORD *)a3 + 8) = 0LL;
  *((_QWORD *)a3 + 9) = 0LL;
  *((_QWORD *)a3 + 10) = 0LL;
  *((_QWORD *)a3 + 5) = 0LL;
  *((_QWORD *)a3 + 6) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 56);
  RtlInitializeConditionVariable((char *)a3 + 72);
  *((_QWORD *)a3 + 8) = HampAppDestroy;
  *((_OWORD *)a3 + 6) = *(_OWORD *)a2;
  *((_OWORD *)a3 + 7) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 8) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 9) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a3 + 10) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a3 + 11) = *((_OWORD *)a2 + 5);
  *((_OWORD *)a3 + 12) = *((_OWORD *)a2 + 6);
  *((_OWORD *)a3 + 13) = *((_OWORD *)a2 + 7);
  *((_OWORD *)a3 + 14) = *((_OWORD *)a2 + 8);
  *((_OWORD *)a3 + 15) = *((_OWORD *)a2 + 9);
  *((_OWORD *)a3 + 16) = *((_OWORD *)a2 + 10);
  *((_OWORD *)a3 + 17) = *((_OWORD *)a2 + 11);
  *((_QWORD *)a3 + 36) = *((_QWORD *)a2 + 24);
  *((_DWORD *)a3 + 74) = *((_DWORD *)a2 + 50);
  *((_DWORD *)a3 + 86) = 128;
  *((_OWORD *)a3 + 6) = *(_OWORD *)a2;
  *((_OWORD *)a3 + 7) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 8) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 9) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a3 + 10) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a3 + 11) = *((_OWORD *)a2 + 5);
  *((_OWORD *)a3 + 12) = *((_OWORD *)a2 + 6);
  v6 = *((_OWORD *)a2 + 7);
  v7 = (char *)a2 + 128;
  *((_OWORD *)a3 + 13) = v6;
  *((_OWORD *)a3 + 14) = *(_OWORD *)v7;
  *((_OWORD *)a3 + 15) = *((_OWORD *)v7 + 1);
  *((_OWORD *)a3 + 16) = *((_OWORD *)v7 + 2);
  *((_OWORD *)a3 + 17) = *((_OWORD *)v7 + 3);
  *((_QWORD *)a3 + 36) = *((_QWORD *)v7 + 8);
  *((_DWORD *)a3 + 74) = *((_DWORD *)v7 + 18);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 11) = a1;
  CempLockInitialize((__int64)a3 + 304);
  RtlInitializeConditionVariable((char *)a3 + 320);
}
