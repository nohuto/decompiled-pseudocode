/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x14090D9C0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1408F3048 (ObQuerySecurityDescriptorInfo.c)
 *     ObCheckCreateObjectAccess @ 0x1408F4A00 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1408F4DF4 (ObpCheckObjectReference.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408FCFF0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14090D710 (ObpAdjustCreatorAccessState.c)
 *     EtwpFreeGuidEntry @ 0x14091281C (EtwpFreeGuidEntry.c)
 *     ObReleaseObjectSecurityEx @ 0x1409184C0 (ObReleaseObjectSecurityEx.c)
 *     ObCheckObjectAccess @ 0x1409349E0 (ObCheckObjectAccess.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140934FB4 (ObpReferenceSecurityDescriptorSlow.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14097A538 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ExpWnfDeleteNameInstance @ 0x1409C4B7C (ExpWnfDeleteNameInstance.c)
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 *     EtwpFreeLoggerContext @ 0x140A16604 (EtwpFreeLoggerContext.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140AAD184 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140AB2A5C (EtwpUpdateLoggerSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AFA774 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag((PVOID)v5, 0x6353624Fu);
  }
}
