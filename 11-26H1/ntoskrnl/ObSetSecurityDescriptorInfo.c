/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x1409214E0
 * Callers:
 *     WmipSecurityMethod @ 0x140A2FD20 (WmipSecurityMethod.c)
 * Callees:
 *     RtlHashBytes2 @ 0x14024B704 (RtlHashBytes2.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PspChargeQuota @ 0x1403BD5A0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403BD9F0 (PspReturnQuota.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     RtlLengthSecurityDescriptor @ 0x1409228D0 (RtlLengthSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     PspDereferenceQuotaBlock @ 0x140924100 (PspDereferenceQuotaBlock.c)
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  signed __int64 v28; // rbp
  signed __int64 *p_Lock; // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned int v32; // esi
  __int16 v33; // dx
  __int64 v34; // rcx
  char *v35; // rcx
  __int64 v36; // rdx
  char *v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rdi
  _KPROCESS *Process; // rbp
  __int64 SchedulingGroup; // rbp
  void *v42; // rbx
  __int64 v43; // rbx
  bool v44; // zf
  signed __int64 v45; // rax
  signed __int64 v46; // rdx
  __int64 v47; // rtt
  __int64 v48; // rdx
  __int64 v49; // r8
  struct _KLOCK_ENTRIES *v50; // r9
  volatile signed __int64 *v51; // rdi
  signed __int64 v52; // rax
  signed __int64 v53; // rtt
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 Pool2; // rax
  void *v58; // rdx
  struct _KLOCK_ENTRIES *v59; // r9
  struct _KTHREAD *v60; // r12
  unsigned __int64 *v61; // rbp
  volatile signed __int64 *v62; // r14
  AutoBoost *v63; // rax
  void *v64; // rdx
  AutoBoost *v65; // r15
  signed __int64 v66; // rdx
  volatile signed __int64 *i; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-68h] BYREF
  struct _KTHREAD *v73; // [rsp+48h] [rbp-60h]
  char *v74; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *v75; // [rsp+58h] [rbp-50h]
  void *Buf1; // [rsp+60h] [rbp-48h]
  size_t Size; // [rsp+68h] [rbp-40h]
  ULONG v78; // [rsp+B0h] [rbp+8h]

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
  v74 = v15;
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
  v78 = RtlLengthSecurityDescriptor(SecurityDescriptor);
  Size = v78;
  v18 = RtlHashBytes2((__int64)v17, v78);
  v73 = KeGetCurrentThread();
  v19 = 0LL;
  --v73->KernelApcDisable;
  v20 = (struct _KTHREAD *)((char *)&ObsSecurityDescriptorCache + 16 * (v18 & 0x3FF));
  v75 = v20;
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
        KeLeaveCriticalRegionThread((__int64)v73, v26, v27);
        v8 = (signed __int64)(v19 + 4);
        goto LABEL_30;
      }
    }
    else
    {
      if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&v20->Header.Lock, 0LL, v24) )
        ExfReleasePushLockShared((signed __int64 *)&v20->Header.Lock);
      KeAbPostRelease((unsigned __int64)v20);
      KeLeaveCriticalRegionThread((__int64)v73, v55, v56);
      if ( v78 + 40 < v78 || (Pool2 = ExAllocatePool2(0x108uLL), (v19 = (_QWORD *)Pool2) == 0LL) )
      {
        v16 = -1073741670;
        goto LABEL_57;
      }
      v58 = Buf1;
      *(_QWORD *)(Pool2 + 8) = 16LL;
      *(_QWORD *)(Pool2 + 16) = v18;
      *(_DWORD *)(Pool2 + 24) = v78;
      memmove((void *)(Pool2 + 32), v58, v78);
      p_WaitListHead = (volatile signed __int64 *)&v20->Header.WaitListHead;
      --v73->KernelApcDisable;
      v23 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v20, 0LL, 0LL, v59);
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
      v20 = v75;
      v24 = 17LL;
      goto LABEL_18;
    }
    if ( *(_QWORD *)(v25 + 16) == v18 && *(_DWORD *)(v25 + 24) == v78 )
    {
      v28 = v25 + 32;
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
  p_Lock = (signed __int64 *)&v75->Header.Lock;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v75->Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Lock);
  KeAbPostRelease((unsigned __int64)p_Lock);
  KeLeaveCriticalRegionThread((__int64)v73, v30, v31);
  v8 = v28;
  if ( v19 )
    ExFreePoolWithTag(v19, 0x6353624Fu);
LABEL_30:
  v32 = 0;
  if ( *(_BYTE *)SecurityDescriptor == 1 )
  {
    v33 = *((_WORD *)SecurityDescriptor + 1);
    if ( v33 >= 0 )
    {
      v35 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    }
    else
    {
      v34 = *((unsigned int *)SecurityDescriptor + 2);
      if ( (_DWORD)v34 )
        v35 = (char *)SecurityDescriptor + v34;
      else
        v35 = 0LL;
    }
    if ( (v33 & 4) != 0 )
    {
      if ( v33 >= 0 )
      {
        v37 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v36 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v36 )
          v37 = (char *)SecurityDescriptor + v36;
        else
          v37 = 0LL;
      }
    }
    else
    {
      v37 = 0LL;
    }
    if ( v35 )
      v32 = (4 * (unsigned __int8)v35[1] + 11) & 0xFFFFFFFC;
    if ( v37 )
      v32 += (*((unsigned __int16 *)v37 + 1) + 3) & 0xFFFFFFFC;
    v38 = a1 - 48;
    if ( *(_QWORD *)(a1 - 16) != 1LL )
    {
      if ( (*(_BYTE *)(v38 + 26) & 8) != 0 )
        v39 = v38 - ObpInfoMaskToOffset[*(_BYTE *)(v38 + 26) & 0xF];
      else
        v39 = 0LL;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process == PsInitialSystemProcess )
      {
        SchedulingGroup = 1LL;
      }
      else
      {
        SchedulingGroup = (__int64)Process[1].SchedulingGroup;
        if ( v32 && (int)PspChargeQuota(SchedulingGroup, 0LL, 1, v32) < 0
          || (_InterlockedIncrement((volatile signed __int32 *)(SchedulingGroup + 512)), !SchedulingGroup) )
        {
          v16 = -1073741756;
          goto LABEL_57;
        }
      }
      v42 = *(void **)(v39 + 16);
      if ( (unsigned __int64)v42 >= 2 )
      {
        if ( *(_DWORD *)(v39 + 8) )
          PspReturnQuota(*(__int64 **)(v39 + 16), 0LL, 1u, *(unsigned int *)(v39 + 8));
        PspDereferenceQuotaBlock(v42);
      }
      *(_DWORD *)(v39 + 8) = v32;
      *(_QWORD *)(v39 + 16) = SchedulingGroup;
    }
    v16 = 0;
    v43 = v8 | 0xF;
    v44 = v8 == 0;
    v8 = 0LL;
    if ( v44 )
      v43 = 0LL;
    v7 = (_InterlockedExchange64((volatile __int64 *)(a1 - 8), v43) & 0xF) + 1;
  }
  else
  {
    v16 = -1073741736;
  }
LABEL_57:
  v15 = v74;
LABEL_58:
  _m_prefetchw((const void *)(a1 - 32));
  v45 = *(_QWORD *)(a1 - 32);
  v46 = v45 - 16;
  if ( (v45 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v46 = 0LL;
  if ( (v45 & 2) != 0
    || (v47 = *(_QWORD *)(a1 - 32), v47 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 32), v46, v45)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 - 32));
  }
  KeAbPostRelease(a1 - 32);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v48, v49);
  if ( v8 )
    ObDereferenceSecurityDescriptor(v8, 16LL);
  if ( v15 && v7 )
  {
    v51 = (volatile signed __int64 *)(v15 - 32);
    _m_prefetchw(v15 - 24);
    v52 = *((_QWORD *)v15 - 3);
    while ( v52 - v7 > 0 )
    {
      v53 = v52;
      v52 = _InterlockedCompareExchange64(v51 + 1, v52 - v7, v52);
      if ( v53 == v52 )
        goto LABEL_69;
    }
    if ( v52 != v7 )
      __fastfail(0xEu);
    v60 = KeGetCurrentThread();
    v61 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * ((_DWORD)v51[2] & 0x3FF));
    --v60->KernelApcDisable;
    v62 = (volatile signed __int64 *)(v61 + 1);
    v63 = (AutoBoost *)KeAbPreAcquire((__int64)v61, 0LL, 0LL, v50);
    v65 = v63;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v61, 0LL) )
      ExfAcquirePushLockExclusiveEx(v61, v63, (__int64)v61);
    if ( v65 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v65, v64);
      else
        *((_BYTE *)v65 + 10) = 1;
    }
    v66 = _InterlockedExchangeAdd64(v51 + 1, -v7) - v7;
    if ( v66 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v61, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v61);
      KeAbPostRelease((unsigned __int64)v61);
      KeLeaveCriticalRegionThread((__int64)v60, v70, v71);
    }
    else
    {
      if ( v66 )
        __fastfail(0xEu);
      for ( i = (volatile signed __int64 *)*v62; i != v51; i = (volatile signed __int64 *)*i )
        v62 = i;
      *v62 = *v51;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v61, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v61);
      KeAbPostRelease((unsigned __int64)v61);
      KeLeaveCriticalRegionThread((__int64)v60, v68, v69);
      ExFreePoolWithTag((PVOID)v51, 0x6353624Fu);
    }
  }
LABEL_69:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  return (unsigned int)v16;
}
