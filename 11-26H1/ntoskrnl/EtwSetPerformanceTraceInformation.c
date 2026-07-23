/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x140B38820
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     wcsnlen @ 0x14053A6E0 (wcsnlen.c)
 *     wcsncpy_s @ 0x14053F120 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpSetSoftRestartInformation @ 0x14077ABB8 (EtwpSetSoftRestartInformation.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x14082AFF0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14082C128 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x14082D450 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdateContextRegisterTraceEvents @ 0x14082D51C (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpUpdatePmcCounters @ 0x14082D614 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x14082D798 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdateTagFilter @ 0x14082D874 (EtwpUpdateTagFilter.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14082D8C0 (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpSetPmcProfileSource @ 0x14082E1F0 (EtwpSetPmcProfileSource.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x140836440 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x140836668 (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x140836714 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140837A74 (EtwpSetCoverageSamplerInformation.c)
 *     NtSetIntervalProfile @ 0x14084B880 (NtSetIntervalProfile.c)
 *     EtwpCheckGuidAccess @ 0x1408FC30C (EtwpCheckGuidAccess.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     EtwpUpdateStackTracing @ 0x140AB2624 (EtwpUpdateStackTracing.c)
 *     EtwpCheckSystemTraceAccess @ 0x140AB2A20 (EtwpCheckSystemTraceAccess.c)
 *     EtwpEnableStackCaching @ 0x140AC00AC (EtwpEnableStackCaching.c)
 *     EtwpUpdateGroupMasks @ 0x140B09E5C (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x140B39990 (EtwpUpdateLastBranchTracingEvents.c)
 *     KiGetCpuVendor @ 0x140C10708 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(char *a1, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  unsigned int v4; // r15d
  char v6; // r12
  int ULongFromUser; // r13d
  struct _LIST_ENTRY *Flink; // rbx
  __int64 result; // rax
  int updated; // ebx
  int v11; // r14d
  int v12; // r15d
  int v13; // edi
  int v14; // r12d
  unsigned int v15; // eax
  int v16; // r13d
  int v17; // r14d
  ULONG v18; // edi
  void *v19; // r14
  char *v20; // rdx
  unsigned int v21; // edx
  struct _KTHREAD *v22; // rax
  unsigned int *v23; // rax
  __int64 v24; // rdi
  unsigned int *v25; // rcx
  int v26; // eax
  unsigned int *v27; // rcx
  unsigned int v28; // r15d
  wchar_t *v29; // rax
  wchar_t *v30; // r14
  char *v31; // rdx
  size_t v32; // r8
  ULONG v33; // edx
  wchar_t *v34; // rcx
  unsigned int v35; // r15d
  unsigned int v36; // r15d
  void *v37; // r13
  int v38; // eax
  unsigned int v39; // edx
  struct _KTHREAD *v40; // rax
  unsigned int *v41; // rax
  unsigned int v42; // r15d
  unsigned int v43; // r15d
  void *v44; // r14
  size_t v45; // r8
  char *v46; // rdx
  unsigned int v47; // edx
  struct _KTHREAD *v48; // rax
  unsigned int *v49; // rax
  _KWAIT_BLOCK *v50; // rdx
  char *v51; // rdx
  int v52; // eax
  unsigned int v53; // esi
  wchar_t *v54; // rax
  wchar_t *v55; // rdi
  char v56; // al
  unsigned int v57; // r14d
  wchar_t *Pool2; // rax
  wchar_t *v59; // r15
  char *v60; // rdx
  int v61; // eax
  char UCharFromUser; // r12
  int CpuVendor; // eax
  char v64; // al
  char v65; // al
  char v66; // al
  char v67; // al
  char v68; // al
  char v69; // al
  char v70; // al
  wchar_t UShortFromUser; // ax
  char v72; // al
  char v73; // al
  char v74; // al
  char v75; // al
  char v76; // al
  char v77; // al
  unsigned __int8 v78; // al
  char v79; // al
  unsigned int v80; // edx
  struct _KTHREAD *v81; // rax
  unsigned int *v82; // rax
  unsigned int v84; // edx
  struct _KTHREAD *v85; // rax
  unsigned int *v86; // rax
  unsigned int v87; // r15d
  unsigned int v88; // r15d
  char *v89; // r13
  int v90; // r12d
  void *ULong64FromUser; // rax
  unsigned int Blink_low; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v94; // rax
  __int64 v95; // rsi
  void *v96; // r14
  unsigned int v97; // r12d
  unsigned int v98; // r15d
  char v99; // al
  unsigned int v100; // edx
  struct _KTHREAD *v101; // rax
  unsigned int *v102; // rax
  unsigned int v103; // r15d
  unsigned int v104; // r15d
  char *v105; // r12
  void *v106; // rax
  unsigned int v107; // edx
  struct _KTHREAD *v108; // rax
  unsigned int *v109; // rax
  unsigned int *v110; // rsi
  __int64 v111; // r9
  int v112; // eax
  int P; // [rsp+30h] [rbp-1B8h]
  unsigned int Pa; // [rsp+30h] [rbp-1B8h]
  __int128 v115; // [rsp+70h] [rbp-178h] BYREF
  wchar_t *Src[2]; // [rsp+80h] [rbp-168h]
  _DWORD v117[2]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v118; // [rsp+98h] [rbp-150h] BYREF
  char v119[256]; // [rsp+A0h] [rbp-148h] BYREF
  PVOID v120[2]; // [rsp+1A0h] [rbp-48h] BYREF

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v6 = 0;
  if ( AccessMode )
    ULongFromUser = RtlReadULongFromUser((unsigned int *)a1);
  else
    ULongFromUser = *(_DWORD *)a1;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  if ( ULongFromUser > 17 )
  {
    if ( ULongFromUser > 23 )
    {
      if ( ULongFromUser == 24 )
        goto LABEL_293;
      if ( ULongFromUser != 25 )
      {
        if ( ULongFromUser == 26 )
          goto LABEL_272;
        if ( ULongFromUser != 27 )
          return (unsigned int)-1073741822;
        if ( v4 < 0x14 )
          return 3221225476LL;
        v87 = v4 - 20;
        if ( (v87 & 3) != 0 )
          return 3221225485LL;
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, 1) )
        {
          v88 = v87 >> 2;
          v89 = a1 + 20;
          if ( AccessMode )
            v90 = RtlReadULongFromUser((unsigned int *)a1 + 4);
          else
            v90 = *((_DWORD *)a1 + 4);
          if ( AccessMode )
            ULong64FromUser = (void *)RtlReadULong64FromUser(a1 + 8);
          else
            ULong64FromUser = (void *)*((_QWORD *)a1 + 1);
          v120[0] = ULong64FromUser;
          Blink_low = (unsigned __int16)ULong64FromUser;
          if ( (unsigned __int16)ULong64FromUser == 0xFFFF )
            Blink_low = LOBYTE(Flink[281].Blink);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v94 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 1);
          v95 = (__int64)v94;
          if ( v94 )
          {
            updated = EtwpCheckLoggerControlAccess(0x80u, (__int64)v94);
            if ( updated >= 0 )
              updated = EtwpUpdateContextRegisterTraceEvents(v95, v90, (__int64)v89, v88, AccessMode);
            v27 = (unsigned int *)v95;
            goto LABEL_79;
          }
          goto LABEL_70;
        }
        return 3221225569LL;
      }
      return (unsigned int)EtwpSetCoverageSamplerInformation(a1, v4, AccessMode);
    }
    else
    {
      if ( ULongFromUser == 23 )
      {
        v115 = 0LL;
        LODWORD(Src[0]) = 0;
        if ( v4 < 0x18 )
          return 3221225476LL;
        if ( AccessMode )
          RtlCopyFromUser(&v115, a1, 0x18uLL);
        else
          RtlCopyVolatileMemory(&v115, a1, 0x18uLL);
        v84 = WORD4(v115);
        if ( WORD4(v115) == 0xFFFF )
          v84 = LOBYTE(Flink[281].Blink);
        v85 = KeGetCurrentThread();
        --v85->KernelApcDisable;
        v86 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v84, 1);
        v24 = (__int64)v86;
        if ( v86 )
        {
          updated = EtwpCheckLoggerControlAccess(0x80u, (__int64)v86);
          if ( updated < 0 )
            goto LABEL_78;
          v26 = EtwpUpdateProcessorTraceConfiguration(v24, (__int64)&v115);
          goto LABEL_77;
        }
        goto LABEL_70;
      }
      if ( ULongFromUser != 18 )
      {
        switch ( ULongFromUser )
        {
          case 19:
            v115 = 0LL;
            LODWORD(Src[0]) = 0;
            if ( v4 < 0x18 )
              return 3221225476LL;
            if ( AccessMode )
              RtlCopyFromUser(&v115, a1, 0x18uLL);
            else
              RtlCopyVolatileMemory(&v115, a1, 0x18uLL);
            v80 = WORD4(v115);
            if ( WORD4(v115) == 0xFFFF )
              v80 = LOBYTE(Flink[281].Blink);
            v81 = KeGetCurrentThread();
            --v81->KernelApcDisable;
            v82 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v80, 1);
            v24 = (__int64)v82;
            if ( v82 )
            {
              updated = EtwpCheckLoggerControlAccess(0x80u, (__int64)v82);
              if ( updated < 0 )
                goto LABEL_78;
              v26 = EtwpUpdateLastBranchTracingConfiguration(v24, LODWORD(Src[0]));
LABEL_77:
              updated = v26;
LABEL_78:
              v27 = (unsigned int *)v24;
LABEL_79:
              EtwpReleaseLoggerContext(v27, 1);
              goto LABEL_73;
            }
LABEL_70:
            updated = -1073741162;
LABEL_73:
            KeLeaveCriticalRegion();
            return (unsigned int)updated;
          case 20:
            goto LABEL_293;
          case 21:
            if ( AccessMode && !EtwpUserInAdminOrLogUsersGroup() )
              return 3221225506LL;
            if ( v4 - 36 > 0x1FC )
              return 3221225476LL;
            v56 = a1[4];
            if ( (unsigned __int8)v56 < 2u || (unsigned __int8)v56 > 3u )
              return 3221225561LL;
            Pa = v4 - 34 + 280;
            v57 = (v4 - 34) >> 1;
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v59 = Pool2;
            v120[0] = Pool2;
            if ( !Pool2 )
              return 3221225495LL;
            wcsncpy_s(Pool2 + 140, v57, (const wchar_t *)a1 + 17, v57);
            v60 = a1 + 16;
            if ( AccessMode )
              RtlCopyFromUser(&v115, v60, 0xCuLL);
            else
              RtlCopyVolatileMemory(&v115, v60, 0xCuLL);
            if ( AccessMode )
              v61 = RtlReadULongFromUser((unsigned int *)a1 + 7);
            else
              v61 = *((_DWORD *)a1 + 7);
            *((_DWORD *)v59 + 2) = v61;
            if ( AccessMode )
              UCharFromUser = RtlReadUCharFromUser(a1 + 32);
            else
              UCharFromUser = a1[32];
            CpuVendor = KiGetCpuVendor();
            if ( CpuVendor == 2 )
            {
              if ( AccessMode )
              {
                RtlReadUCharFromUser(a1 + 4);
                v64 = RtlReadUCharFromUser(a1 + 8);
              }
              else
              {
                v64 = a1[8];
              }
              *(_BYTE *)v59 = v64;
              if ( AccessMode )
                v65 = RtlReadUCharFromUser(a1 + 9);
              else
                v65 = a1[9];
              *((_BYTE *)v59 + 1) = v65;
              if ( AccessMode )
                v66 = RtlReadUCharFromUser(a1 + 10);
              else
                v66 = a1[10];
              *((_BYTE *)v59 + 2) = v66;
              if ( AccessMode )
                v67 = RtlReadUCharFromUser(a1 + 11);
              else
                v67 = a1[11];
              *((_BYTE *)v59 + 3) = v67;
              if ( AccessMode )
                v68 = RtlReadUCharFromUser(a1 + 12);
              else
                v68 = a1[12];
              *((_BYTE *)v59 + 4) = v68;
              if ( AccessMode )
                v69 = RtlReadUCharFromUser(a1 + 13);
              else
                v69 = a1[13];
              *((_BYTE *)v59 + 5) = v69;
            }
            else if ( CpuVendor == 1 )
            {
              if ( AccessMode )
                v70 = RtlReadUCharFromUser(a1 + 4);
              else
                v70 = a1[4];
              if ( v70 == 2 )
              {
                if ( AccessMode )
                  v78 = RtlReadUCharFromUser(a1 + 8);
                else
                  v78 = a1[8];
                *v59 = v78;
                if ( AccessMode )
                  v79 = RtlReadUCharFromUser(a1 + 9);
                else
                  v79 = a1[9];
                *((_BYTE *)v59 + 2) = v79;
              }
              else
              {
                if ( AccessMode )
                  UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)a1 + 4);
                else
                  UShortFromUser = *((_WORD *)a1 + 4);
                *v59 = UShortFromUser;
                if ( AccessMode )
                  v72 = RtlReadUCharFromUser(a1 + 10);
                else
                  v72 = a1[10];
                *((_BYTE *)v59 + 2) = v72;
                if ( AccessMode )
                  v73 = RtlReadUCharFromUser(a1 + 11);
                else
                  v73 = a1[11];
                *((_BYTE *)v59 + 3) = v73;
                if ( AccessMode )
                  v74 = RtlReadUCharFromUser(a1 + 12);
                else
                  v74 = a1[12];
                *((_BYTE *)v59 + 4) = v74;
                if ( AccessMode )
                  v75 = RtlReadUCharFromUser(a1 + 13);
                else
                  v75 = a1[13];
                *((_BYTE *)v59 + 5) = v75;
                if ( AccessMode )
                  v76 = RtlReadUCharFromUser(a1 + 14);
                else
                  v76 = a1[14];
                *((_BYTE *)v59 + 6) = v76;
                if ( AccessMode )
                  v77 = RtlReadUCharFromUser(a1 + 15);
                else
                  v77 = a1[15];
                *((_BYTE *)v59 + 7) = v77;
              }
            }
            *((_QWORD *)v59 + 2) = 2097153LL;
            memset_0(v59 + 12, 0, 0x100uLL);
            EtwpGetMicroarchitecturalPmcAffinity((__int64)&v115, v59 + 8);
            updated = guard_dispatch_icall_no_overrides(20LL, Pa);
            if ( UCharFromUser )
              updated = EtwpAddMicroarchitecturalPmcToRegistry((unsigned __int8 *)v59, &v115);
            v34 = v59;
            break;
          default:
            v115 = 0LL;
            Src[0] = 0LL;
            v117[1] = 0;
            memset_0(v117, 0, 0x10CuLL);
            if ( AccessMode && !EtwpUserInAdminOrLogUsersGroup() )
              return 3221225506LL;
            if ( v4 != 20 )
              return 3221225476LL;
            v51 = a1 + 8;
            if ( AccessMode )
              RtlCopyFromUser(v120, v51, 0xCuLL);
            else
              RtlCopyVolatileMemory(v120, v51, 0xCuLL);
            if ( AccessMode )
              v52 = RtlReadULongFromUser((unsigned int *)a1 + 1);
            else
              v52 = *((_DWORD *)a1 + 1);
            LODWORD(v115) = v52;
            updated = guard_dispatch_icall_no_overrides(1LL, 24LL);
            if ( updated < 0 )
              return (unsigned int)updated;
            v117[0] = v115;
            v118 = 2097153LL;
            memset_0(v119, 0, sizeof(v119));
            EtwpGetMicroarchitecturalPmcAffinity((__int64)v120, (unsigned __int16 *)&v118);
            v53 = wcsnlen(Src[0], 0xFFuLL);
            v54 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v55 = v54;
            if ( !v54 )
              return 3221225495LL;
            wcsncpy_s(v54, v53 + 1, Src[0], v53);
            updated = guard_dispatch_icall_no_overrides(21LL, 272LL);
            EtwpRemoveMicroarchitecturalPmcFromRegistry(v55, v53, (__int64)v120);
            v34 = v55;
            break;
        }
        v33 = 1350005829;
LABEL_229:
        ExFreePoolWithTag(v34, v33);
        return (unsigned int)updated;
      }
      return (unsigned int)EtwpSetSoftRestartInformation((__int64)a1, v4, AccessMode);
    }
  }
  if ( ULongFromUser == 17 )
    goto LABEL_119;
  if ( ULongFromUser > 10 )
  {
    switch ( ULongFromUser )
    {
      case 11:
        if ( v4 < 0x10 )
          return 3221225476LL;
        v35 = v4 - 16;
        if ( (v35 & 3) != 0 )
          return 3221225485LL;
        v36 = v35 >> 2;
        if ( v36 > 1 )
          return 3221225485LL;
        if ( AccessMode )
          v37 = (void *)RtlReadULong64FromUser(a1 + 8);
        else
          v37 = (void *)*((_QWORD *)a1 + 1);
        v120[0] = v37;
        if ( v36 )
        {
          if ( AccessMode )
            v38 = RtlReadULongFromUser((unsigned int *)a1 + 4);
          else
            v38 = *((_DWORD *)a1 + 4);
          if ( v38 != 1316 )
            return 3221225485LL;
          v6 = 1;
        }
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v39 = (unsigned __int16)v37;
          if ( (unsigned __int16)v37 == 0xFFFF )
            v39 = LOBYTE(Flink[281].Blink);
          v40 = KeGetCurrentThread();
          --v40->KernelApcDisable;
          v41 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v39, 1);
          v24 = (__int64)v41;
          if ( !v41 )
          {
            KeLeaveCriticalRegion();
            return 3221226134LL;
          }
          updated = EtwpCheckLoggerControlAccess(0x80u, (__int64)v41);
          if ( updated >= 0 )
          {
            if ( v6 )
              _InterlockedOr((volatile signed __int32 *)(v24 + 816), 0x400u);
            else
              _InterlockedAnd((volatile signed __int32 *)(v24 + 816), 0xFFFFFBFF);
          }
          goto LABEL_78;
        }
        break;
      case 12:
        if ( v4 < 0x10 )
          return 3221225476LL;
        result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
        if ( (int)result < 0 )
          return result;
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v28 = (v4 - 16) >> 2;
          if ( v28 > ExpPlatformBinaryLock.ExpectedRunTime )
            return 3221225485LL;
          v29 = (wchar_t *)ExAllocatePool2(0x40uLL);
          v30 = v29;
          if ( v29 )
          {
            v31 = a1 + 16;
            v32 = 4LL * v28;
            if ( AccessMode )
              RtlCopyFromUser(v29, v31, v32);
            else
              RtlCopyVolatileMemory(v29, v31, v32);
            updated = EtwpSetPmcProfileSource(v30, v28);
            v33 = 0;
            v34 = v30;
            goto LABEL_229;
          }
          return 3221225495LL;
        }
        break;
      case 14:
      case 15:
        goto LABEL_293;
      case 16:
LABEL_272:
        if ( v4 != 32 )
          return 3221225476LL;
        if ( AccessMode )
          v96 = (void *)RtlReadULong64FromUser(a1 + 8);
        else
          v96 = (void *)*((_QWORD *)a1 + 1);
        v120[0] = v96;
        if ( AccessMode )
          v97 = RtlReadULongFromUser((unsigned int *)a1 + 5);
        else
          v97 = *((_DWORD *)a1 + 5);
        if ( AccessMode )
          v98 = RtlReadULongFromUser((unsigned int *)a1 + 6);
        else
          v98 = *((_DWORD *)a1 + 6);
        if ( AccessMode )
          v99 = RtlReadUCharFromUser(a1 + 16);
        else
          v99 = a1[16];
        if ( !v99 )
          return 3221225659LL;
        v100 = (unsigned __int16)v96;
        if ( (unsigned __int16)v96 == 0xFFFF )
          v100 = LOBYTE(Flink[281].Blink);
        v101 = KeGetCurrentThread();
        --v101->KernelApcDisable;
        v102 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v100, 1);
        v24 = (__int64)v102;
        if ( v102 )
        {
          updated = EtwpCheckLoggerControlAccess(0x80u, (__int64)v102);
          if ( updated < 0 )
            goto LABEL_78;
          v26 = EtwpEnableStackCaching(v24, v97, v98, ULongFromUser == 26);
          goto LABEL_77;
        }
        goto LABEL_70;
      default:
        return (unsigned int)-1073741822;
    }
    return 3221225569LL;
  }
  switch ( ULongFromUser )
  {
    case 10:
LABEL_119:
      if ( v4 < 0x10 )
        return 3221225476LL;
      v42 = v4 - 16;
      if ( (v42 & 3) != 0 )
        return 3221225485LL;
      v43 = v42 >> 2;
      if ( (unsigned __int16)v43 > 4u )
        return 3221225485LL;
      if ( PsIsCurrentThreadInServerSilo() )
        return 3221225506LL;
      if ( AccessMode )
        v44 = (void *)RtlReadULong64FromUser(a1 + 8);
      else
        v44 = (void *)*((_QWORD *)a1 + 1);
      v120[0] = v44;
      v45 = 4LL * (unsigned __int16)v43;
      v46 = a1 + 16;
      if ( AccessMode )
        RtlCopyFromUser(&v115, v46, v45);
      else
        RtlCopyVolatileMemory(&v115, v46, v45);
      v47 = (unsigned __int16)v44;
      if ( (unsigned __int16)v44 == 0xFFFF )
        v47 = LOBYTE(Flink[281].Blink);
      v48 = KeGetCurrentThread();
      --v48->KernelApcDisable;
      v49 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v47, 1);
      v24 = (__int64)v49;
      if ( v49 )
      {
        v25 = v49;
        if ( (v49[3] & 0x2000000) == 0 )
          goto LABEL_72;
        updated = EtwpCheckSystemTraceAccess((__int64)v49, 0x80u);
        if ( updated >= 0 )
        {
          v50 = (_KWAIT_BLOCK *)&stru_140F03830.ApcStateFill[24];
          if ( ULongFromUser != 10 )
            v50 = &stru_140F03830.WaitBlock[1];
          EtwpUpdateTagFilter(&v115, v43, (__int64)v50 + 20 * *(unsigned __int8 *)(v24 + 818));
        }
        goto LABEL_78;
      }
      goto LABEL_70;
    case 1:
      v115 = 0LL;
      *(_OWORD *)Src = 0LL;
      if ( v4 != 48 )
        return 3221225476LL;
      if ( AccessMode )
        v19 = (void *)RtlReadULong64FromUser(a1 + 8);
      else
        v19 = (void *)*((_QWORD *)a1 + 1);
      v120[0] = v19;
      v20 = a1 + 16;
      if ( AccessMode )
        RtlCopyFromUser(&v115, v20, 0x20uLL);
      else
        RtlCopyVolatileMemory(&v115, v20, 0x20uLL);
      v21 = (unsigned __int16)v19;
      if ( (unsigned __int16)v19 == 0xFFFF )
        v21 = LOBYTE(Flink[281].Blink);
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      v23 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v21, 1);
      v24 = (__int64)v23;
      if ( !v23 )
        goto LABEL_70;
      v25 = v23;
      if ( (v23[3] & 0x2000000) == 0 )
      {
LABEL_72:
        EtwpReleaseLoggerContext(v25, 1);
        updated = -1073741811;
        goto LABEL_73;
      }
      updated = EtwpCheckSystemTraceAccess((__int64)v23, 0x80u);
      if ( updated < 0 )
        goto LABEL_78;
      v26 = EtwpUpdateGroupMasks((int *)v24, &v115);
      goto LABEL_77;
    case 3:
      if ( v4 == 8 )
      {
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          if ( AccessMode )
            v18 = RtlReadULongFromUser((unsigned int *)a1 + 1);
          else
            v18 = *((_DWORD *)a1 + 1);
          KeWaitForSingleObject(&stru_140F03830.880, Executive, 0, 0, 0LL);
          updated = NtSetIntervalProfile(v18, ProfileTime);
          if ( updated >= 0 )
            EtwpProfileInterval = v18;
          goto LABEL_59;
        }
        return 3221225506LL;
      }
      return 3221225476LL;
    case 5:
      if ( ((v4 - 16) & 0xFFFFFFFB) != 0 )
        return 3221225476LL;
      result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
      updated = result;
      if ( (int)result < 0 )
        return result;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        if ( AccessMode )
          v14 = RtlReadULongFromUser((unsigned int *)a1 + 1);
        else
          v14 = *((_DWORD *)a1 + 1);
        if ( !v14 )
          return 3221225485LL;
        if ( AccessMode )
          v15 = RtlReadULongFromUser((unsigned int *)a1 + 2);
        else
          v15 = *((_DWORD *)a1 + 2);
        P = v15;
        if ( v15 < 0x3E8 )
          return 3221225485LL;
        if ( AccessMode )
          v16 = RtlReadULongFromUser((unsigned int *)a1 + 3);
        else
          v16 = *((_DWORD *)a1 + 3);
        if ( !v16 )
          return 3221225485LL;
        v17 = EtwpSpinLockHoldThreshold;
        if ( v4 == 20 )
        {
          v17 = AccessMode ? RtlReadULongFromUser((unsigned int *)a1 + 4) : *((_DWORD *)a1 + 4);
          if ( (unsigned int)(v17 - 1) <= 0xF423E )
            return 3221225485LL;
        }
        KeWaitForSingleObject(&stru_140F03830.880, Executive, 0, 0, 0LL);
        EtwpSpinLockHoldThreshold = v17;
        EtwpSpinLockSpinThreshold = v14;
        EtwpSpinLockAcquireSampleRate = P;
        EtwpSpinLockContentionSampleRate = v16;
        goto LABEL_59;
      }
      return 3221225506LL;
  }
  if ( ULongFromUser != 6 )
  {
    if ( ULongFromUser == 7 )
    {
      if ( v4 == 16 )
      {
        result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u);
        updated = result;
        if ( (int)result < 0 )
          return result;
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          if ( AccessMode )
            v11 = RtlReadULongFromUser((unsigned int *)a1 + 1);
          else
            v11 = *((_DWORD *)a1 + 1);
          if ( AccessMode )
            v12 = RtlReadULongFromUser((unsigned int *)a1 + 2);
          else
            v12 = *((_DWORD *)a1 + 2);
          if ( AccessMode )
            v13 = RtlReadULongFromUser((unsigned int *)a1 + 3);
          else
            v13 = *((_DWORD *)a1 + 3);
          KeWaitForSingleObject(&stru_140F03830.880, Executive, 0, 0, 0LL);
          EtwpExecutiveResourceReleaseSampleRate = v11;
          EtwpExecutiveResourceContentionSampleRate = v12;
          EtwpExecutiveResourceTimeout = v13;
LABEL_59:
          KeReleaseMutex((PRKMUTEX)&stru_140F03830.880, 0);
          return (unsigned int)updated;
        }
        return 3221225506LL;
      }
      return 3221225476LL;
    }
    return (unsigned int)-1073741822;
  }
LABEL_293:
  if ( v4 < 0x10 )
    return 3221225476LL;
  v103 = v4 - 16;
  if ( (v103 & 3) == 0 )
  {
    if ( PsIsCurrentThreadInServerSilo() && (unsigned int)(ULongFromUser - 14) <= 1 )
      return 3221225506LL;
    v104 = v103 >> 2;
    v105 = a1 + 16;
    if ( AccessMode )
      v106 = (void *)RtlReadULong64FromUser(a1 + 8);
    else
      v106 = (void *)*((_QWORD *)a1 + 1);
    v120[0] = v106;
    v107 = (unsigned __int16)v106;
    if ( (unsigned __int16)v106 == 0xFFFF )
      v107 = LOBYTE(Flink[281].Blink);
    v108 = KeGetCurrentThread();
    --v108->KernelApcDisable;
    v109 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v107, 1);
    v110 = v109;
    if ( v109 )
    {
      updated = EtwpCheckLoggerControlAccess(0x80u, (__int64)v109);
      if ( updated >= 0 )
      {
        switch ( ULongFromUser )
        {
          case 6:
            v112 = EtwpUpdateStackTracing((_RTL_BITMAP *)v110, (__int64)v105, v104, AccessMode);
LABEL_315:
            updated = v112;
            goto LABEL_316;
          case 15:
            v112 = EtwpUpdatePmcCounters((__int64)v110, (__int64)v105, v104, AccessMode);
            goto LABEL_315;
          case 14:
            v112 = EtwpUpdatePmcEvents((__int64)v110, (__int64)v105, v104, AccessMode);
            goto LABEL_315;
        }
        if ( ULongFromUser != 20 )
        {
          v112 = EtwpUpdateProcessorTraceEvents((__int64)v110, (__int64)v105, v104, AccessMode);
          goto LABEL_315;
        }
        LOBYTE(v111) = AccessMode;
        EtwpUpdateLastBranchTracingEvents(v110, v105, v104, v111);
      }
LABEL_316:
      KeReleaseMutex((PRKMUTEX)(v110 + 158), 0);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v110 + 170) + 704LL) + 8LL * *v110),
        1u);
      goto LABEL_73;
    }
    goto LABEL_70;
  }
  return 3221225485LL;
}
