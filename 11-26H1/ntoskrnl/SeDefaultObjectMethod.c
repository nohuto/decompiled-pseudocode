/*
 * XREFs of SeDefaultObjectMethod @ 0x140921C40
 * Callers:
 *     <none>
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
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1408EDBD0 (SeQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408EE7D0 (ObpReferenceSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1409228D0 (RtlLengthSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     PspDereferenceQuotaBlock @ 0x140924100 (PspDereferenceQuotaBlock.c)
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        __int64 a1,
        int a2,
        ULONG *a3,
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
  __int64 v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned int v34; // edi
  struct _KTHREAD *v35; // rax
  unsigned int v36; // ebx
  signed __int64 v37; // r12
  AutoBoost *v38; // rax
  void *v39; // rdx
  AutoBoost *v40; // r14
  char *v41; // r14
  unsigned int v42; // edi
  PSECURITY_DESCRIPTOR v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // rsi
  _QWORD *v46; // rbp
  volatile signed __int64 *v47; // r14
  struct _KLOCK_ENTRIES *v48; // r9
  LegacyAutoBoost *v49; // rax
  signed __int64 *v50; // r10
  LegacyAutoBoost *v51; // rdi
  signed __int64 v52; // rdx
  signed __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // r8
  unsigned int v58; // esi
  __int16 v59; // dx
  __int64 v60; // rcx
  char *v61; // rcx
  __int64 v62; // rdx
  char *v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rdi
  _KPROCESS *Process; // rbp
  __int64 SchedulingGroup; // rbp
  void *v68; // rbx
  __int64 v69; // rbx
  bool v70; // zf
  signed __int64 v71; // rax
  signed __int64 v72; // rdx
  __int64 v73; // rtt
  __int64 v74; // rdx
  __int64 v75; // r8
  struct _KLOCK_ENTRIES *v76; // r9
  volatile signed __int64 *v77; // rsi
  signed __int64 v78; // rax
  signed __int64 v79; // rtt
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rax
  struct _KLOCK_ENTRIES *v83; // r9
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v85; // rsi
  _QWORD **v86; // r14
  AutoBoost *v87; // rax
  void *v88; // rdx
  AutoBoost *v89; // rbp
  signed __int64 v90; // rcx
  _QWORD *i; // rcx
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 Pool2; // rax
  void *v97; // rdx
  struct _KLOCK_ENTRIES *v98; // r9
  LegacyAutoBoost *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  unsigned __int64 v102; // rbx
  signed __int64 v103; // rax
  signed __int64 v104; // rtt
  struct _KTHREAD *v105; // r12
  unsigned __int64 *v106; // rbp
  volatile signed __int64 *v107; // r14
  AutoBoost *v108; // rax
  void *v109; // rdx
  AutoBoost *v110; // r15
  signed __int64 v111; // rcx
  volatile signed __int64 *j; // rcx
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // rdx
  __int64 v116; // r8
  signed __int64 *v117; // [rsp+40h] [rbp-88h]
  struct _KTHREAD *v118; // [rsp+48h] [rbp-80h]
  char *v119; // [rsp+48h] [rbp-80h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h]
  struct _KTHREAD *v122; // [rsp+68h] [rbp-60h]
  void *Buf1; // [rsp+70h] [rbp-58h] BYREF
  size_t Size; // [rsp+80h] [rbp-48h]
  ULONG v126; // [rsp+D8h] [rbp+10h]

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
    v85 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * ((_DWORD)v14[2] & 0x3FF));
    --CurrentThread->KernelApcDisable;
    v86 = (_QWORD **)(v85 + 1);
    v87 = (AutoBoost *)KeAbPreAcquire((__int64)v85, 0LL, 0LL, a4);
    v89 = v87;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v85, 0LL) )
      ExfAcquirePushLockExclusiveEx(v85, v87, (__int64)v85);
    if ( v89 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v89, v88);
      else
        *((_BYTE *)v89 + 10) = 1;
    }
    v90 = _InterlockedExchangeAdd64(v14 + 1, -v13) - v13;
    if ( v90 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v85, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v85);
      KeAbPostRelease((unsigned __int64)v85);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v100, v101);
    }
    else
    {
      if ( v90 )
        __fastfail(0xEu);
      for ( i = *v86; i != v14; i = (_QWORD *)*i )
        v86 = (_QWORD **)i;
      *v86 = (_QWORD *)*v14;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v85, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v85);
      KeAbPostRelease((unsigned __int64)v85);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v92, v93);
      ExFreePoolWithTag(v14, 0x6353624Fu);
    }
    return 0LL;
  }
  if ( !a2 )
  {
    v35 = KeGetCurrentThread();
    v36 = 0;
    v37 = 0LL;
    --v35->KernelApcDisable;
    v38 = (AutoBoost *)KeAbPreAcquire(a1 - 32, 0LL, 0LL, a4);
    v40 = v38;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 - 32), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 - 32), v38, a1 - 32);
    if ( v40 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v40, v39);
      else
        *((_BYTE *)v40 + 10) = 1;
    }
    v41 = (char *)(*(_QWORD *)(a1 - 8) & 0xFFFFFFFFFFFFFFF0uLL);
    v119 = v41;
    SecurityDescriptor = v41;
    if ( v41 )
    {
      v42 = RtlpSetSecurityObject(a1, *a3, (_DWORD)a4, (unsigned int)&SecurityDescriptor, 0, a7, a8, 0LL);
      if ( (v42 & 0x80000000) == 0 )
      {
        v43 = SecurityDescriptor;
        Buf1 = SecurityDescriptor;
        v126 = RtlLengthSecurityDescriptor(SecurityDescriptor);
        Size = v126;
        v44 = RtlHashBytes2((__int64)v43, v126);
        v122 = KeGetCurrentThread();
        v45 = v44;
        P = 0LL;
        --v122->KernelApcDisable;
        v117 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (v44 & 0x3FF));
        v46 = 0LL;
        v47 = v117 + 1;
        v49 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v117, 0LL, 0LL, v48);
        v50 = v117;
        v51 = v49;
        v52 = 17LL;
        if ( _InterlockedCompareExchange64(v117, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v117, 0, v49, (struct _KTHREAD *)v117);
          v50 = v117;
          v52 = 17LL;
        }
        if ( v51 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            goto LABEL_136;
LABEL_46:
          *((_BYTE *)v51 + 10) = 1;
        }
        while ( 1 )
        {
          v53 = *v47;
          if ( *v47 )
            break;
LABEL_52:
          if ( v46 )
          {
            *v46 = v53;
            v47 = (volatile signed __int64 *)_InterlockedCompareExchange64(v47, (signed __int64)v46, v53);
            if ( (volatile signed __int64 *)v53 == v47 )
            {
              if ( v52 != _InterlockedCompareExchange64(v50, 0LL, v52) )
              {
                ExfReleasePushLockShared(v50);
                v50 = v117;
              }
              KeAbPostRelease((unsigned __int64)v50);
              KeLeaveCriticalRegionThread((__int64)v122, v54, v55);
              v37 = (signed __int64)(v46 + 4);
              goto LABEL_64;
            }
          }
          else
          {
            if ( v52 != _InterlockedCompareExchange64(v50, 0LL, v52) )
            {
              ExfReleasePushLockShared(v50);
              v50 = v117;
            }
            KeAbPostRelease((unsigned __int64)v50);
            KeLeaveCriticalRegionThread((__int64)v122, v94, v95);
            if ( v126 + 40 < v126
              || (Pool2 = ExAllocatePool2(0x108uLL), P = (PVOID)Pool2, (v46 = (_QWORD *)Pool2) == 0LL) )
            {
              v42 = -1073741670;
              goto LABEL_91;
            }
            v97 = Buf1;
            *(_QWORD *)(Pool2 + 8) = 16LL;
            *(_QWORD *)(Pool2 + 16) = v45;
            *(_DWORD *)(Pool2 + 24) = v126;
            memmove((void *)(Pool2 + 32), v97, v126);
            v47 = v117 + 1;
            --v122->KernelApcDisable;
            v99 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v117, 0LL, 0LL, v98);
            v50 = v117;
            v51 = v99;
            v52 = 17LL;
            if ( _InterlockedCompareExchange64(v117, 17LL, 0LL) )
            {
              ExfAcquirePushLockSharedEx(v117, 0, v99, (struct _KTHREAD *)v117);
              v50 = v117;
              v52 = 17LL;
            }
            if ( v51 )
            {
              if ( (KiAbpGlobalState & 1) == 0 )
                goto LABEL_46;
LABEL_136:
              AutoBoost::KiAbpPostAcquire(v51, (void *)0x11);
            }
          }
        }
        while ( 1 )
        {
          if ( *(_QWORD *)(v53 + 16) > v45 )
          {
LABEL_51:
            v50 = v117;
            v52 = 17LL;
            v46 = P;
            goto LABEL_52;
          }
          if ( *(_QWORD *)(v53 + 16) == v45
            && *(_DWORD *)(v53 + 24) == v126
            && !memcmp(Buf1, (const void *)(v53 + 32), Size) )
          {
            break;
          }
          v47 = (volatile signed __int64 *)v53;
          v53 = *(_QWORD *)v53;
          if ( !v53 )
            goto LABEL_51;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 8), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64(v117, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v117);
        KeAbPostRelease((unsigned __int64)v117);
        KeLeaveCriticalRegionThread((__int64)v122, v56, v57);
        v37 = v53 + 32;
        if ( P )
          ExFreePoolWithTag(P, 0x6353624Fu);
LABEL_64:
        v58 = 0;
        if ( *(_BYTE *)SecurityDescriptor == 1 )
        {
          v59 = *((_WORD *)SecurityDescriptor + 1);
          if ( v59 >= 0 )
          {
            v61 = (char *)*((_QWORD *)SecurityDescriptor + 2);
          }
          else
          {
            v60 = *((unsigned int *)SecurityDescriptor + 2);
            if ( (_DWORD)v60 )
              v61 = (char *)SecurityDescriptor + v60;
            else
              v61 = 0LL;
          }
          if ( (v59 & 4) != 0 )
          {
            if ( v59 >= 0 )
            {
              v63 = (char *)*((_QWORD *)SecurityDescriptor + 4);
            }
            else
            {
              v62 = *((unsigned int *)SecurityDescriptor + 4);
              if ( (_DWORD)v62 )
                v63 = (char *)SecurityDescriptor + v62;
              else
                v63 = 0LL;
            }
          }
          else
          {
            v63 = 0LL;
          }
          if ( v61 )
            v58 = (4 * (unsigned __int8)v61[1] + 11) & 0xFFFFFFFC;
          if ( v63 )
            v58 += (*((unsigned __int16 *)v63 + 1) + 3) & 0xFFFFFFFC;
          v64 = a1 - 48;
          if ( *(_QWORD *)(a1 - 16) != 1LL )
          {
            if ( (*(_BYTE *)(v64 + 26) & 8) != 0 )
              v65 = v64 - ObpInfoMaskToOffset[*(_BYTE *)(v64 + 26) & 0xF];
            else
              v65 = 0LL;
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process == PsInitialSystemProcess )
            {
              SchedulingGroup = 1LL;
            }
            else
            {
              SchedulingGroup = (__int64)Process[1].SchedulingGroup;
              if ( v58 && (int)PspChargeQuota(SchedulingGroup, 0LL, 1, v58) < 0
                || (_InterlockedIncrement((volatile signed __int32 *)(SchedulingGroup + 512)), !SchedulingGroup) )
              {
                v42 = -1073741756;
                goto LABEL_91;
              }
            }
            v68 = *(void **)(v65 + 16);
            if ( (unsigned __int64)v68 >= 2 )
            {
              if ( *(_DWORD *)(v65 + 8) )
                PspReturnQuota(*(__int64 **)(v65 + 16), 0LL, 1u, *(unsigned int *)(v65 + 8));
              PspDereferenceQuotaBlock(v68);
            }
            *(_DWORD *)(v65 + 8) = v58;
            *(_QWORD *)(v65 + 16) = SchedulingGroup;
          }
          v42 = 0;
          v69 = v37 | 0xF;
          v70 = v37 == 0;
          v37 = 0LL;
          if ( v70 )
            v69 = 0LL;
          v36 = (_InterlockedExchange64((volatile __int64 *)(a1 - 8), v69) & 0xF) + 1;
        }
        else
        {
          v42 = -1073741736;
        }
LABEL_91:
        v41 = v119;
        goto LABEL_92;
      }
    }
    else
    {
      v42 = -1073741609;
    }
    SecurityDescriptor = 0LL;
LABEL_92:
    _m_prefetchw((const void *)(a1 - 32));
    v71 = *(_QWORD *)(a1 - 32);
    v72 = v71 - 16;
    if ( (v71 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v72 = 0LL;
    if ( (v71 & 2) != 0
      || (v73 = *(_QWORD *)(a1 - 32),
          v73 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 32), v72, v71)) )
    {
      ExfReleasePushLock((_QWORD *)(a1 - 32));
    }
    KeAbPostRelease(a1 - 32);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v74, v75);
    if ( v37 )
      ObDereferenceSecurityDescriptor(v37, 16LL);
    if ( v41 && v36 )
    {
      v77 = (volatile signed __int64 *)(v41 - 32);
      _m_prefetchw(v41 - 24);
      v78 = *((_QWORD *)v41 - 3);
      while ( v78 - v36 > 0 )
      {
        v79 = v78;
        v78 = _InterlockedCompareExchange64(v77 + 1, v78 - v36, v78);
        if ( v79 == v78 )
          goto LABEL_103;
      }
      if ( v78 != v36 )
        __fastfail(0xEu);
      v105 = KeGetCurrentThread();
      v106 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * ((_DWORD)v77[2] & 0x3FF));
      --v105->KernelApcDisable;
      v107 = (volatile signed __int64 *)(v106 + 1);
      v108 = (AutoBoost *)KeAbPreAcquire((__int64)v106, 0LL, 0LL, v76);
      v110 = v108;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v106, 0LL) )
        ExfAcquirePushLockExclusiveEx(v106, v108, (__int64)v106);
      if ( v110 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v110, v109);
        else
          *((_BYTE *)v110 + 10) = 1;
      }
      v111 = _InterlockedExchangeAdd64(v77 + 1, -v36) - v36;
      if ( v111 > 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v106, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v106);
        KeAbPostRelease((unsigned __int64)v106);
        KeLeaveCriticalRegionThread((__int64)v105, v115, v116);
      }
      else
      {
        if ( v111 )
          __fastfail(0xEu);
        for ( j = (volatile signed __int64 *)*v107; j != v77; j = (volatile signed __int64 *)*j )
          v107 = j;
        *v107 = *v77;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v106, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v106);
        KeAbPostRelease((unsigned __int64)v106);
        KeLeaveCriticalRegionThread((__int64)v105, v113, v114);
        ExFreePoolWithTag((PVOID)v77, 0x6353624Fu);
      }
    }
LABEL_103:
    if ( SecurityDescriptor )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    return v42;
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
      v118 = KeGetCurrentThread();
      v21 = v20;
      --v118->KernelApcDisable;
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
            KeLeaveCriticalRegionThread((__int64)v118, v29, v30);
            v31 = v23 + 4;
            goto LABEL_32;
          }
        }
        else
        {
          if ( v27 != _InterlockedCompareExchange64(v22, 0LL, v27) )
            ExfReleasePushLockShared(v22);
          KeAbPostRelease((unsigned __int64)v22);
          KeLeaveCriticalRegionThread((__int64)v118, v80, v81);
          if ( (int)v19 + 40 < (unsigned int)v19 )
            return (unsigned int)-1073741670;
          v82 = ExAllocatePool2(0x108uLL);
          v23 = (_QWORD *)v82;
          if ( !v82 )
            return (unsigned int)-1073741670;
          *(_QWORD *)(v82 + 8) = 16LL;
          *(_QWORD *)(v82 + 16) = v21;
          *(_DWORD *)(v82 + 24) = v19;
          memmove((void *)(v82 + 32), a4, v19);
          --v118->KernelApcDisable;
          v24 = v22 + 1;
          v26 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v22, 0LL, 0LL, v83);
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
          v31 = (_QWORD *)(v28 + 32);
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
      KeLeaveCriticalRegionThread((__int64)v118, v32, v33);
      if ( v23 )
        ExFreePoolWithTag(v23, 0x6353624Fu);
LABEL_32:
      v34 = 0;
      ExFreePoolWithTag(a4, 0);
      if ( v31 )
      {
        *(_QWORD *)(a1 - 8) = (char *)v31 + 15;
        return v34;
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
  v102 = (unsigned __int64)Buf1;
  v42 = SeQuerySecurityDescriptorInfo(a3, a4, Length, &Buf1);
  if ( !v102 )
    return v42;
  _m_prefetchw((const void *)(a1 - 8));
  v103 = *(_QWORD *)(a1 - 8);
  while ( (v102 ^ v103) < 0xF )
  {
    v104 = v103;
    v103 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 8), v103 + 1, v103);
    if ( v104 == v103 )
      return v42;
  }
  ObDereferenceSecurityDescriptor(v102, 1LL);
  return v42;
}
