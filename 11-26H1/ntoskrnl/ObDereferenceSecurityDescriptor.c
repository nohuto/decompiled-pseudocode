/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x140931DF0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1408ECA88 (ObQuerySecurityDescriptorInfo.c)
 *     ObCheckCreateObjectAccess @ 0x1408EE440 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1408EE834 (ObpCheckObjectReference.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408EEAF0 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckObjectAccess @ 0x140904A50 (ObCheckObjectAccess.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140905024 (ObpReferenceSecurityDescriptorSlow.c)
 *     ObSetSecurityDescriptorInfo @ 0x1409214E0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x140921C40 (SeDefaultObjectMethod.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x140931B40 (ObpAdjustCreatorAccessState.c)
 *     EtwpFreeGuidEntry @ 0x140936C7C (EtwpFreeGuidEntry.c)
 *     ObReleaseObjectSecurityEx @ 0x14093C920 (ObReleaseObjectSecurityEx.c)
 *     ExpWnfDeleteNameInstance @ 0x14094920C (ExpWnfDeleteNameInstance.c)
 *     ExpWnfCreateNameInstance @ 0x14094FCA8 (ExpWnfCreateNameInstance.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A6C604 (EtwpUpdateLoggerSecurityDescriptor.c)
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140A6FAA4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140A6FBA4 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140AAF534 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AF80D4 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  volatile signed __int64 *v5; // rbx
  signed __int64 v6; // rax
  __int64 v7; // rdi
  signed __int64 v8; // rcx
  signed __int64 v9; // rtt
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v11; // r14
  volatile signed __int64 *v12; // rsi
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // r15
  __int64 v16; // rax
  volatile signed __int64 *i; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8

  v5 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 8));
  v6 = *(_QWORD *)(a1 - 32 + 8);
  v7 = a2;
  while ( 1 )
  {
    v8 = v6 - a2;
    if ( v8 <= 0 )
      break;
    v9 = v6;
    v6 = _InterlockedCompareExchange64(v5 + 1, v8, v6);
    if ( v9 == v6 )
      return;
  }
  if ( v8 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v11 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * ((_DWORD)v5[2] & 0x3FF));
  --CurrentThread->KernelApcDisable;
  v12 = (volatile signed __int64 *)(v11 + 1);
  v13 = (AutoBoost *)KeAbPreAcquire((__int64)v11, 0LL, 0LL, a4);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v13, (__int64)v11);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  v16 = _InterlockedExchangeAdd64(v5 + 1, -a2) - v7;
  if ( v16 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((unsigned __int64)v11);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v20, v21);
  }
  else
  {
    if ( v16 )
      __fastfail(0xEu);
    for ( i = (volatile signed __int64 *)*v12; i != v5; i = (volatile signed __int64 *)*i )
      v12 = i;
    *v12 = *v5;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((unsigned __int64)v11);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v18, v19);
    ExFreePoolWithTag((PVOID)v5, 0x6353624Fu);
  }
}
