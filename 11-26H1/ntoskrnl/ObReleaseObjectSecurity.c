/*
 * XREFs of ObReleaseObjectSecurity @ 0x140A67A90
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140406340 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObReleaseObjectSecurityWrapper @ 0x140696330 (DifObReleaseObjectSecurityWrapper.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v7);
        KeAbPostRelease((unsigned __int64)v7);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
    }
  }
}
