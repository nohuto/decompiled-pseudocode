/*
 * XREFs of ObLogSecurityDescriptor @ 0x1408FCCF0
 * Callers:
 *     ObpInitObjectTypeSD @ 0x1407C6FF4 (ObpInitObjectTypeSD.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     EtwpAllocGuidEntry @ 0x1408FCBE8 (EtwpAllocGuidEntry.c)
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x140AB28FC (EtwpInitializeLoggerSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140AB2A5C (EtwpUpdateLoggerSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AFA774 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     RtlHashBytes2 @ 0x14024D064 (RtlHashBytes2.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(void *a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // r12
  size_t v5; // r15
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v8; // rdi
  _QWORD *v9; // r14
  volatile signed __int64 *v10; // rbp
  volatile signed __int64 *v11; // rsi
  struct _KLOCK_ENTRIES *v12; // r9
  LegacyAutoBoost *v13; // rbx
  signed __int64 v14; // rdx
  signed __int64 v15; // rbx
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v18; // r9

  v3 = a3;
  v5 = RtlLengthSecurityDescriptor(a1);
  v6 = RtlHashBytes2((__int64)a1, v5);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (v6 & 0x3FF));
  v11 = v10 + 1;
  v13 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, v12);
  v14 = 17LL;
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&ObsSecurityDescriptorCache + 2 * (v8 & 0x3FF),
      0,
      v13,
      (struct _KTHREAD *)((char *)&ObsSecurityDescriptorCache + 16 * (v8 & 0x3FF)));
    v14 = 17LL;
  }
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      goto LABEL_32;
LABEL_5:
    *((_BYTE *)v13 + 10) = 1;
    goto LABEL_6;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_6:
      v15 = *v11;
      if ( *v11 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v15 + 16) > v8 )
          {
LABEL_10:
            v14 = 17LL;
            goto LABEL_11;
          }
          if ( *(_QWORD *)(v15 + 16) == v8
            && *(_DWORD *)(v15 + 24) == (_DWORD)v5
            && !memcmp(a1, (const void *)(v15 + 32), v5) )
          {
            break;
          }
          v11 = (volatile signed __int64 *)v15;
          v15 = *(_QWORD *)v15;
          if ( !v15 )
            goto LABEL_10;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 8), v3) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&ObsSecurityDescriptorCache + 2 * (v8 & 0x3FF));
        KeAbPostRelease((unsigned __int64)&ObsSecurityDescriptorCache + 16 * (v8 & 0x3FF));
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        *a2 = v15 + 32;
        if ( v9 )
          ExFreePoolWithTag(v9, 0x6353624Fu);
        return 0LL;
      }
LABEL_11:
      if ( !v9 )
        break;
      *v9 = v15;
      v11 = (volatile signed __int64 *)_InterlockedCompareExchange64(v11, (signed __int64)v9, v15);
      if ( (volatile signed __int64 *)v15 == v11 )
      {
        if ( v14 != _InterlockedCompareExchange64(v10, 0LL, v14) )
          ExfReleasePushLockShared((signed __int64 *)&ObsSecurityDescriptorCache + 2 * (v8 & 0x3FF));
        KeAbPostRelease((unsigned __int64)&ObsSecurityDescriptorCache + 16 * (v8 & 0x3FF));
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        *a2 = v9 + 4;
        return 0LL;
      }
    }
    if ( v14 != _InterlockedCompareExchange64(v10, 0LL, v14) )
      ExfReleasePushLockShared((signed __int64 *)&ObsSecurityDescriptorCache + 2 * (v8 & 0x3FF));
    KeAbPostRelease((unsigned __int64)&ObsSecurityDescriptorCache + 16 * (v8 & 0x3FF));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (int)v5 + 40 < (unsigned int)v5 )
      return 3221225626LL;
    Pool2 = ExAllocatePool2(0x108uLL);
    v9 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_QWORD *)(Pool2 + 8) = v3;
    *(_QWORD *)(Pool2 + 16) = v8;
    *(_DWORD *)(Pool2 + 24) = v5;
    memmove((void *)(Pool2 + 32), a1, v5);
    --CurrentThread->KernelApcDisable;
    v11 = v10 + 1;
    v13 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&ObsSecurityDescriptorCache + 16 * (v8 & 0x3FF), 0LL, 0LL, v18);
    v14 = 17LL;
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&ObsSecurityDescriptorCache + 2 * (v8 & 0x3FF),
        0,
        v13,
        (struct _KTHREAD *)((char *)&ObsSecurityDescriptorCache + 16 * (v8 & 0x3FF)));
      v14 = 17LL;
    }
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) == 0 )
        goto LABEL_5;
LABEL_32:
      AutoBoost::KiAbpPostAcquire(v13, (void *)0x11);
    }
  }
}
