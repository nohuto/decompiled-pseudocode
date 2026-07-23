/*
 * XREFs of RtlpStackDbSegmentRemoveRef @ 0x140626700
 * Callers:
 *     RtlpStackDbEntryCleanup @ 0x140626640 (RtlpStackDbEntryCleanup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall RtlpStackDbSegmentRemoveRef(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 v4; // r8
  signed __int64 i; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // rdi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbp
  _QWORD *j; // rcx
  __int64 v14; // [rsp+58h] [rbp+10h]

  v4 = a2[2];
  for ( i = v4; (i & 0xFFFFFFFFFFFFFFLL) != 1; v4 = i )
  {
    i = _InterlockedCompareExchange64(a2 + 2, (v4 - 1) ^ (v4 ^ (v4 - 1)) & 0xFF00000000000000uLL, v4);
    if ( v4 == i )
      break;
  }
  if ( (v4 & 0xFFFFFFFFFFFFFFuLL) <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (volatile signed __int64 *)(a1 + 40);
    --CurrentThread->SpecialApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire(a1 + 40, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 40), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 40), v10, a1 + 40);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    if ( (_InterlockedDecrement64(a2 + 2) & 0xFFFFFFFFFFFFFFLL) != 0 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
      KeAbPostRelease(a1 + 40);
      KeLeaveGuardedRegion();
    }
    else
    {
      v14 = a2[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
      for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8LL
                         * (((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v14)
                                                              - 877075889
                                                              + 442596621 * (unsigned __int8)v14
                                                              + 37
                                                              * (BYTE6(v14)
                                                               + 37
                                                               * (BYTE5(v14)
                                                                + 37
                                                                * (BYTE4(v14)
                                                                 + 37
                                                                 * (BYTE3(v14)
                                                                  + 37 * (BYTE2(v14) + 37 * (unsigned int)BYTE1(v14)))))))));
            (*j & 1) == 0;
            j = (_QWORD *)*j )
      {
        if ( (_QWORD *)*j == a2 )
        {
          *j = *a2;
          --*(_DWORD *)a1;
          *a2 |= 0x8000000000000002uLL;
          break;
        }
      }
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
      KeAbPostRelease(a1 + 40);
      KeLeaveGuardedRegion();
      guard_dispatch_icall_no_overrides(a2, *(_QWORD *)(a1 + 64));
    }
  }
}
