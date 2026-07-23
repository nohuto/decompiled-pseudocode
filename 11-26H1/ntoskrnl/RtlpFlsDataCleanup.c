/*
 * XREFs of RtlpFlsDataCleanup @ 0x14094C22C
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpFlsHeapFree @ 0x14094C468 (RtlpFlsHeapFree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsDataCleanup(__int64 a1, _DWORD *a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int InitialStack; // r15d
  unsigned int v7; // ebp
  int v8; // ecx
  __int64 v9; // r8
  __int64 *v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // r8
  signed __int64 *v15; // rbx
  void *v16; // rdx
  LegacyAutoBoost *v17; // rdi
  signed __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _KLOCK_ENTRIES *v21; // r9
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rcx

  if ( (a3 & 1) != 0 )
  {
    InitialStack = (unsigned int)PspTlsContext.InitialStack;
    if ( LODWORD(PspTlsContext.InitialStack) )
    {
      v7 = 17;
      do
      {
        _BitScanReverse((unsigned int *)&v8, v7);
        v9 = *(_QWORD *)&a2[2 * (v8 - 4)];
        if ( v9 )
        {
          v10 = (__int64 *)(v9 + 8 * ((v7 ^ (1 << v8)) + 2LL * (v7 ^ (1 << v8)) + 1));
          if ( v10 )
          {
            if ( *v10 )
            {
              _BitScanReverse((unsigned int *)&v13, v7);
              v14 = *((_QWORD *)&PspTlsContext.Header.WaitListHead.Flink + (unsigned int)(v13 - 4));
              if ( v14 )
                v15 = (signed __int64 *)(v14 + 8 * ((v7 ^ (1 << v13)) + 4LL * (v7 ^ (1 << v13)) + 1));
              else
                v15 = 0LL;
              v17 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v15, 0LL, 0LL, a4);
              if ( _InterlockedCompareExchange64(v15, 17LL, 0LL) )
                ExfAcquirePushLockSharedEx(v15, 0, v17, (struct _KTHREAD *)v15);
              if ( v17 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v17, v16);
                else
                  *((_BYTE *)v17 + 10) = 1;
              }
              v18 = v15[1];
              v19 = v15[2];
              v20 = *v10;
              if ( v18 && v18 != -1 && v20 )
              {
                if ( v19 )
                  guard_dispatch_icall_no_overrides(v19, v20);
                else
                  guard_dispatch_icall_no_overrides(*v10, v20);
                *v10 = 0LL;
                a2[8] &= ~1u;
              }
              if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v15);
              KeAbPostRelease((unsigned __int64)v15);
              v22 = (AutoBoost *)KeAbPreAcquire((__int64)v15, 0LL, 0LL, v21);
              v24 = v22;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v15, v22, (__int64)v15);
              if ( v24 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v24, v23);
                else
                  *((_BYTE *)v24 + 10) = 1;
              }
              v25 = v10 + 1;
              *v10 = 0LL;
              v26 = v10[1];
              v27 = (__int64 *)v10[2];
              if ( *(__int64 **)(v26 + 8) != v10 + 1 || (_QWORD *)*v27 != v25 )
                __fastfail(3u);
              *v27 = v26;
              *(_QWORD *)(v26 + 8) = v27;
              v10[2] = (__int64)(v10 + 1);
              *v25 = v25;
              if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v15);
              KeAbPostRelease((unsigned __int64)v15);
            }
          }
        }
        ++v7;
      }
      while ( v7 - 16 <= InitialStack );
    }
  }
  if ( (a3 & 2) != 0 )
  {
    v11 = a2;
    v12 = 4LL;
    do
    {
      if ( *v11 )
        RtlpFlsHeapFree();
      ++v11;
      --v12;
    }
    while ( v12 );
    ExFreePoolWithTag(a2, 0x6B534C46u);
  }
}
