/*
 * XREFs of CmpUnlockHashEntry @ 0x140A4F550
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     CmpDeleteKcbCache @ 0x1408CEA04 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408CEB28 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpUnlockHashEntry(char *P, unsigned int a2)
{
  __int64 *v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 v6; // rtt
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  char *v11; // rdi
  __int64 v12; // rcx
  char **v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx

  v3 = (__int64 *)(*((_QWORD *)P + 206)
                 + 24
                 * ((unsigned int)(*((_DWORD *)P + 414) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9))));
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v4 = *v3;
  v5 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v5, v4)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((unsigned __int64)v3);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1060, 0xFFFFFFFF) == 1 )
  {
    v11 = P + 1608;
    if ( *(char **)v11 != v11 )
    {
      CmpLockHiveListExclusive(v8, v7, v9, v10);
      v12 = *(_QWORD *)v11;
      if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || (v13 = (char **)*((_QWORD *)P + 202), *v13 != v11) )
        __fastfail(3u);
      *v13 = (char *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      CmpUnlockHiveList();
    }
    *(_DWORD *)P = -1160724768;
    HvFreeDirtyData((__int64)P);
    CmpDeleteKcbCache((__int64)P);
    v14 = (void *)*((_QWORD *)P + 232);
    if ( v14 )
      ExFreePoolWithTag(v14, 0x624E4D43u);
    v15 = (void *)*((_QWORD *)P + 230);
    if ( v15 )
      ExFreePoolWithTag(v15, 0x20204D43u);
    v16 = (void *)*((_QWORD *)P + 234);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    v17 = (void *)*((_QWORD *)P + 603);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    CmpReleaseGlobalQuota(0x12E0u);
    ExFreePoolWithTag(P, 0);
  }
}
