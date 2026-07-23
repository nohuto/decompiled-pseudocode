/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x140A31120
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlFindSetBits @ 0x1403F1120 (RtlFindSetBits.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     EtwpUMGLEnabled @ 0x14082E77C (EtwpUMGLEnabled.c)
 *     EtwpGetSoftRestartInformation @ 0x1408343E8 (EtwpGetSoftRestartInformation.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1408F4190 (SeQuerySecurityDescriptorInfo.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14097A538 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140A31734 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140AAD184 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpCheckSystemTraceAccess @ 0x140AB2A20 (EtwpCheckSystemTraceAccess.c)
 *     EtwpGetPmcProfileSource @ 0x140B712FC (EtwpGetPmcProfileSource.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(unsigned int *Src, unsigned int a2, char a3, unsigned int *a4)
{
  unsigned int v8; // edi
  int ULongFromUser; // esi
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v11; // r9
  __int64 result; // rax
  int v14; // esi
  __int64 v15; // rax
  unsigned int v16; // edx
  struct _KTHREAD *v17; // rax
  unsigned int *v18; // rax
  unsigned int *v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // r8d
  unsigned __int64 v22; // rax
  unsigned int v23; // r13d
  __int64 ULong64FromUser; // rax
  unsigned int Blink_low; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v27; // rax
  ULONG v28; // eax
  unsigned int v29; // ecx
  DWORD v30; // r14d
  _DWORD *v31; // r12
  ULONG SetBits; // eax
  char *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rax
  unsigned int *v38; // rax
  HANDLE ProcessId; // rdx
  unsigned int *v40; // r8
  struct _KLOCK_ENTRIES *v41; // r9
  unsigned int v42; // r13d
  struct _KPROCESS *i; // rcx
  int v44; // esi
  int v45; // esi
  int v46; // esi
  _DWORD *v47; // rcx
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  __int64 v50; // rdi
  unsigned int v51; // edx
  __int64 v52; // rcx
  struct _KTHREAD *v53; // rax
  unsigned int *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  struct _KLOCK_ENTRIES *v57; // r9
  void *v58; // rbx
  char v59; // dl
  struct _LIST_ENTRY *v60; // rcx
  __int64 v61; // rdx
  unsigned int v62; // eax
  size_t v63; // r8
  void *v64; // rdx
  LIST_ENTRY *NextProcess; // rax
  struct _KPROCESS *v66; // rdi
  unsigned int v67; // eax
  _DWORD *v68; // rcx
  _DWORD *v69; // rcx
  ULONG v70; // [rsp+30h] [rbp-A8h]
  unsigned int v71; // [rsp+30h] [rbp-A8h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp-98h] BYREF
  ULONG Length; // [rsp+48h] [rbp-90h] BYREF
  struct _LIST_ENTRY *v74; // [rsp+50h] [rbp-88h] BYREF
  __int64 v75; // [rsp+58h] [rbp-80h]
  DWORD SecurityInformation; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v77; // [rsp+68h] [rbp-70h]
  int v78; // [rsp+6Ch] [rbp-6Ch]
  _OWORD Srca[2]; // [rsp+70h] [rbp-68h] BYREF

  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  if ( a3 )
    ULongFromUser = RtlReadULongFromUser(Src);
  else
    ULongFromUser = *Src;
  v78 = ULongFromUser;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  v74 = Flink;
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
      v70 = 0;
      ObjectsSecurityDescriptor = Src + 4;
      if ( a2 >= 0x10 )
      {
        if ( a3 )
        {
          ULong64FromUser = RtlReadULong64FromUser(Src + 2);
          Flink = v74;
        }
        else
        {
          ULong64FromUser = *((_QWORD *)Src + 1);
        }
        v75 = ULong64FromUser;
        Blink_low = (unsigned __int16)ULong64FromUser;
        if ( (unsigned __int16)ULong64FromUser == 0xFFFF )
          Blink_low = LOBYTE(Flink[281].Blink);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v27 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 1);
        v19 = v27;
        v75 = (__int64)v27;
        if ( v27 )
        {
          v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v27);
          if ( (v8 & 0x80000000) == 0 )
          {
            if ( (v19[204] & 0x80u) != 0 )
            {
              v28 = RtlNumberOfSetBits((PRTL_BITMAP)v19 + 65);
              Length = v28;
            }
            else
            {
              v28 = Length;
            }
            v29 = 4 * v28 + 16;
            *a4 = v29;
            if ( v29 > a2 )
            {
              v8 = -1073741789;
            }
            else
            {
              v30 = 0;
              v31 = ObjectsSecurityDescriptor;
              while ( 1 )
              {
                SecurityInformation = v30;
                if ( v30 >= v28 )
                  break;
                SetBits = RtlFindSetBits((PRTL_BITMAP)v19 + 65, 1u, v70 + 1);
                v70 = SetBits;
                LODWORD(v74) = SetBits;
                if ( a3 )
                  RtlWriteULongToUser(&v31[v30], SetBits);
                else
                  v31[v30] = SetBits;
                ++v30;
                v28 = Length;
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
    v14 = ULongFromUser - 1;
    if ( !v14 )
    {
      *a4 = 48;
      if ( a2 == 48 )
      {
        if ( a3 )
        {
          v15 = RtlReadULong64FromUser(Src + 2);
          Flink = v74;
        }
        else
        {
          v15 = *((_QWORD *)Src + 1);
        }
        v75 = v15;
        v16 = (unsigned __int16)v15;
        if ( (unsigned __int16)v15 == 0xFFFF )
          v16 = LOBYTE(Flink[281].Blink);
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        v18 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v16, 1);
        v19 = v18;
        ObjectsSecurityDescriptor = v18;
        if ( v18 )
        {
          if ( (v18[3] & 0x2000000) != 0 )
          {
            v20 = 2LL * *((unsigned __int8 *)v18 + 818);
            Srca[0] = *(_OWORD *)((char *)&v74[v20 + 284].Blink + 4);
            Srca[1] = *(_OWORD *)((char *)&v74[v20 + 285].Blink + 4);
            v21 = 0;
            v77 = 0;
            while ( v21 < 8 )
            {
              if ( (dword_140BE2174[2 * v21] & *((_DWORD *)Srca
                                               + ((unsigned __int64)(unsigned int)dword_140BE2174[2 * v21] >> 29)) & 0x1FFFFFFF) != 0 )
              {
                v22 = (unsigned __int64)(unsigned int)EtwpEnableFlagMap[2 * v21] >> 29;
                *((_DWORD *)Srca + v22) |= EtwpEnableFlagMap[2 * v21] & 0x1FFFFFFF;
              }
              v77 = ++v21;
            }
            v33 = (char *)(Src + 4);
            if ( a3 )
              RtlCopyToUser(v33, Srca, 0x20uLL);
            else
              RtlCopyVolatileMemory(v33, Srca, 0x20uLL);
LABEL_57:
            KeReleaseMutex((PRKMUTEX)(v19 + 158), 0);
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v19 + 170) + 704LL) + 8LL * *v19),
              1u);
LABEL_58:
            KeLeaveCriticalRegion();
            return v8;
          }
          KeReleaseMutex((PRKMUTEX)(v18 + 158), 0);
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v19 + 170) + 704LL) + 8LL * *v19),
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
    v44 = v14 - 1;
    if ( !v44 )
    {
      *a4 = 16;
      if ( a2 == 16 )
      {
        v60 = PsGetCurrentServerSiloGlobals()[52].Flink;
        if ( a3 )
          RtlWriteULong64ToUser((_QWORD *)Src + 1, (__int64)v60[275].Blink);
        else
          *((_QWORD *)Src + 1) = v60[275].Blink;
        return v8;
      }
      return 3221225476LL;
    }
    v45 = v44 - 1;
    if ( !v45 )
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
    v46 = v45 - 1;
    if ( v46 )
    {
      if ( v46 != 1 )
        return (unsigned int)-1073741822;
      *a4 = 20;
      if ( ((a2 - 16) & 0xFFFFFFFB) == 0 )
      {
        v47 = Src + 1;
        if ( a3 )
          RtlWriteULongToUser(v47, EtwpSpinLockSpinThreshold);
        else
          *v47 = EtwpSpinLockSpinThreshold;
        v48 = Src + 2;
        if ( a3 )
          RtlWriteULongToUser(v48, EtwpSpinLockAcquireSampleRate);
        else
          *v48 = EtwpSpinLockAcquireSampleRate;
        v49 = Src + 3;
        if ( a3 )
          RtlWriteULongToUser(v49, EtwpSpinLockContentionSampleRate);
        else
          *v49 = EtwpSpinLockContentionSampleRate;
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
      v50 = RtlReadULong64FromUser(Src + 2);
    else
      v50 = *((_QWORD *)Src + 1);
    v75 = v50;
    if ( a3 )
      SecurityInformation = RtlReadULongFromUser(Src + 1);
    else
      RtlCopyVolatileMemory(&SecurityInformation, Src + 1, 4uLL);
    v51 = (unsigned __int16)v50;
    v52 = (__int64)v74;
    if ( (unsigned __int16)v50 == 0xFFFF )
      v51 = LOBYTE(v74[281].Blink);
    v53 = KeGetCurrentThread();
    --v53->KernelApcDisable;
    v54 = EtwpAcquireLoggerContextByLoggerId(v52, v51, 0);
    v19 = v54;
    if ( !v54 )
      goto LABEL_69;
    v58 = (void *)EtwpReferenceLoggerSecurityDescriptor((__int64)v54, v55, v56, v57);
    ObjectsSecurityDescriptor = v58;
    Length = a2 - 16;
    v8 = SeQuerySecurityDescriptorInfo(&SecurityInformation, Src + 4, &Length, &ObjectsSecurityDescriptor);
    *a4 = Length + 16;
    EtwpDereferenceLoggerSecurityDescriptor(v19, v58);
    v59 = 0;
LABEL_122:
    EtwpReleaseLoggerContext(v19, v59);
    goto LABEL_58;
  }
  switch ( ULongFromUser )
  {
    case 7:
      *a4 = 16;
      if ( a2 == 16 )
      {
        v68 = Src + 1;
        if ( a3 )
          RtlWriteULongToUser(v68, EtwpExecutiveResourceReleaseSampleRate);
        else
          *v68 = EtwpExecutiveResourceReleaseSampleRate;
        v69 = Src + 2;
        if ( a3 )
          RtlWriteULongToUser(v69, EtwpExecutiveResourceContentionSampleRate);
        else
          *v69 = EtwpExecutiveResourceContentionSampleRate;
        if ( a3 )
          RtlWriteULongToUser(Src + 3, EtwpExecutiveResourceTimeout);
        else
          Src[3] = EtwpExecutiveResourceTimeout;
        return v8;
      }
      return 3221225476LL;
    case 8:
    case 9:
      v71 = 0;
      if ( a2 < 8 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v42 = (a2 - 4) >> 2;
        for ( i = 0LL; ; i = v66 )
        {
          NextProcess = PsGetNextProcess(i, (__int64)ProcessId, (__int64)v40, v41);
          v66 = (struct _KPROCESS *)NextProcess;
          ObjectsSecurityDescriptor = NextProcess;
          if ( !NextProcess )
            break;
          if ( (HIDWORD(NextProcess[95].Blink) & 0x1000) == 0
            && (ULongFromUser == 9 || EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
          {
            ProcessId = PsGetProcessId(v66);
            v67 = v71;
            if ( v71 < v42 )
            {
              v40 = &Src[v71];
              if ( a3 )
              {
                RtlWriteULongToUser(v40 + 1, (int)ProcessId);
                v67 = v71;
              }
              else
              {
                v40[1] = (unsigned int)ProcessId;
              }
            }
            v71 = v67 + 1;
          }
        }
        *a4 = 4 * v71 + 4;
        return v42 < v71 ? 0xC0000023 : 0;
      }
      return 3221225506LL;
    case 10:
      ObjectsSecurityDescriptor = Src + 4;
      if ( a2 < 0x10 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        if ( a3 )
          v34 = RtlReadULong64FromUser(Src + 2);
        else
          v34 = *((_QWORD *)Src + 1);
        v75 = v34;
        v35 = (unsigned __int16)v34;
        v36 = (__int64)v74;
        if ( (unsigned __int16)v34 == 0xFFFF )
          v35 = LOBYTE(v74[281].Blink);
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        v38 = EtwpAcquireLoggerContextByLoggerId(v36, v35, 1);
        v19 = v38;
        v75 = (__int64)v38;
        if ( !v38 )
          goto LABEL_69;
        if ( (v38[3] & 0x2000000) == 0 )
        {
          EtwpReleaseLoggerContext(v38, 1);
          v8 = -1073741811;
          goto LABEL_58;
        }
        v8 = EtwpCheckSystemTraceAccess(v38, 1LL);
        if ( (v8 & 0x80000000) != 0 )
          goto LABEL_57;
        v61 = 5LL * *((unsigned __int8 *)v19 + 818);
        v62 = 4 * *(unsigned __int16 *)&stru_140F03830.ApcStateFill[20 * *((unsigned __int8 *)v19 + 818) + 24] + 16;
        *a4 = v62;
        if ( v62 > a2 )
        {
          v8 = -1073741789;
        }
        else
        {
          v63 = 4LL * *(unsigned __int16 *)&stru_140F03830.ApcStateFill[4 * v61 + 24];
          v64 = (void *)(0x140000000LL + 4 * v61 + 15743204);
          if ( a3 )
            RtlCopyToUser(ObjectsSecurityDescriptor, v64, v63);
          else
            RtlCopyVolatileMemory(ObjectsSecurityDescriptor, v64, v63);
        }
        v59 = 1;
        goto LABEL_122;
      }
      return 3221225506LL;
    case 12:
      LOBYTE(v11) = a3;
      return (unsigned int)EtwpGetPmcProfileSource(Src, a2, a4, v11);
  }
  if ( ULongFromUser != 13 )
    return (unsigned int)-1073741822;
  ObjectsSecurityDescriptor = 0LL;
  v74 = 0LL;
  if ( a2 < 0x28 )
    return 3221225476LL;
  v23 = a2 - 8;
  result = ExLockUserBuffer((unsigned __int64)(Src + 2), v23, a3, 1, &v74, (struct _MDL **)&ObjectsSecurityDescriptor);
  if ( (int)result >= 0 )
  {
    v8 = guard_dispatch_icall_no_overrides(20LL, v23);
    if ( v74 )
      ExUnlockUserBuffer((struct _MDL *)ObjectsSecurityDescriptor);
    return v8;
  }
  return result;
}
