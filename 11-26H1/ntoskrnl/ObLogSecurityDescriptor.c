/*
 * XREFs of ObLogSecurityDescriptor @ 0x1409211E0
 * Callers:
 *     ObpInitObjectTypeSD @ 0x1407C3F94 (ObpInitObjectTypeSD.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     EtwpAllocGuidEntry @ 0x1409210D8 (EtwpAllocGuidEntry.c)
 *     ExpWnfCreateNameInstance @ 0x14094FCA8 (ExpWnfCreateNameInstance.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A6C604 (EtwpUpdateLoggerSecurityDescriptor.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x140A6D3B8 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AF80D4 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     RtlHashBytes2 @ 0x14024B704 (RtlHashBytes2.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     RtlLengthSecurityDescriptor @ 0x1409228D0 (RtlLengthSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v24; // r9

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
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v18, v19);
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
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, v17);
        *a2 = v9 + 4;
        return 0LL;
      }
    }
    if ( v14 != _InterlockedCompareExchange64(v10, 0LL, v14) )
      ExfReleasePushLockShared((signed __int64 *)&ObsSecurityDescriptorCache + 2 * (v8 & 0x3FF));
    KeAbPostRelease((unsigned __int64)&ObsSecurityDescriptorCache + 16 * (v8 & 0x3FF));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v21, v22);
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
    v13 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&ObsSecurityDescriptorCache + 16 * (v8 & 0x3FF), 0LL, 0LL, v24);
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
