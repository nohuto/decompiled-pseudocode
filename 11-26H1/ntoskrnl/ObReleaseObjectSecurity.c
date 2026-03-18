/*
 * XREFs of ObReleaseObjectSecurity @ 0x140A5AB20
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140260160 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObReleaseObjectSecurityWrapper @ 0x140692750 (DifObReleaseObjectSecurityWrapper.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  struct _KLOCK_ENTRIES *v2; // r9
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v7; // rsi
  volatile signed __int64 *v8; // rdi
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbp
  signed __int64 v12; // rcx
  bool v13; // cc
  signed __int64 v14; // rcx
  volatile signed __int64 *i; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8

  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
    {
      ExFreePoolWithTag(SecurityDescriptor, 0);
    }
    else
    {
      v3 = (volatile signed __int64 *)((char *)SecurityDescriptor - 32);
      _m_prefetchw((char *)SecurityDescriptor - 24);
      v4 = *((_QWORD *)SecurityDescriptor - 3);
      while ( v4 - 1 > 0 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64(v3 + 1, v4 - 1, v4);
        if ( v5 == v4 )
          return;
      }
      if ( v4 != 1 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      v7 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * ((_DWORD)v3[2] & 0x3FF));
      --CurrentThread->KernelApcDisable;
      v8 = (volatile signed __int64 *)(v7 + 1);
      v9 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, v2);
      v11 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
        ExfAcquirePushLockExclusiveEx(v7, v9, (__int64)v7);
      if ( v11 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v11, v10);
        else
          *((_BYTE *)v11 + 10) = 1;
      }
      v12 = _InterlockedExchangeAdd64(v3 + 1, 0xFFFFFFFFFFFFFFFFuLL);
      v13 = v12 <= 1;
      v14 = v12 - 1;
      if ( v13 )
      {
        if ( v14 )
          __fastfail(0xEu);
        for ( i = (volatile signed __int64 *)*v8; i != v3; i = (volatile signed __int64 *)*i )
          v8 = i;
        *v8 = *v3;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v7);
        KeAbPostRelease((unsigned __int64)v7);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, v17);
        ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v7);
        KeAbPostRelease((unsigned __int64)v7);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v18, v19);
      }
    }
  }
}
