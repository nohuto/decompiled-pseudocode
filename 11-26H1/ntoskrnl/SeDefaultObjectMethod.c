/*
 * XREFs of SeDefaultObjectMethod @ 0x1408FD750
 * Callers:
 *     <none>
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
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1408F4190 (SeQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408F4D90 (ObpReferenceSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     PspDereferenceQuotaBlock @ 0x1408FFC10 (PspDereferenceQuotaBlock.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        __int64 a1,
        int a2,
        DWORD *a3,
        struct _KLOCK_ENTRIES *a4,
        ULONG *Length,
        __int64 *a6,
        int a7,
        __int64 a8)
{
  __int64 v11; // rbx
  char v12; // di
  unsigned int v13; // edi
  _QWORD *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 result; // rax
  int v18; // edx
  size_t v19; // r13
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  signed __int64 *v22; // r14
  _QWORD *v23; // r12
  volatile signed __int64 *v24; // rsi
  struct _KLOCK_ENTRIES *v25; // r9
  LegacyAutoBoost *v26; // rbx
  signed __int64 v27; // rdx
  signed __int64 v28; // rbx
  _QWORD *v29; // rsi
  unsigned int v30; // edi
  struct _KTHREAD *v31; // rax
  unsigned int v32; // ebx
  signed __int64 v33; // r12
  AutoBoost *v34; // rax
  void *v35; // rdx
  AutoBoost *v36; // r14
  char *v37; // r14
  unsigned int v38; // edi
  PSECURITY_DESCRIPTOR v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rsi
  _QWORD *v42; // rbp
  volatile signed __int64 *v43; // r14
  struct _KLOCK_ENTRIES *v44; // r9
  LegacyAutoBoost *v45; // rax
  signed __int64 *v46; // r10
  LegacyAutoBoost *v47; // rdi
  signed __int64 v48; // rdx
  signed __int64 v49; // rdi
  unsigned int v50; // esi
  __int16 v51; // dx
  __int64 v52; // rcx
  char *v53; // rcx
  __int64 v54; // rdx
  char *v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rdi
  _KPROCESS *Process; // rbp
  __int64 SchedulingGroup; // rbp
  void *v60; // rbx
  __int64 v61; // rbx
  bool v62; // zf
  signed __int64 v63; // rax
  signed __int64 v64; // rdx
  __int64 v65; // rtt
  struct _KLOCK_ENTRIES *v66; // r9
  volatile signed __int64 *v67; // rsi
  signed __int64 v68; // rax
  signed __int64 v69; // rtt
  __int64 v70; // rax
  struct _KLOCK_ENTRIES *v71; // r9
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v73; // rsi
  _QWORD **v74; // r14
  AutoBoost *v75; // rax
  void *v76; // rdx
  AutoBoost *v77; // rbp
  signed __int64 v78; // rcx
  _QWORD *i; // rcx
  __int64 Pool2; // rax
  void *v81; // rdx
  struct _KLOCK_ENTRIES *v82; // r9
  LegacyAutoBoost *v83; // rax
  unsigned __int64 v84; // rbx
  signed __int64 v85; // rax
  signed __int64 v86; // rtt
  struct _KTHREAD *v87; // r12
  unsigned __int64 *v88; // rbp
  volatile signed __int64 *v89; // r14
  AutoBoost *v90; // rax
  void *v91; // rdx
  AutoBoost *v92; // r15
  signed __int64 v93; // rcx
  volatile signed __int64 *j; // rcx
  signed __int64 *v95; // [rsp+40h] [rbp-88h]
  struct _KTHREAD *v96; // [rsp+48h] [rbp-80h]
  char *v97; // [rsp+48h] [rbp-80h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h]
  struct _KTHREAD *v100; // [rsp+68h] [rbp-60h]
  void *Buf1; // [rsp+70h] [rbp-58h] BYREF
  size_t Size; // [rsp+80h] [rbp-48h]
  ULONG v104; // [rsp+D8h] [rbp+10h]

  if ( a2 == 2 )
  {
    v11 = *a6;
    v12 = *a6;
    *a6 = 0LL;
    v13 = (v12 & 0xF) + 1;
    v14 = (_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
    _m_prefetchw(v14 + 1);
    v15 = v14[1];
    while ( v15 - v13 > 0 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64(v14 + 1, v15 - v13, v15);
      if ( v16 == v15 )
        return 0LL;
    }
    if ( v15 != v13 )
      __fastfail(0xEu);
    CurrentThread = KeGetCurrentThread();
    v73 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * ((_DWORD)v14[2] & 0x3FF));
    --CurrentThread->KernelApcDisable;
    v74 = (_QWORD **)(v73 + 1);
    v75 = (AutoBoost *)KeAbPreAcquire((__int64)v73, 0LL, 0LL, a4);
    v77 = v75;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v73, 0LL) )
      ExfAcquirePushLockExclusiveEx(v73, v75, (__int64)v73);
    if ( v77 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v77, v76);
      else
        *((_BYTE *)v77 + 10) = 1;
    }
    v78 = _InterlockedExchangeAdd64(v14 + 1, -v13) - v13;
    if ( v78 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v73, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v73);
      KeAbPostRelease((unsigned __int64)v73);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      if ( v78 )
        __fastfail(0xEu);
      for ( i = *v74; i != v14; i = (_QWORD *)*i )
        v74 = (_QWORD **)i;
      *v74 = (_QWORD *)*v14;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v73, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v73);
      KeAbPostRelease((unsigned __int64)v73);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      ExFreePoolWithTag(v14, 0x6353624Fu);
    }
    return 0LL;
  }
  if ( !a2 )
  {
    v31 = KeGetCurrentThread();
    v32 = 0;
    v33 = 0LL;
    --v31->KernelApcDisable;
    v34 = (AutoBoost *)KeAbPreAcquire(a1 - 32, 0LL, 0LL, a4);
    v36 = v34;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 - 32), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 - 32), v34, a1 - 32);
    if ( v36 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v36, v35);
      else
        *((_BYTE *)v36 + 10) = 1;
    }
    v37 = (char *)(*(_QWORD *)(a1 - 8) & 0xFFFFFFFFFFFFFFF0uLL);
    v97 = v37;
    SecurityDescriptor = v37;
    if ( v37 )
    {
      v38 = RtlpSetSecurityObject(a1, *a3, (_DWORD)a4, (unsigned int)&SecurityDescriptor, 0, a7, a8, 0LL);
      if ( (v38 & 0x80000000) == 0 )
      {
        v39 = SecurityDescriptor;
        Buf1 = SecurityDescriptor;
        v104 = RtlLengthSecurityDescriptor(SecurityDescriptor);
        Size = v104;
        v40 = RtlHashBytes2((__int64)v39, v104);
        v100 = KeGetCurrentThread();
        v41 = v40;
        P = 0LL;
        --v100->KernelApcDisable;
        v95 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (v40 & 0x3FF));
        v42 = 0LL;
        v43 = v95 + 1;
        v45 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v95, 0LL, 0LL, v44);
        v46 = v95;
        v47 = v45;
        v48 = 17LL;
        if ( _InterlockedCompareExchange64(v95, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v95, 0, v45, (struct _KTHREAD *)v95);
          v46 = v95;
          v48 = 17LL;
        }
        if ( v47 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            goto LABEL_136;
LABEL_46:
          *((_BYTE *)v47 + 10) = 1;
        }
        while ( 1 )
        {
          v49 = *v43;
          if ( *v43 )
            break;
LABEL_52:
          if ( v42 )
          {
            *v42 = v49;
            v43 = (volatile signed __int64 *)_InterlockedCompareExchange64(v43, (signed __int64)v42, v49);
            if ( (volatile signed __int64 *)v49 == v43 )
            {
              if ( v48 != _InterlockedCompareExchange64(v46, 0LL, v48) )
              {
                ExfReleasePushLockShared(v46);
                v46 = v95;
              }
              KeAbPostRelease((unsigned __int64)v46);
              KeLeaveCriticalRegionThread((__int64)v100);
              v33 = (signed __int64)(v42 + 4);
              goto LABEL_64;
            }
          }
          else
          {
            if ( v48 != _InterlockedCompareExchange64(v46, 0LL, v48) )
            {
              ExfReleasePushLockShared(v46);
              v46 = v95;
            }
            KeAbPostRelease((unsigned __int64)v46);
            KeLeaveCriticalRegionThread((__int64)v100);
            if ( v104 + 40 < v104
              || (Pool2 = ExAllocatePool2(0x108uLL), P = (PVOID)Pool2, (v42 = (_QWORD *)Pool2) == 0LL) )
            {
              v38 = -1073741670;
              goto LABEL_91;
            }
            v81 = Buf1;
            *(_QWORD *)(Pool2 + 8) = 16LL;
            *(_QWORD *)(Pool2 + 16) = v41;
            *(_DWORD *)(Pool2 + 24) = v104;
            memmove((void *)(Pool2 + 32), v81, v104);
            v43 = v95 + 1;
            --v100->KernelApcDisable;
            v83 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v95, 0LL, 0LL, v82);
            v46 = v95;
            v47 = v83;
            v48 = 17LL;
            if ( _InterlockedCompareExchange64(v95, 17LL, 0LL) )
            {
              ExfAcquirePushLockSharedEx(v95, 0, v83, (struct _KTHREAD *)v95);
              v46 = v95;
              v48 = 17LL;
            }
            if ( v47 )
            {
              if ( (KiAbpGlobalState & 1) == 0 )
                goto LABEL_46;
LABEL_136:
              AutoBoost::KiAbpPostAcquire(v47, (void *)0x11);
            }
          }
        }
        while ( 1 )
        {
          if ( *(_QWORD *)(v49 + 16) > v41 )
          {
LABEL_51:
            v46 = v95;
            v48 = 17LL;
            v42 = P;
            goto LABEL_52;
          }
          if ( *(_QWORD *)(v49 + 16) == v41
            && *(_DWORD *)(v49 + 24) == v104
            && !memcmp(Buf1, (const void *)(v49 + 32), Size) )
          {
            break;
          }
          v43 = (volatile signed __int64 *)v49;
          v49 = *(_QWORD *)v49;
          if ( !v49 )
            goto LABEL_51;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 8), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64(v95, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v95);
        KeAbPostRelease((unsigned __int64)v95);
        KeLeaveCriticalRegionThread((__int64)v100);
        v33 = v49 + 32;
        if ( P )
          ExFreePoolWithTag(P, 0x6353624Fu);
LABEL_64:
        v50 = 0;
        if ( *(_BYTE *)SecurityDescriptor == 1 )
        {
          v51 = *((_WORD *)SecurityDescriptor + 1);
          if ( v51 >= 0 )
          {
            v53 = (char *)*((_QWORD *)SecurityDescriptor + 2);
          }
          else
          {
            v52 = *((unsigned int *)SecurityDescriptor + 2);
            if ( (_DWORD)v52 )
              v53 = (char *)SecurityDescriptor + v52;
            else
              v53 = 0LL;
          }
          if ( (v51 & 4) != 0 )
          {
            if ( v51 >= 0 )
            {
              v55 = (char *)*((_QWORD *)SecurityDescriptor + 4);
            }
            else
            {
              v54 = *((unsigned int *)SecurityDescriptor + 4);
              if ( (_DWORD)v54 )
                v55 = (char *)SecurityDescriptor + v54;
              else
                v55 = 0LL;
            }
          }
          else
          {
            v55 = 0LL;
          }
          if ( v53 )
            v50 = (4 * (unsigned __int8)v53[1] + 11) & 0xFFFFFFFC;
          if ( v55 )
            v50 += (*((unsigned __int16 *)v55 + 1) + 3) & 0xFFFFFFFC;
          v56 = a1 - 48;
          if ( *(_QWORD *)(a1 - 16) != 1LL )
          {
            if ( (*(_BYTE *)(v56 + 26) & 8) != 0 )
              v57 = v56 - ObpInfoMaskToOffset[*(_BYTE *)(v56 + 26) & 0xF];
            else
              v57 = 0LL;
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process == PsInitialSystemProcess )
            {
              SchedulingGroup = 1LL;
            }
            else
            {
              SchedulingGroup = (__int64)Process[1].SchedulingGroup;
              if ( v50 && (int)PspChargeQuota(SchedulingGroup, 0LL, 1, v50) < 0
                || (_InterlockedIncrement((volatile signed __int32 *)(SchedulingGroup + 512)), !SchedulingGroup) )
              {
                v38 = -1073741756;
                goto LABEL_91;
              }
            }
            v60 = *(void **)(v57 + 16);
            if ( (unsigned __int64)v60 >= 2 )
            {
              if ( *(_DWORD *)(v57 + 8) )
                PspReturnQuota(*(__int64 **)(v57 + 16), 0LL, 1u, *(unsigned int *)(v57 + 8));
              PspDereferenceQuotaBlock(v60);
            }
            *(_DWORD *)(v57 + 8) = v50;
            *(_QWORD *)(v57 + 16) = SchedulingGroup;
          }
          v38 = 0;
          v61 = v33 | 0xF;
          v62 = v33 == 0;
          v33 = 0LL;
          if ( v62 )
            v61 = 0LL;
          v32 = (_InterlockedExchange64((volatile __int64 *)(a1 - 8), v61) & 0xF) + 1;
        }
        else
        {
          v38 = -1073741736;
        }
LABEL_91:
        v37 = v97;
        goto LABEL_92;
      }
    }
    else
    {
      v38 = -1073741609;
    }
    SecurityDescriptor = 0LL;
LABEL_92:
    _m_prefetchw((const void *)(a1 - 32));
    v63 = *(_QWORD *)(a1 - 32);
    v64 = v63 - 16;
    if ( (v63 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v64 = 0LL;
    if ( (v63 & 2) != 0
      || (v65 = *(_QWORD *)(a1 - 32),
          v65 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 32), v64, v63)) )
    {
      ExfReleasePushLock((_QWORD *)(a1 - 32));
    }
    KeAbPostRelease(a1 - 32);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v33 )
      ObDereferenceSecurityDescriptor(v33, 16LL);
    if ( v37 && v32 )
    {
      v67 = (volatile signed __int64 *)(v37 - 32);
      _m_prefetchw(v37 - 24);
      v68 = *((_QWORD *)v37 - 3);
      while ( v68 - v32 > 0 )
      {
        v69 = v68;
        v68 = _InterlockedCompareExchange64(v67 + 1, v68 - v32, v68);
        if ( v69 == v68 )
          goto LABEL_103;
      }
      if ( v68 != v32 )
        __fastfail(0xEu);
      v87 = KeGetCurrentThread();
      v88 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * ((_DWORD)v67[2] & 0x3FF));
      --v87->KernelApcDisable;
      v89 = (volatile signed __int64 *)(v88 + 1);
      v90 = (AutoBoost *)KeAbPreAcquire((__int64)v88, 0LL, 0LL, v66);
      v92 = v90;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v88, 0LL) )
        ExfAcquirePushLockExclusiveEx(v88, v90, (__int64)v88);
      if ( v92 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v92, v91);
        else
          *((_BYTE *)v92 + 10) = 1;
      }
      v93 = _InterlockedExchangeAdd64(v67 + 1, -v32) - v32;
      if ( v93 > 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v88);
        KeAbPostRelease((unsigned __int64)v88);
        KeLeaveCriticalRegionThread((__int64)v87);
      }
      else
      {
        if ( v93 )
          __fastfail(0xEu);
        for ( j = (volatile signed __int64 *)*v89; j != v67; j = (volatile signed __int64 *)*j )
          v89 = j;
        *v89 = *v67;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v88);
        KeAbPostRelease((unsigned __int64)v88);
        KeLeaveCriticalRegionThread((__int64)v87);
        ExFreePoolWithTag((PVOID)v67, 0x6353624Fu);
      }
    }
LABEL_103:
    if ( SecurityDescriptor )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    return v38;
  }
  v18 = a2 - 1;
  if ( v18 )
  {
    if ( v18 != 2 )
      KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
    if ( a4 )
    {
      v19 = RtlLengthSecurityDescriptor(a4);
      v20 = RtlHashBytes2((__int64)a4, v19);
      v96 = KeGetCurrentThread();
      v21 = v20;
      --v96->KernelApcDisable;
      v22 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (v20 & 0x3FF));
      v23 = 0LL;
      v24 = v22 + 1;
      v26 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v22, 0LL, 0LL, v25);
      v27 = 17LL;
      if ( _InterlockedCompareExchange64(v22, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(v22, 0, v26, (struct _KTHREAD *)v22);
        v27 = 17LL;
      }
      if ( v26 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          goto LABEL_114;
LABEL_14:
        *((_BYTE *)v26 + 10) = 1;
      }
      while ( 1 )
      {
        v28 = *v24;
        if ( *v24 )
          break;
LABEL_20:
        if ( v23 )
        {
          *v23 = v28;
          v24 = (volatile signed __int64 *)_InterlockedCompareExchange64(v24, (signed __int64)v23, v28);
          if ( (volatile signed __int64 *)v28 == v24 )
          {
            if ( v27 != _InterlockedCompareExchange64(v22, 0LL, v27) )
              ExfReleasePushLockShared(v22);
            KeAbPostRelease((unsigned __int64)v22);
            KeLeaveCriticalRegionThread((__int64)v96);
            v29 = v23 + 4;
            goto LABEL_32;
          }
        }
        else
        {
          if ( v27 != _InterlockedCompareExchange64(v22, 0LL, v27) )
            ExfReleasePushLockShared(v22);
          KeAbPostRelease((unsigned __int64)v22);
          KeLeaveCriticalRegionThread((__int64)v96);
          if ( (int)v19 + 40 < (unsigned int)v19 )
            return (unsigned int)-1073741670;
          v70 = ExAllocatePool2(0x108uLL);
          v23 = (_QWORD *)v70;
          if ( !v70 )
            return (unsigned int)-1073741670;
          *(_QWORD *)(v70 + 8) = 16LL;
          *(_QWORD *)(v70 + 16) = v21;
          *(_DWORD *)(v70 + 24) = v19;
          memmove((void *)(v70 + 32), a4, v19);
          --v96->KernelApcDisable;
          v24 = v22 + 1;
          v26 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v22, 0LL, 0LL, v71);
          v27 = 17LL;
          if ( _InterlockedCompareExchange64(v22, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(v22, 0, v26, (struct _KTHREAD *)v22);
            v27 = 17LL;
          }
          if ( v26 )
          {
            if ( (KiAbpGlobalState & 1) == 0 )
              goto LABEL_14;
LABEL_114:
            AutoBoost::KiAbpPostAcquire(v26, (void *)0x11);
          }
        }
      }
      while ( 1 )
      {
        if ( *(_QWORD *)(v28 + 16) > v21 )
        {
LABEL_19:
          v27 = 17LL;
          goto LABEL_20;
        }
        if ( *(_QWORD *)(v28 + 16) == v21 && *(_DWORD *)(v28 + 24) == (_DWORD)v19 )
        {
          v29 = (_QWORD *)(v28 + 32);
          if ( !memcmp(a4, (const void *)(v28 + 32), v19) )
            break;
        }
        v24 = (volatile signed __int64 *)v28;
        v28 = *(_QWORD *)v28;
        if ( !v28 )
          goto LABEL_19;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v22);
      KeAbPostRelease((unsigned __int64)v22);
      KeLeaveCriticalRegionThread((__int64)v96);
      if ( v23 )
        ExFreePoolWithTag(v23, 0x6353624Fu);
LABEL_32:
      v30 = 0;
      ExFreePoolWithTag(a4, 0);
      if ( v29 )
      {
        *(_QWORD *)(a1 - 8) = (char *)v29 + 15;
        return v30;
      }
      result = 0LL;
      *(_QWORD *)(a1 - 8) = 0LL;
    }
    else
    {
      *(_QWORD *)(a1 - 8) = 0LL;
      return 0LL;
    }
    return result;
  }
  Buf1 = (void *)ObpReferenceSecurityDescriptor(a1 - 48);
  v84 = (unsigned __int64)Buf1;
  v38 = SeQuerySecurityDescriptorInfo(a3, a4, Length, &Buf1);
  if ( !v84 )
    return v38;
  _m_prefetchw((const void *)(a1 - 8));
  v85 = *(_QWORD *)(a1 - 8);
  while ( (v84 ^ v85) < 0xF )
  {
    v86 = v85;
    v85 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 8), v85 + 1, v85);
    if ( v86 == v85 )
      return v38;
  }
  ObDereferenceSecurityDescriptor(v84, 1LL);
  return v38;
}
