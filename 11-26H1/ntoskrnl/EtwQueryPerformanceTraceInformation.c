/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x14093E008
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlNumberOfSetBits @ 0x140356570 (RtlNumberOfSetBits.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     RtlFindSetBits @ 0x1403F7770 (RtlFindSetBits.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     EtwpUMGLEnabled @ 0x14082853C (EtwpUMGLEnabled.c)
 *     EtwpGetSoftRestartInformation @ 0x14082E1A8 (EtwpGetSoftRestartInformation.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1408EDBD0 (SeQuerySecurityDescriptorInfo.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 *     EtwpGetPmcProfileSource @ 0x14093D960 (EtwpGetPmcProfileSource.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x14093E61C (EtwpQueryCoverageSamplerInformation.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140A6F2BC (EtwpCheckSystemTraceAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x140A6FAA4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140A6FBA4 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140AAF534 (EtwpDereferenceLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(unsigned int *Src, unsigned int a2, char a3, unsigned int *a4)
{
  unsigned int v8; // edi
  int ULongFromUser; // esi
  struct _LIST_ENTRY *Flink; // rcx
  __int64 result; // rax
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  unsigned int *v17; // rax
  unsigned int *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // r8d
  unsigned __int64 v21; // rax
  unsigned int v22; // r13d
  __int64 ULong64FromUser; // rax
  unsigned int Blink_low; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v26; // eax
  unsigned int v27; // ecx
  ULONG v28; // r14d
  _DWORD *v29; // r12
  ULONG SetBits; // eax
  char *v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rax
  unsigned int *v36; // rax
  unsigned int v37; // r13d
  struct _KPROCESS *i; // rcx
  int v39; // esi
  int v40; // esi
  int v41; // esi
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  _DWORD *v44; // rcx
  __int64 v45; // rdi
  unsigned int v46; // edx
  __int64 v47; // rcx
  struct _KTHREAD *v48; // rax
  unsigned int *v49; // rax
  void *v50; // rbx
  char v51; // dl
  struct _LIST_ENTRY *v52; // rcx
  __int64 v53; // rdx
  unsigned int v54; // eax
  size_t v55; // r8
  void *v56; // rdx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v58; // rdi
  int ProcessId; // edx
  unsigned int v60; // eax
  unsigned int *v61; // r8
  _DWORD *v62; // rcx
  _DWORD *v63; // rcx
  ULONG v64; // [rsp+30h] [rbp-A8h]
  unsigned int v65; // [rsp+30h] [rbp-A8h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp-98h] BYREF
  ULONG Length; // [rsp+48h] [rbp-90h] BYREF
  struct _LIST_ENTRY *v68; // [rsp+50h] [rbp-88h] BYREF
  __int64 v69; // [rsp+58h] [rbp-80h]
  ULONG SecurityInformation; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v71; // [rsp+68h] [rbp-70h]
  int v72; // [rsp+6Ch] [rbp-6Ch]
  _OWORD Srca[2]; // [rsp+70h] [rbp-68h] BYREF

  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  if ( a3 )
    ULongFromUser = RtlReadULongFromUser(Src);
  else
    ULongFromUser = *Src;
  v72 = ULongFromUser;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v68 = Flink;
  if ( ULongFromUser > 18 )
  {
    if ( ULongFromUser == 25 )
      return (unsigned int)EtwpQueryCoverageSamplerInformation(Src);
    return (unsigned int)-1073741822;
  }
  if ( ULongFromUser == 18 )
    return (unsigned int)EtwpGetSoftRestartInformation((__int64)Src, a2, a3, a4);
  if ( ULongFromUser <= 6 )
  {
    if ( ULongFromUser == 6 )
    {
      Length = 0;
      v64 = 0;
      ObjectsSecurityDescriptor = Src + 4;
      if ( a2 >= 0x10 )
      {
        if ( a3 )
        {
          ULong64FromUser = RtlReadULong64FromUser(Src + 2);
          Flink = v68;
        }
        else
        {
          ULong64FromUser = *((_QWORD *)Src + 1);
        }
        v69 = ULong64FromUser;
        Blink_low = (unsigned __int16)ULong64FromUser;
        if ( (unsigned __int16)ULong64FromUser == 0xFFFF )
          Blink_low = LOBYTE(Flink[281].Blink);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v18 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 1);
        v69 = (__int64)v18;
        if ( v18 )
        {
          v8 = EtwpCheckLoggerControlAccess(1u);
          if ( (v8 & 0x80000000) == 0 )
          {
            if ( (v18[204] & 0x80u) != 0 )
            {
              v26 = RtlNumberOfSetBits((PRTL_BITMAP)v18 + 65);
              Length = v26;
            }
            else
            {
              v26 = Length;
            }
            v27 = 4 * v26 + 16;
            *a4 = v27;
            if ( v27 > a2 )
            {
              v8 = -1073741789;
            }
            else
            {
              v28 = 0;
              v29 = ObjectsSecurityDescriptor;
              while ( 1 )
              {
                SecurityInformation = v28;
                if ( v28 >= v26 )
                  break;
                SetBits = RtlFindSetBits((PRTL_BITMAP)v18 + 65, 1u, v64 + 1);
                v64 = SetBits;
                LODWORD(v68) = SetBits;
                if ( a3 )
                  RtlWriteULongToUser(&v29[v28], SetBits);
                else
                  v29[v28] = SetBits;
                ++v28;
                v26 = Length;
              }
            }
          }
          goto LABEL_57;
        }
        goto LABEL_69;
      }
      return 3221225476LL;
    }
    if ( !ULongFromUser )
    {
      *a4 = 8;
      if ( a2 == 8 )
      {
        if ( a3 )
          RtlWriteULongToUser(Src + 1, 85);
        else
          Src[1] = 85;
        return v8;
      }
      return 3221225476LL;
    }
    v13 = ULongFromUser - 1;
    if ( !v13 )
    {
      *a4 = 48;
      if ( a2 == 48 )
      {
        if ( a3 )
        {
          v14 = RtlReadULong64FromUser(Src + 2);
          Flink = v68;
        }
        else
        {
          v14 = *((_QWORD *)Src + 1);
        }
        v69 = v14;
        v15 = (unsigned __int16)v14;
        if ( (unsigned __int16)v14 == 0xFFFF )
          v15 = LOBYTE(Flink[281].Blink);
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        v17 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v15, 1);
        v18 = v17;
        ObjectsSecurityDescriptor = v17;
        if ( v17 )
        {
          if ( (v17[3] & 0x2000000) != 0 )
          {
            v19 = 2LL * *((unsigned __int8 *)v17 + 818);
            Srca[0] = *(_OWORD *)((char *)&v68[v19 + 284].Blink + 4);
            Srca[1] = *(_OWORD *)((char *)&v68[v19 + 285].Blink + 4);
            v20 = 0;
            v71 = 0;
            while ( v20 < 8 )
            {
              if ( (dword_140BDB2C4[2 * v20] & *((_DWORD *)Srca
                                               + ((unsigned __int64)(unsigned int)dword_140BDB2C4[2 * v20] >> 29)) & 0x1FFFFFFF) != 0 )
              {
                v21 = (unsigned __int64)(unsigned int)EtwpEnableFlagMap[2 * v20] >> 29;
                *((_DWORD *)Srca + v21) |= EtwpEnableFlagMap[2 * v20] & 0x1FFFFFFF;
              }
              v71 = ++v20;
            }
            v31 = (char *)(Src + 4);
            if ( a3 )
              RtlCopyToUser(v31, Srca, 0x20uLL);
            else
              RtlCopyVolatileMemory(v31, Srca, 0x20uLL);
LABEL_57:
            KeReleaseMutex((PRKMUTEX)(v18 + 158), 0);
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v18 + 170) + 704LL) + 8LL * *v18),
              1u);
LABEL_58:
            KeLeaveCriticalRegion();
            return v8;
          }
          KeReleaseMutex((PRKMUTEX)(v17 + 158), 0);
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v18 + 170) + 704LL) + 8LL * *v18),
            1u);
          KeLeaveCriticalRegion();
          return 3221225485LL;
        }
LABEL_69:
        v8 = -1073741162;
        goto LABEL_58;
      }
      return 3221225476LL;
    }
    v39 = v13 - 1;
    if ( !v39 )
    {
      *a4 = 16;
      if ( a2 == 16 )
      {
        v52 = PsGetCurrentServerSiloGlobals()[52].Flink;
        if ( a3 )
          RtlWriteULong64ToUser((_QWORD *)Src + 1, (__int64)v52[275].Blink);
        else
          *((_QWORD *)Src + 1) = v52[275].Blink;
        return v8;
      }
      return 3221225476LL;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      *a4 = 8;
      if ( a2 == 8 )
      {
        if ( a3 )
          RtlWriteULongToUser(Src + 1, EtwpProfileInterval);
        else
          Src[1] = EtwpProfileInterval;
        return v8;
      }
      return 3221225476LL;
    }
    v41 = v40 - 1;
    if ( v41 )
    {
      if ( v41 != 1 )
        return (unsigned int)-1073741822;
      *a4 = 20;
      if ( ((a2 - 16) & 0xFFFFFFFB) == 0 )
      {
        v42 = Src + 1;
        if ( a3 )
          RtlWriteULongToUser(v42, EtwpSpinLockSpinThreshold);
        else
          *v42 = EtwpSpinLockSpinThreshold;
        v43 = Src + 2;
        if ( a3 )
          RtlWriteULongToUser(v43, EtwpSpinLockAcquireSampleRate);
        else
          *v43 = EtwpSpinLockAcquireSampleRate;
        v44 = Src + 3;
        if ( a3 )
          RtlWriteULongToUser(v44, EtwpSpinLockContentionSampleRate);
        else
          *v44 = EtwpSpinLockContentionSampleRate;
        if ( a2 == 20 )
        {
          if ( a3 )
            RtlWriteULongToUser(Src + 4, EtwpSpinLockHoldThreshold);
          else
            Src[4] = EtwpSpinLockHoldThreshold;
        }
        return v8;
      }
      return 3221225476LL;
    }
    SecurityInformation = 0;
    *a4 = 24;
    if ( a2 < 0x18 )
      return 3221225476LL;
    if ( a3 )
      v45 = RtlReadULong64FromUser(Src + 2);
    else
      v45 = *((_QWORD *)Src + 1);
    v69 = v45;
    if ( a3 )
      SecurityInformation = RtlReadULongFromUser(Src + 1);
    else
      RtlCopyVolatileMemory(&SecurityInformation, Src + 1, 4uLL);
    v46 = (unsigned __int16)v45;
    v47 = (__int64)v68;
    if ( (unsigned __int16)v45 == 0xFFFF )
      v46 = LOBYTE(v68[281].Blink);
    v48 = KeGetCurrentThread();
    --v48->KernelApcDisable;
    v49 = EtwpAcquireLoggerContextByLoggerId(v47, v46, 0);
    v18 = v49;
    if ( !v49 )
      goto LABEL_69;
    v50 = (void *)EtwpReferenceLoggerSecurityDescriptor(v49);
    ObjectsSecurityDescriptor = v50;
    Length = a2 - 16;
    v8 = SeQuerySecurityDescriptorInfo(&SecurityInformation, Src + 4, &Length, &ObjectsSecurityDescriptor);
    *a4 = Length + 16;
    EtwpDereferenceLoggerSecurityDescriptor(v18, v50);
    v51 = 0;
LABEL_122:
    EtwpReleaseLoggerContext(v18, v51);
    goto LABEL_58;
  }
  switch ( ULongFromUser )
  {
    case 7:
      *a4 = 16;
      if ( a2 == 16 )
      {
        v62 = Src + 1;
        if ( a3 )
          RtlWriteULongToUser(v62, EtwpExecutiveResourceReleaseSampleRate);
        else
          *v62 = EtwpExecutiveResourceReleaseSampleRate;
        v63 = Src + 2;
        if ( a3 )
          RtlWriteULongToUser(v63, EtwpExecutiveResourceContentionSampleRate);
        else
          *v63 = EtwpExecutiveResourceContentionSampleRate;
        if ( a3 )
          RtlWriteULongToUser(Src + 3, EtwpExecutiveResourceTimeout);
        else
          Src[3] = EtwpExecutiveResourceTimeout;
        return v8;
      }
      return 3221225476LL;
    case 8:
    case 9:
      v65 = 0;
      if ( a2 < 8 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v37 = (a2 - 4) >> 2;
        for ( i = 0LL; ; i = v58 )
        {
          NextProcess = (struct _KPROCESS *)PsGetNextProcess(i);
          v58 = NextProcess;
          ObjectsSecurityDescriptor = NextProcess;
          if ( !NextProcess )
            break;
          if ( (NextProcess[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0
            && (ULongFromUser == 9 || EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
          {
            ProcessId = (unsigned int)PsGetProcessId(v58);
            v60 = v65;
            if ( v65 < v37 )
            {
              v61 = &Src[v65];
              if ( a3 )
              {
                RtlWriteULongToUser(v61 + 1, ProcessId);
                v60 = v65;
              }
              else
              {
                v61[1] = ProcessId;
              }
            }
            v65 = v60 + 1;
          }
        }
        *a4 = 4 * v65 + 4;
        return v37 < v65 ? 0xC0000023 : 0;
      }
      return 3221225506LL;
    case 10:
      ObjectsSecurityDescriptor = Src + 4;
      if ( a2 < 0x10 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        if ( a3 )
          v32 = RtlReadULong64FromUser(Src + 2);
        else
          v32 = *((_QWORD *)Src + 1);
        v69 = v32;
        v33 = (unsigned __int16)v32;
        v34 = (__int64)v68;
        if ( (unsigned __int16)v32 == 0xFFFF )
          v33 = LOBYTE(v68[281].Blink);
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        v36 = EtwpAcquireLoggerContextByLoggerId(v34, v33, 1);
        v18 = v36;
        v69 = (__int64)v36;
        if ( !v36 )
          goto LABEL_69;
        if ( (v36[3] & 0x2000000) == 0 )
        {
          EtwpReleaseLoggerContext(v36, 1);
          v8 = -1073741811;
          goto LABEL_58;
        }
        v8 = EtwpCheckSystemTraceAccess(v36, 1LL);
        if ( (v8 & 0x80000000) != 0 )
          goto LABEL_57;
        v53 = 5LL * *((unsigned __int8 *)v18 + 818);
        v54 = 4 * (unsigned __int16)EtwpPoolTagFilter[10 * *((unsigned __int8 *)v18 + 818)] + 16;
        *a4 = v54;
        if ( v54 > a2 )
        {
          v8 = -1073741789;
        }
        else
        {
          v55 = 4LL * (unsigned __int16)EtwpPoolTagFilter[2 * v53];
          v56 = (void *)(0x140000000LL + 4 * v53 + 15742692);
          if ( a3 )
            RtlCopyToUser(ObjectsSecurityDescriptor, v56, v55);
          else
            RtlCopyVolatileMemory(ObjectsSecurityDescriptor, v56, v55);
        }
        v51 = 1;
        goto LABEL_122;
      }
      return 3221225506LL;
    case 12:
      return (unsigned int)EtwpGetPmcProfileSource((__int64)Src, a2, a4, a3);
  }
  if ( ULongFromUser != 13 )
    return (unsigned int)-1073741822;
  ObjectsSecurityDescriptor = 0LL;
  v68 = 0LL;
  if ( a2 < 0x28 )
    return 3221225476LL;
  v22 = a2 - 8;
  result = ExLockUserBuffer((unsigned __int64)(Src + 2), v22, a3, 1, &v68, (struct _MDL **)&ObjectsSecurityDescriptor);
  if ( (int)result >= 0 )
  {
    v8 = guard_dispatch_icall_no_overrides(20LL, v22);
    if ( v68 )
      ExUnlockUserBuffer((struct _MDL *)ObjectsSecurityDescriptor);
    return v8;
  }
  return result;
}
