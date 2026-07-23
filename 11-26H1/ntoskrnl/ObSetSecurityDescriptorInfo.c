/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x1408FCFF0
 * Callers:
 *     WmipSecurityMethod @ 0x140A41BA0 (WmipSecurityMethod.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     RtlHashBytes2 @ 0x14024D064 (RtlHashBytes2.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspChargeQuota @ 0x1403C7410 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403C7860 (PspReturnQuota.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     PspDereferenceQuotaBlock @ 0x1408FFC10 (PspDereferenceQuotaBlock.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObSetSecurityDescriptorInfo(
        __int64 a1,
        _DWORD *a2,
        int a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        __int64 a6)
{
  unsigned int v7; // ebx
  signed __int64 v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rsi
  char *v15; // r12
  int v16; // esi
  PSECURITY_DESCRIPTOR v17; // rdi
  unsigned __int64 v18; // rsi
  _QWORD *v19; // r12
  struct _KTHREAD *v20; // rbp
  volatile signed __int64 *p_WaitListHead; // r14
  struct _KLOCK_ENTRIES *v22; // r9
  LegacyAutoBoost *v23; // rdi
  signed __int64 v24; // rdx
  signed __int64 v25; // rdi
  signed __int64 v26; // rbp
  signed __int64 *p_Lock; // rdi
  unsigned int v28; // esi
  __int16 v29; // dx
  __int64 v30; // rcx
  char *v31; // rcx
  __int64 v32; // rdx
  char *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rdi
  _KPROCESS *Process; // rbp
  __int64 SchedulingGroup; // rbp
  void *v38; // rbx
  __int64 v39; // rbx
  bool v40; // zf
  signed __int64 v41; // rax
  signed __int64 v42; // rdx
  __int64 v43; // rtt
  struct _KLOCK_ENTRIES *v44; // r9
  volatile signed __int64 *v45; // rdi
  signed __int64 v46; // rax
  signed __int64 v47; // rtt
  __int64 Pool2; // rax
  void *v50; // rdx
  struct _KLOCK_ENTRIES *v51; // r9
  struct _KTHREAD *v52; // r12
  unsigned __int64 *v53; // rbp
  volatile signed __int64 *v54; // r14
  AutoBoost *v55; // rax
  void *v56; // rdx
  AutoBoost *v57; // r15
  signed __int64 v58; // rdx
  volatile signed __int64 *i; // rcx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-68h] BYREF
  struct _KTHREAD *v61; // [rsp+48h] [rbp-60h]
  char *v62; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *v63; // [rsp+58h] [rbp-50h]
  void *Buf1; // [rsp+60h] [rbp-48h]
  size_t Size; // [rsp+68h] [rbp-40h]
  ULONG v66; // [rsp+B0h] [rbp+8h]

  v7 = 0;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (AutoBoost *)KeAbPreAcquire(a1 - 32, 0LL, 0LL, a4);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 - 32), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 - 32), v12, a1 - 32);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  v15 = (char *)(*(_QWORD *)(a1 - 8) & 0xFFFFFFFFFFFFFFF0uLL);
  v62 = v15;
  SecurityDescriptor = v15;
  if ( !v15 )
  {
    v16 = -1073741609;
    goto LABEL_83;
  }
  v16 = RtlpSetSecurityObject(a1, *a2, a3, (unsigned int)&SecurityDescriptor, 0, a5, a6, 0LL);
  if ( v16 < 0 )
  {
LABEL_83:
    SecurityDescriptor = 0LL;
    goto LABEL_58;
  }
  v17 = SecurityDescriptor;
  Buf1 = SecurityDescriptor;
  v66 = RtlLengthSecurityDescriptor(SecurityDescriptor);
  Size = v66;
  v18 = RtlHashBytes2((__int64)v17, v66);
  v61 = KeGetCurrentThread();
  v19 = 0LL;
  --v61->KernelApcDisable;
  v20 = (struct _KTHREAD *)((char *)&ObsSecurityDescriptorCache + 16 * (v18 & 0x3FF));
  v63 = v20;
  p_WaitListHead = (volatile signed __int64 *)&v20->Header.WaitListHead;
  v23 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v20, 0LL, 0LL, v22);
  v24 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v20->Header.Lock, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((signed __int64 *)&v20->Header.Lock, 0, v23, v20);
    v24 = 17LL;
  }
  if ( v23 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      goto LABEL_80;
LABEL_12:
    *((_BYTE *)v23 + 10) = 1;
  }
  while ( 1 )
  {
    v25 = *p_WaitListHead;
    if ( *p_WaitListHead )
      break;
LABEL_18:
    if ( v19 )
    {
      *v19 = v25;
      p_WaitListHead = (volatile signed __int64 *)_InterlockedCompareExchange64(
                                                    p_WaitListHead,
                                                    (signed __int64)v19,
                                                    v25);
      if ( (volatile signed __int64 *)v25 == p_WaitListHead )
      {
        if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&v20->Header.Lock, 0LL, v24) )
          ExfReleasePushLockShared((signed __int64 *)&v20->Header.Lock);
        KeAbPostRelease((unsigned __int64)v20);
        KeLeaveCriticalRegionThread((__int64)v61);
        v8 = (signed __int64)(v19 + 4);
        goto LABEL_30;
      }
    }
    else
    {
      if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&v20->Header.Lock, 0LL, v24) )
        ExfReleasePushLockShared((signed __int64 *)&v20->Header.Lock);
      KeAbPostRelease((unsigned __int64)v20);
      KeLeaveCriticalRegionThread((__int64)v61);
      if ( v66 + 40 < v66 || (Pool2 = ExAllocatePool2(0x108uLL), (v19 = (_QWORD *)Pool2) == 0LL) )
      {
        v16 = -1073741670;
        goto LABEL_57;
      }
      v50 = Buf1;
      *(_QWORD *)(Pool2 + 8) = 16LL;
      *(_QWORD *)(Pool2 + 16) = v18;
      *(_DWORD *)(Pool2 + 24) = v66;
      memmove((void *)(Pool2 + 32), v50, v66);
      p_WaitListHead = (volatile signed __int64 *)&v20->Header.WaitListHead;
      --v61->KernelApcDisable;
      v23 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v20, 0LL, 0LL, v51);
      v24 = 17LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v20->Header.Lock, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)&v20->Header.Lock, 0, v23, v20);
        v24 = 17LL;
      }
      if ( v23 )
      {
        if ( (KiAbpGlobalState & 1) == 0 )
          goto LABEL_12;
LABEL_80:
        AutoBoost::KiAbpPostAcquire(v23, (void *)0x11);
      }
    }
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v25 + 16) > v18 )
    {
LABEL_17:
      v20 = v63;
      v24 = 17LL;
      goto LABEL_18;
    }
    if ( *(_QWORD *)(v25 + 16) == v18 && *(_DWORD *)(v25 + 24) == v66 )
    {
      v26 = v25 + 32;
      if ( !memcmp(Buf1, (const void *)(v25 + 32), Size) )
        break;
    }
    p_WaitListHead = (volatile signed __int64 *)v25;
    v25 = *(_QWORD *)v25;
    if ( !v25 )
      goto LABEL_17;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 8), 0x10uLL) <= 0 )
    __fastfail(0xEu);
  p_Lock = (signed __int64 *)&v63->Header.Lock;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v63->Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Lock);
  KeAbPostRelease((unsigned __int64)p_Lock);
  KeLeaveCriticalRegionThread((__int64)v61);
  v8 = v26;
  if ( v19 )
    ExFreePoolWithTag(v19, 0x6353624Fu);
LABEL_30:
  v28 = 0;
  if ( *(_BYTE *)SecurityDescriptor == 1 )
  {
    v29 = *((_WORD *)SecurityDescriptor + 1);
    if ( v29 >= 0 )
    {
      v31 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    }
    else
    {
      v30 = *((unsigned int *)SecurityDescriptor + 2);
      if ( (_DWORD)v30 )
        v31 = (char *)SecurityDescriptor + v30;
      else
        v31 = 0LL;
    }
    if ( (v29 & 4) != 0 )
    {
      if ( v29 >= 0 )
      {
        v33 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v32 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v32 )
          v33 = (char *)SecurityDescriptor + v32;
        else
          v33 = 0LL;
      }
    }
    else
    {
      v33 = 0LL;
    }
    if ( v31 )
      v28 = (4 * (unsigned __int8)v31[1] + 11) & 0xFFFFFFFC;
    if ( v33 )
      v28 += (*((unsigned __int16 *)v33 + 1) + 3) & 0xFFFFFFFC;
    v34 = a1 - 48;
    if ( *(_QWORD *)(a1 - 16) != 1LL )
    {
      if ( (*(_BYTE *)(v34 + 26) & 8) != 0 )
        v35 = v34 - ObpInfoMaskToOffset[*(_BYTE *)(v34 + 26) & 0xF];
      else
        v35 = 0LL;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process == PsInitialSystemProcess )
      {
        SchedulingGroup = 1LL;
      }
      else
      {
        SchedulingGroup = (__int64)Process[1].SchedulingGroup;
        if ( v28 && (int)PspChargeQuota(SchedulingGroup, 0LL, 1, v28) < 0
          || (_InterlockedIncrement((volatile signed __int32 *)(SchedulingGroup + 512)), !SchedulingGroup) )
        {
          v16 = -1073741756;
          goto LABEL_57;
        }
      }
      v38 = *(void **)(v35 + 16);
      if ( (unsigned __int64)v38 >= 2 )
      {
        if ( *(_DWORD *)(v35 + 8) )
          PspReturnQuota(*(__int64 **)(v35 + 16), 0LL, 1u, *(unsigned int *)(v35 + 8));
        PspDereferenceQuotaBlock(v38);
      }
      *(_DWORD *)(v35 + 8) = v28;
      *(_QWORD *)(v35 + 16) = SchedulingGroup;
    }
    v16 = 0;
    v39 = v8 | 0xF;
    v40 = v8 == 0;
    v8 = 0LL;
    if ( v40 )
      v39 = 0LL;
    v7 = (_InterlockedExchange64((volatile __int64 *)(a1 - 8), v39) & 0xF) + 1;
  }
  else
  {
    v16 = -1073741736;
  }
LABEL_57:
  v15 = v62;
LABEL_58:
  _m_prefetchw((const void *)(a1 - 32));
  v41 = *(_QWORD *)(a1 - 32);
  v42 = v41 - 16;
  if ( (v41 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v42 = 0LL;
  if ( (v41 & 2) != 0
    || (v43 = *(_QWORD *)(a1 - 32), v43 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 32), v42, v41)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 - 32));
  }
  KeAbPostRelease(a1 - 32);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v8 )
    ObDereferenceSecurityDescriptor(v8, 16LL);
  if ( v15 && v7 )
  {
    v45 = (volatile signed __int64 *)(v15 - 32);
    _m_prefetchw(v15 - 24);
    v46 = *((_QWORD *)v15 - 3);
    while ( v46 - v7 > 0 )
    {
      v47 = v46;
      v46 = _InterlockedCompareExchange64(v45 + 1, v46 - v7, v46);
      if ( v47 == v46 )
        goto LABEL_69;
    }
    if ( v46 != v7 )
      __fastfail(0xEu);
    v52 = KeGetCurrentThread();
    v53 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * ((_DWORD)v45[2] & 0x3FF));
    --v52->KernelApcDisable;
    v54 = (volatile signed __int64 *)(v53 + 1);
    v55 = (AutoBoost *)KeAbPreAcquire((__int64)v53, 0LL, 0LL, v44);
    v57 = v55;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v53, 0LL) )
      ExfAcquirePushLockExclusiveEx(v53, v55, (__int64)v53);
    if ( v57 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v57, v56);
      else
        *((_BYTE *)v57 + 10) = 1;
    }
    v58 = _InterlockedExchangeAdd64(v45 + 1, -v7) - v7;
    if ( v58 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v53);
      KeAbPostRelease((unsigned __int64)v53);
      KeLeaveCriticalRegionThread((__int64)v52);
    }
    else
    {
      if ( v58 )
        __fastfail(0xEu);
      for ( i = (volatile signed __int64 *)*v54; i != v45; i = (volatile signed __int64 *)*i )
        v54 = i;
      *v54 = *v45;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v53);
      KeAbPostRelease((unsigned __int64)v53);
      KeLeaveCriticalRegionThread((__int64)v52);
      ExFreePoolWithTag((PVOID)v45, 0x6353624Fu);
    }
  }
LABEL_69:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  return (unsigned int)v16;
}
