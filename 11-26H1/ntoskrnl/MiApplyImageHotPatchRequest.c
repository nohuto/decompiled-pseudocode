/*
 * XREFs of MiApplyImageHotPatchRequest @ 0x140874C78
 * Callers:
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiDereferenceControlAreaBySection @ 0x14036F4A8 (MiDereferenceControlAreaBySection.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiWriteVadFlags @ 0x14046CF50 (MiWriteVadFlags.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiInsertVadEvent @ 0x140494C48 (MiInsertVadEvent.c)
 *     MiReferenceMappedControlArea @ 0x1406F4F18 (MiReferenceMappedControlArea.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiApplyImageHotPatch @ 0x140874A08 (MiApplyImageHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x1408758FC (MiCaptureHotPatchInfo.c)
 *     MiDeleteHotPatchEntry @ 0x140875DB0 (MiDeleteHotPatchEntry.c)
 *     MiGetAllRegisteredPatches @ 0x14087607C (MiGetAllRegisteredPatches.c)
 *     MiGetProcessHotPatchContext @ 0x140876358 (MiGetProcessHotPatchContext.c)
 *     MiGetVadForHotPatchInProgress @ 0x1408763E8 (MiGetVadForHotPatchInProgress.c)
 *     MiLogHotPatchOperation @ 0x140877E0C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchVad @ 0x140879FC4 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x14087A0F8 (MiProcessPatchImageCfg.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PsWow64GetProcessNtdllType @ 0x1409E6F4C (PsWow64GetProcessNtdllType.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 *     MiReleaseHotPatchResources @ 0x140B57DDC (MiReleaseHotPatchResources.c)
 *     MiInitializeImageHotPatchContext @ 0x140B6429C (MiInitializeImageHotPatchContext.c)
 *     RtlApplyHotPatch @ 0x140C0827C (RtlApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiApplyImageHotPatchRequest(__int64 a1)
{
  volatile signed __int32 *v2; // r12
  PVOID v3; // r15
  __int64 v4; // r14
  char v5; // di
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // r10
  _KPROCESS *Process; // rcx
  int AllRegisteredPatches; // esi
  int v12; // eax
  struct _EX_RUNDOWN_REF *v13; // rcx
  int VadForHotPatchInProgress; // eax
  __int64 v15; // rcx
  unsigned __int64 LockedVadEvent; // rax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rax
  signed __int64 v22; // rax
  __int64 v23; // rcx
  __int16 v24; // ax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  signed __int64 v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  char v33; // dl
  char *v34; // r15
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // r10d
  _QWORD *v39; // r14
  _QWORD *v40; // rbx
  UNICODE_STRING v42; // xmm0
  bool v43; // zf
  PVOID v44; // rsi
  __int64 ProcessHotPatchContext; // rax
  __int64 v46; // r15
  AutoBoost *v47; // rax
  void *v48; // rdx
  AutoBoost *v49; // rcx
  int v50; // ecx
  unsigned int v51; // esi
  UNICODE_STRING v52; // xmm1
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // [rsp+20h] [rbp-2E8h]
  int v57; // [rsp+20h] [rbp-2E8h]
  char v58; // [rsp+28h] [rbp-2E0h]
  int v59; // [rsp+38h] [rbp-2D0h]
  int v60; // [rsp+48h] [rbp-2C0h]
  int v61; // [rsp+78h] [rbp-290h]
  int v62; // [rsp+C8h] [rbp-240h]
  __int64 v63; // [rsp+D0h] [rbp-238h]
  __int64 v64; // [rsp+D8h] [rbp-230h]
  int v65; // [rsp+E0h] [rbp-228h]
  PVOID v66; // [rsp+F8h] [rbp-210h] BYREF
  __int64 v67; // [rsp+100h] [rbp-208h]
  unsigned int v68; // [rsp+108h] [rbp-200h] BYREF
  __int64 v69; // [rsp+110h] [rbp-1F8h]
  PVOID P; // [rsp+118h] [rbp-1F0h] BYREF
  PVOID Object; // [rsp+120h] [rbp-1E8h] BYREF
  __int64 v72; // [rsp+128h] [rbp-1E0h] BYREF
  PVOID v73; // [rsp+130h] [rbp-1D8h] BYREF
  struct _EX_RUNDOWN_REF *v74; // [rsp+138h] [rbp-1D0h]
  HANDLE Handle; // [rsp+140h] [rbp-1C8h] BYREF
  __int64 v76; // [rsp+148h] [rbp-1C0h] BYREF
  char *v77; // [rsp+150h] [rbp-1B8h] BYREF
  PVOID v78; // [rsp+158h] [rbp-1B0h]
  UNICODE_STRING DestinationString; // [rsp+160h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter1[2]; // [rsp+170h] [rbp-198h] BYREF
  signed __int64 v81; // [rsp+180h] [rbp-188h]
  signed __int64 v82; // [rsp+188h] [rbp-180h]
  char v83[8]; // [rsp+190h] [rbp-178h] BYREF
  __int64 v84; // [rsp+198h] [rbp-170h]
  int v85; // [rsp+1B4h] [rbp-154h]
  __int64 v86; // [rsp+1D8h] [rbp-130h]
  __int64 v87; // [rsp+1E0h] [rbp-128h]
  __int64 v88; // [rsp+220h] [rbp-E8h]
  int v89; // [rsp+228h] [rbp-E0h]
  char v90[8]; // [rsp+230h] [rbp-D8h] BYREF
  int v91[16]; // [rsp+238h] [rbp-D0h]
  int v92[36]; // [rsp+278h] [rbp-90h]
  char v93; // [rsp+310h] [rbp+8h]
  char v94; // [rsp+310h] [rbp+8h]
  unsigned int v95; // [rsp+310h] [rbp+8h]
  __int16 v96; // [rsp+318h] [rbp+10h]
  AutoBoost *v97; // [rsp+318h] [rbp+10h]
  __int64 v98; // [rsp+320h] [rbp+18h] BYREF
  unsigned int v99; // [rsp+328h] [rbp+20h] BYREF

  memset_0(v90, 0, 0xA0uLL);
  memset_0(v83, 0, 0xA0uLL);
  BugCheckParameter1[1] = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  v72 = 0LL;
  v2 = 0LL;
  DestinationString = 0LL;
  v73 = 0LL;
  v3 = 0LL;
  v66 = 0LL;
  v4 = 0LL;
  v67 = 0LL;
  BugCheckParameter1[0] = 0LL;
  P = 0LL;
  Object = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v5 = 0;
  MiInitializeImageHotPatchContext(v90, 0LL, 0LL);
  MiInitializeImageHotPatchContext(v83, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v9 = 0x400000000020LL;
  v43 = *(_DWORD *)a1 == 2;
  v69 = 0LL;
  v68 = 0;
  Process = CurrentThread->ApcState.Process;
  v99 = 0;
  v74 = (struct _EX_RUNDOWN_REF *)Process;
  v96 = WORD2(Process[3].PerProcessorCycleTimes);
  if ( !v43 )
  {
    AllRegisteredPatches = -1073741811;
    goto LABEL_48;
  }
  if ( *(_QWORD *)(a1 + 8) != -1LL
    || (v12 = *(_DWORD *)(a1 + 4), (v12 & 0x7FFFFFFC) != 0)
    || (v12 & 3) == 0
    || !*(_QWORD *)(a1 + 24)
    || !*(_QWORD *)(a1 + 16) )
  {
    AllRegisteredPatches = -1073741811;
    goto LABEL_48;
  }
  if ( (unsigned int)PsWow64GetProcessNtdllType(Process) == 2 )
  {
    AllRegisteredPatches = -1073741637;
    goto LABEL_48;
  }
  v5 = ExAcquireRundownProtection_0(v13 + 61) & 1;
  if ( v5 )
  {
    VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(a1 + 16), 0LL, &v73, &v68);
    v2 = (volatile signed __int32 *)v73;
    AllRegisteredPatches = VadForHotPatchInProgress;
    if ( VadForHotPatchInProgress < 0 )
      goto LABEL_46;
    v3 = v73;
    v98 = ***((_QWORD ***)v73 + 10);
    v15 = *(_QWORD *)(v98 + 56);
    LODWORD(v69) = *(_DWORD *)(v15 + 60);
    HIDWORD(v69) = *(_DWORD *)(v15 + 72);
    v93 = *(_BYTE *)(v98 + 15) & 0xF;
    LockedVadEvent = MiLocateLockedVadEvent((__int64)v73, 0x200u);
    if ( LockedVadEvent )
    {
      v4 = *(_QWORD *)(LockedVadEvent + 24);
    }
    else
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(64LL, 0x68uLL, 1648912717, CurrentProcessorColor | 0x80000000);
      v19 = PoolMm;
      if ( !PoolMm )
      {
LABEL_16:
        AllRegisteredPatches = -1073741670;
        goto LABEL_28;
      }
      *(_WORD *)(PoolMm + 8) = 512;
      v20 = MmGetCurrentProcessorColor();
      v21 = ExAllocatePoolMm(256LL, 0x48uLL, 1313165384, v20 | 0x80000000);
      *(_QWORD *)(v19 + 24) = v21;
      if ( !v21 )
      {
        ExFreePoolWithTag((PVOID)v19, 0);
        goto LABEL_16;
      }
      *(_BYTE *)(v19 + 11) = (unsigned __int8)v74 >> 4;
      MiInsertVadEvent((__int64)v2, v19, 1);
      v4 = *(_QWORD *)(v19 + 24);
      v6 = v98;
      v68 = 2;
      *(_QWORD *)(v4 + 32) = v69;
    }
    *(_DWORD *)(v4 + 68) |= 1u;
    v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), -1LL, -1LL);
    v23 = *(_QWORD *)(v6 + 56);
    v81 = v22;
    v24 = *(_WORD *)(v23 + 48);
    LOWORD(v98) = v24;
    if ( v24 == -31132 || v24 == 332 || v24 == -21916 )
    {
      MiUnlockVad((__int64)CurrentThread, (__int64)v2);
      v25 = MiGetVadForHotPatchInProgress(*(_QWORD *)(a1 + 24), 1LL, &v66, &v99);
      v3 = v66;
      AllRegisteredPatches = v25;
      if ( v25 < 0 )
        goto LABEL_46;
      v26 = ***((_QWORD ***)v66 + 10);
      v27 = *(_QWORD *)(v26 + 56);
      if ( (_WORD)v98 == *(_WORD *)(v27 + 48) )
      {
        LODWORD(v76) = *(_DWORD *)(v27 + 60);
        HIDWORD(v76) = *(_DWORD *)(v27 + 72);
        v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 24), -1LL, -1LL);
        v29 = (__int64 *)*((_QWORD *)v3 + 10);
        v82 = v28;
        v67 = *v29;
        MiReferenceMappedControlArea(v67);
        v3 = v66;
        MiUnlockVad((__int64)CurrentThread, (__int64)v66);
        LOBYTE(v30) = 8;
        LOBYTE(v31) = v93;
        v32 = SeCompareSigningLevels(v31, v30);
        v33 = 8;
        if ( v32 )
          v33 = v93;
        v94 = v33;
        AllRegisteredPatches = MiGetAllRegisteredPatches(v74, (unsigned int)v69, HIDWORD(v69), &v77);
        v78 = v77;
        if ( AllRegisteredPatches < 0 )
          goto LABEL_46;
        AllRegisteredPatches = 0;
        v34 = v77;
        if ( v77 )
        {
          do
          {
            LOBYTE(v6) = v94;
            v35 = MiOpenHotPatchFile(
                    (int)v34 + 40,
                    0,
                    v6,
                    (unsigned int)&Handle,
                    (__int64)&Object,
                    (__int64)BugCheckParameter1,
                    0LL,
                    0LL);
            if ( v35 < 0 )
            {
              if ( AllRegisteredPatches >= 0 )
                AllRegisteredPatches = v35;
            }
            else
            {
              v36 = MiSectionControlArea((__int64)Object);
              v37 = v67;
              if ( v36 == v67 )
                goto LABEL_42;
              MiRemoveFromSystemSpace(BugCheckParameter1[0]);
              BugCheckParameter1[0] = 0LL;
              ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
              Object = 0LL;
              ObCloseHandle(Handle, 0);
              Handle = 0LL;
            }
            v34 = *(char **)v34;
          }
          while ( v34 );
          v37 = v67;
LABEL_42:
          if ( v34 )
          {
            MiDereferenceControlAreaBySection(v37, 1u);
            v42 = *(UNICODE_STRING *)(v34 + 40);
            v67 = 0LL;
            DestinationString = v42;
            RtlInitUnicodeString((PUNICODE_STRING)(v34 + 40), 0LL);
            if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
              v43 = v99 == 0;
            else
              v43 = v99 == 3;
            if ( v43 )
            {
              AllRegisteredPatches = MiCaptureHotPatchInfo(
                                       (unsigned int)BugCheckParameter1,
                                       v81,
                                       *(_DWORD *)(v4 + 32),
                                       *(_DWORD *)(v4 + 36),
                                       v96,
                                       (__int64)&P,
                                       (__int64)&v72);
              if ( AllRegisteredPatches >= 0 )
              {
                v44 = P;
                v95 = *((_DWORD *)P + 2);
                if ( *(_DWORD *)(v4 + 64) < v95 )
                {
                  v3 = v66;
                  if ( (_WORD)v98 == 332 )
                  {
                    v6 = 4095LL;
                    v7 = 0x100000000LL;
                    if ( (((*((unsigned int *)v2 + 7) | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL
                      || (((*((unsigned int *)v66 + 7) | ((unsigned __int64)*((unsigned __int8 *)v66 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL )
                    {
                      AllRegisteredPatches = -1073741799;
                      goto LABEL_46;
                    }
                  }
                  if ( (_DWORD)v81 == -1 || (_DWORD)v82 == -1 )
                  {
                    AllRegisteredPatches = -1073739516;
                    v67 = 0LL;
                    goto LABEL_46;
                  }
                  ProcessHotPatchContext = MiGetProcessHotPatchContext(v74, 1LL);
                  v46 = ProcessHotPatchContext;
                  if ( ProcessHotPatchContext )
                  {
                    AllRegisteredPatches = MiPrepareToHotPatchVad(
                                             ProcessHotPatchContext,
                                             (_DWORD)v66,
                                             (unsigned int)v83,
                                             v7,
                                             v56,
                                             v96,
                                             (__int64)v44,
                                             0LL,
                                             *(_DWORD *)(a1 + 4) & 1);
                    if ( AllRegisteredPatches < 0 )
                      goto LABEL_45;
                    AllRegisteredPatches = MiPrepareToHotPatchVad(
                                             v46,
                                             (_DWORD)v2,
                                             (unsigned int)v90,
                                             v7,
                                             v57,
                                             v96,
                                             (__int64)P,
                                             v4,
                                             1);
                    if ( AllRegisteredPatches < 0 )
                      goto LABEL_45;
                    if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
                    {
                      AllRegisteredPatches = MiProcessPatchImageCfg(v66, P, v72);
                      if ( AllRegisteredPatches < 0 )
                        goto LABEL_45;
                      LODWORD(v98) = 0;
                      AllRegisteredPatches = RtlApplyHotPatch(
                                               v92[0],
                                               v91[0],
                                               0,
                                               0,
                                               0LL,
                                               v58,
                                               0LL,
                                               0,
                                               0LL,
                                               v60,
                                               v86,
                                               v84,
                                               v87,
                                               v85,
                                               (__int64)&v98,
                                               v61,
                                               v88,
                                               v89,
                                               (__int64)P,
                                               v72,
                                               2,
                                               v96,
                                               0LL,
                                               0LL,
                                               0LL,
                                               v62,
                                               v63,
                                               v64,
                                               v65);
                      if ( AllRegisteredPatches < 0 )
                        goto LABEL_45;
                      v99 = 3;
                    }
                    if ( (*(_DWORD *)(a1 + 4) & 2) == 0
                      || (AllRegisteredPatches = MiApplyImageHotPatch((__int64)v90, (__int64)v83, v4, (__int64)P, v72),
                          AllRegisteredPatches >= 0) )
                    {
                      --CurrentThread->SpecialApcDisable;
                      v47 = (AutoBoost *)KeAbPreAcquire(v46 + 16, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v7);
                      v49 = v47;
                      v97 = v47;
                      if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 16), 0LL) )
                      {
                        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v46 + 16), v47, v46 + 16);
                        v49 = v97;
                      }
                      if ( v49 )
                      {
                        if ( (KiAbpGlobalState & 1) != 0 )
                          AutoBoost::KiAbpPostAcquire(v49, v48);
                        else
                          *((_BYTE *)v49 + 10) = 1;
                      }
                      if ( stru_140E366D8.FirstArgument
                        && *(_DWORD *)stru_140E366D8.FirstArgument
                        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
                      {
                        v59 = AllRegisteredPatches;
                        v51 = v95;
                        MiLogHotPatchOperation(
                          v50,
                          v4,
                          *(_DWORD *)(v4 + 32),
                          *(_DWORD *)(v4 + 36),
                          v95,
                          (__int64)&v76,
                          (__int64)&DestinationString,
                          v59,
                          ((*(_DWORD *)(a1 + 4) >> 1) & 1) == 0);
                      }
                      else
                      {
                        v51 = v95;
                      }
                      if ( (*(_DWORD *)(a1 + 4) & 2) != 0 )
                      {
                        v52 = *(UNICODE_STRING *)(v4 + 40);
                        *(_QWORD *)(v4 + 56) = v76;
                        *(_DWORD *)(v4 + 64) = v51;
                        *(UNICODE_STRING *)(v4 + 40) = DestinationString;
                        DestinationString = v52;
                        if ( !*(_QWORD *)v4 )
                        {
                          v53 = *(__int64 **)(v46 + 8);
                          if ( *v53 != v46 )
                            __fastfail(3u);
                          *(_QWORD *)v4 = v46;
                          *(_QWORD *)(v4 + 8) = v53;
                          *v53 = v4;
                          *(_QWORD *)(v46 + 8) = v4;
                        }
                      }
                      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                        ExfTryToWakePushLock((volatile signed __int64 *)(v46 + 16));
                      KeAbPostRelease(v46 + 16);
                      v43 = CurrentThread->SpecialApcDisable++ == -1;
                      if ( v43
                        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
                      {
                        KiCheckForKernelApcDelivery(v55, v54);
                      }
                      v2 = (volatile signed __int32 *)v73;
                      AllRegisteredPatches = 0;
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    AllRegisteredPatches = -1073741670;
                  }
                }
                else
                {
                  AllRegisteredPatches = -1073740758;
                }
              }
            }
            else
            {
              AllRegisteredPatches = -1073700861;
            }
LABEL_45:
            v3 = v66;
            goto LABEL_46;
          }
          if ( AllRegisteredPatches < 0 )
            goto LABEL_45;
        }
        AllRegisteredPatches = -1073740588;
        goto LABEL_45;
      }
      AllRegisteredPatches = -1073741621;
    }
    else
    {
      AllRegisteredPatches = -1073741701;
    }
LABEL_28:
    v67 = 0LL;
    if ( v3 )
    {
      MiUnlockVad((__int64)CurrentThread, (__int64)v3);
      v67 = 0LL;
LABEL_30:
      v3 = v66;
      goto LABEL_46;
    }
    goto LABEL_45;
  }
  AllRegisteredPatches = -1073741558;
LABEL_46:
  if ( AllRegisteredPatches >= 0 )
    goto LABEL_52;
  v9 = 0x400000000020LL;
LABEL_48:
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, v9) )
  {
    MiLogHotPatchOperationStatus(v38, v69, HIDWORD(v69), (unsigned int)&DestinationString, AllRegisteredPatches, 0);
  }
LABEL_52:
  if ( v2 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v2, v6, (struct _KLOCK_ENTRIES *)v7);
    MiWriteVadFlags((__int64)v2, 4LL, v68);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 68) &= ~1u;
      v4 &= -(__int64)((*(_DWORD *)(v4 + 68) & 2) != 0);
    }
    MiUnlockAndDereferenceVad(v2);
  }
  if ( v3 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v3, v6, (struct _KLOCK_ENTRIES *)v7);
    MiWriteVadFlags((__int64)v3, 4LL, v99);
    MiUnlockAndDereferenceVad((volatile signed __int32 *)v3);
  }
  if ( v4 )
    MiDeleteHotPatchEntry((PVOID)v4);
  MiReleaseHotPatchResources(v90);
  MiReleaseHotPatchResources(v83);
  if ( (v5 & 1) != 0 )
    ExReleaseRundownProtection_0(v74 + 61);
  if ( BugCheckParameter1[0] )
    MiRemoveFromSystemSpace(BugCheckParameter1[0]);
  if ( v67 )
    MiDereferenceControlAreaBySection(v67, 1u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  v39 = v78;
  if ( v78 )
  {
    do
    {
      v40 = v39;
      v39 = (_QWORD *)*v39;
      RtlFreeAnsiString((PUNICODE_STRING)(v40 + 5));
      ExFreePoolWithTag(v40, 0);
    }
    while ( v39 );
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)AllRegisteredPatches;
}
