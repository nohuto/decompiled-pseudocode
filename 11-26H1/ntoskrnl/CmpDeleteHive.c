/*
 * XREFs of CmpDeleteHive @ 0x1408DA884
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x1408DA960 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     CmpDeleteKcbCache @ 0x1408CEA04 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408CEB28 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteHive(_QWORD *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  v4 = P + 201;
  if ( (_QWORD *)*v4 != v4 )
  {
    CmpLockHiveListExclusive((__int64)P, a2, a3, a4);
    v6 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    CmpUnlockHiveList();
  }
  *(_DWORD *)P = -1160724768;
  HvFreeDirtyData((__int64)P);
  CmpDeleteKcbCache((__int64)P);
  v8 = (void *)P[232];
  if ( v8 )
    ExFreePoolWithTag(v8, 0x624E4D43u);
  v9 = (void *)P[230];
  if ( v9 )
    ExFreePoolWithTag(v9, 0x20204D43u);
  v10 = (void *)P[234];
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = (void *)P[603];
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  CmpReleaseGlobalQuota(0x12E0u);
  ExFreePoolWithTag(P, 0);
}
