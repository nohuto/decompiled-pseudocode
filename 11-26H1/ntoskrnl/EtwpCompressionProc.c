/*
 * XREFs of EtwpCompressionProc @ 0x1406C7EC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     EtwpCompressPendingBuffers @ 0x1406C7D5C (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406C8310 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpCompressionProc(unsigned int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int32 i; // eax
  bool v6; // zf
  unsigned int v7; // eax
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  AutoBoost *v10; // rbp

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 350, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 350, 0xFFFFFFFF) )
  {
    v6 = i == 2;
    v7 = a1[358];
    if ( !v6 )
      break;
    if ( v7 )
      EtwpCompressPendingBuffers((__int64)a1, a2, a3, a4);
  }
  if ( !v7 )
  {
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 352), 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 352, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 176, v8, (__int64)(a1 + 352));
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v9) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v9, 1);
      }
      else
      {
        *((_BYTE *)v10 + 10) = 1;
      }
    }
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 176, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 176);
    KeAbPostRelease((unsigned __int64)(a1 + 352));
  }
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 170) + 704LL) + 8LL * *a1),
    1u);
}
