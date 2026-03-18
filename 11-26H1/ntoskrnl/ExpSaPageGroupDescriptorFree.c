/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x140499C34
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x140499B64 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402767B0 (KeQueryMaximumProcessorCountEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExpSaBinaryArrayRemove @ 0x140525D9C (ExpSaBinaryArrayRemove.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(unsigned int *P)
{
  __int64 MaximumProcessorCount; // rsi
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // rbx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock, 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64(&ExSaPageGroupDescriptorArrayLock.Header.Lock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock,
      v4,
      (__int64)&ExSaPageGroupDescriptorArrayLock);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  if ( (_DWORD)MaximumProcessorCount )
  {
    v8 = 0LL;
    do
    {
      v9 = P[8];
      _BitScanReverse(&v10, v9);
      v11 = v9 ^ (unsigned int)(1 << v10);
      v12 = v10 - 2;
      v13 = *(_QWORD *)(v8 + ExSaPageArrays);
      v14 = *(void **)(*(_QWORD *)(v13 + 8 * v12) + 8 * v11 + 8);
      ExpSaBinaryArrayRemove(v13, v9);
      ExFreePoolWithTag(v14, 0);
      v8 += 8LL;
      --MaximumProcessorCount;
    }
    while ( MaximumProcessorCount );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, P[8]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock);
  ExFreePoolWithTag(P, 0);
}
