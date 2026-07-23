/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x18007CFA0
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x18002FA10 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeKernel32Functions @ 0x18007CC48 (LdrpInitializeKernel32Functions.c)
 *     LdrGetProcedureAddress @ 0x18007CF40 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x18007CF70 (LdrGetProcedureAddressEx.c)
 *     AVrfpDetectVerifiedExports @ 0x1800C44CC (AVrfpDetectVerifiedExports.c)
 *     CsrClientConnectToServer @ 0x1800C7C30 (CsrClientConnectToServer.c)
 *     LdrpGetShimEngineInterface @ 0x18011D844 (LdrpGetShimEngineInterface.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x18007E4F0 (LdrpDrainWorkQueue.c)
 *     LdrpDereferenceEnclave @ 0x1800911E4 (LdrpDereferenceEnclave.c)
 *     LdrpReleaseTlsEntry @ 0x1800C1840 (LdrpReleaseTlsEntry.c)
 *     LdrpResolveProcedureAddress @ 0x1800C3200 (LdrpResolveProcedureAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800C353C (AVrfCallAPILookupCallback.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C3930 (LdrpFindLoadedDllByAddress.c)
 *     RtlValidateUserCallTarget @ 0x1800C4310 (RtlValidateUserCallTarget.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800C48D4 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGetTargetRvaFlag @ 0x1800C49B4 (RtlpGetTargetRvaFlag.c)
 *     LdrpReportError @ 0x1800D75E0 (LdrpReportError.c)
 *     LdrpFreeUnicodeString @ 0x1800DDD40 (LdrpFreeUnicodeString.c)
 *     LdrpDropLastInProgressCount @ 0x1800DF57C (LdrpDropLastInProgressCount.c)
 *     LdrpDestroyNode @ 0x1800E3FA0 (LdrpDestroyNode.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E73B0 (LdrpInitializeGraphRecurse.c)
 *     LdrpUnmapModule @ 0x18011975C (LdrpUnmapModule.c)
 *     ExecuteHotpatchTestRuntimeFunction @ 0x1801377C8 (ExecuteHotpatchTestRuntimeFunction.c)
 *     GetHotpatchTestRuntimeFunctionState @ 0x1801377F4 (GetHotpatchTestRuntimeFunctionState.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressForCaller(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags,
        PVOID *Callback)
{
  char *Heap_0; // r13
  bool v12; // zf
  char *v13; // r14
  int v14; // r12d
  int v15; // r15d
  size_t Length; // rbx
  unsigned int v17; // ecx
  __int64 i; // rbx
  __int64 v19; // rax
  char *v20; // r9
  NTSTATUS LoadedDllByHandle; // ebx
  __int64 v22; // rdi
  int v23; // r15d
  char *v24; // rsi
  PVOID *v25; // r14
  int LoadedDllByAddress; // eax
  char *v27; // rdi
  __int64 v28; // rcx
  _QWORD *SchedulerSharedDataSlot; // rdx
  unsigned int v30; // eax
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  char **v34; // r8
  PVOID *v35; // rdx
  _QWORD *v36; // r14
  _QWORD *v37; // r15
  _ACTIVATION_CONTEXT *v38; // rcx
  __int64 v39; // rcx
  PVOID v40; // rdi
  PVOID *v41; // [rsp+20h] [rbp-E0h]
  char v42; // [rsp+30h] [rbp-D0h]
  char v43[7]; // [rsp+31h] [rbp-CFh] BYREF
  PVOID v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h]
  char *v47; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID *v50; // [rsp+60h] [rbp-A0h]
  char *v51; // [rsp+68h] [rbp-98h] BYREF
  char *v52; // [rsp+70h] [rbp-90h]
  PVOID *v53; // [rsp+78h] [rbp-88h]
  char v54; // [rsp+80h] [rbp-80h] BYREF
  ULONG Flagsa; // [rsp+180h] [rbp+80h]

  Heap_0 = 0LL;
  v50 = Callback;
  v44 = 0LL;
  v45 = 0;
  v49 = 0;
  v51 = 0LL;
  v53 = ProcedureAddress;
  v48 = ProcedureNumber;
  ExecuteHotpatchTestRuntimeFunction();
  if ( (unsigned int)GetHotpatchTestRuntimeFunctionState()
    && !DllHandle
    && !ProcedureName
    && !ProcedureNumber
    && !Callback
    && ProcedureAddress )
  {
    *ProcedureAddress = (PVOID)4025479151LL;
    return -1073741811;
  }
  v12 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v13 = 0LL;
  v14 = 9;
  v47 = 0LL;
  v42 = 0;
  if ( v12 || (v15 = 6, LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread) )
    v15 = 9;
  if ( ProcedureName )
  {
    Length = ProcedureName->Length;
    v17 = Length + 1;
    if ( ProcedureName->MaximumLength < (unsigned int)(Length + 1) || (Heap_0 = ProcedureName->Buffer, Heap_0[Length]) )
    {
      if ( v17 <= 0x80 )
      {
        Heap_0 = &v54;
      }
      else
      {
        Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v17);
        if ( !Heap_0 )
          return -1073741670;
        v42 = 1;
      }
      memmove(Heap_0, ProcedureName->Buffer, Length);
      Heap_0[Length] = 0;
    }
  }
  v52 = Heap_0;
  BaseAddress = 0LL;
  for ( i = 0LL; ; LdrpDereferenceEnclave((PVOID)i) )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v19 = LdrpEnclaveList;
    if ( (__int64 *)LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        i = v19;
        if ( DllHandle == *(PVOID *)(v19 + 72) )
          break;
        v19 = *(_QWORD *)v19;
        if ( (__int64 *)v19 == &LdrpEnclaveList )
          goto LABEL_24;
      }
    }
    if ( !i )
      break;
    _InterlockedIncrement((volatile signed __int32 *)(i + 60));
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(i + 16));
    if ( *(_QWORD *)(i + 72) )
    {
      if ( *(_DWORD *)(i + 56) != 16 || *(_DWORD *)(i + 64) != 2 )
      {
        RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 16));
        LdrpDereferenceEnclave((PVOID)i);
        goto LABEL_25;
      }
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 16));
      v22 = i;
      BaseAddress = (PVOID)i;
      v23 = 3;
      LoadedDllByHandle = 0;
      v24 = *(char **)(v22 + 112);
      goto LABEL_55;
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(i + 16));
  }
LABEL_24:
  RtlLeaveCriticalSection(&LdrpEnclaveListLock);
LABEL_25:
  while ( 1 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllHandle, (__int64 *)&v44, &v45, v20);
    if ( LoadedDllByHandle < 0 || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      break;
    v14 = v45;
    if ( v45 >= v15 )
      goto LABEL_54;
    LdrpDereferenceModule((char *)v44);
    if ( v14 < 0 )
    {
      LoadedDllByHandle = -1073741811;
      v24 = 0LL;
      v22 = 0LL;
      goto LABEL_38;
    }
    LdrpDrainWorkQueue(0LL);
    LdrpDropLastInProgressCount();
  }
  v14 = v45;
LABEL_54:
  v24 = (char *)v44;
  v22 = 0LL;
  v23 = 1;
LABEL_55:
  if ( !v24 )
  {
LABEL_38:
    if ( !v22 )
      goto LABEL_105;
    goto LABEL_39;
  }
  v25 = v50;
  v44 = 0LL;
  LoadedDllByAddress = LdrpFindLoadedDllByAddress(v50, &v44, 0LL);
  v27 = (char *)v44;
  if ( LoadedDllByAddress < 0 )
    v27 = 0LL;
  LoadedDllByHandle = LdrpResolveProcedureAddress((_DWORD)v27, (_DWORD)v24, (_DWORD)Heap_0, v48, v23, (__int64)&v47);
  if ( v27 )
  {
    v28 = *((_QWORD *)v27 + 19);
    if ( *(_DWORD *)(v28 + 24) != -1
      && (*(_DWORD *)(*(_QWORD *)v28 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)v27 + 69, 0xFFFFFFFF) == 1 )
    {
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v30 = 0;
        v31 = SchedulerSharedDataSlot;
        while ( *v31 )
        {
          ++v30;
          ++v31;
          if ( v30 >= 8 )
            goto LABEL_69;
        }
        v32 = &SchedulerSharedDataSlot[v30];
        if ( v32 )
          *v32 = &LdrpModuleDatatableLock;
      }
LABEL_69:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(
          (volatile signed __int64 *)&LdrpModuleDatatableLock,
          (unsigned __int64)SchedulerSharedDataSlot);
      v34 = (char **)*((_QWORD *)v27 + 20);
      if ( v34[1] != v27 + 160 || (v35 = (PVOID *)*((_QWORD *)v27 + 21), *v35 != v27 + 160) )
        __fastfail(3u);
      *v35 = v34;
      v34[1] = (char *)v35;
      v36 = (_QWORD *)*((_QWORD *)v27 + 19);
      v37 = (_QWORD *)*v36;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *((_WORD *)v27 + 55) )
        LdrpReleaseTlsEntry(v27, 0LL);
      LdrpUnmapModule(v27);
      v38 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v27 + 17);
      if ( v38 && v38 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v38);
      if ( *((_QWORD *)v27 + 10) )
        LdrpFreeUnicodeString(v27 + 72);
      RtlFreeHeap_0(LdrpHeap, 0, v27);
      if ( v37 == v36 )
        LdrpDestroyNode(v36);
      v25 = v50;
    }
  }
  if ( LoadedDllByHandle < 0 )
  {
    v13 = v47;
  }
  else
  {
    if ( v14 != 7
      || Flagsa
      || (NtCurrentTeb()->SameTebFlags & 0x1000) == 0
      || LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread
      || (v39 = *((_QWORD *)v24 + 19),
          v43[0] = 0,
          LoadedDllByHandle = LdrpInitializeGraphRecurse(v39, 0LL, v43),
          LoadedDllByHandle >= 0) )
    {
      v40 = BaseAddress;
      if ( BaseAddress )
        goto LABEL_97;
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback((_DWORD)v25, *((_QWORD *)v24 + 6), (_DWORD)v47, 0, (__int64)&v47);
      if ( !g_ShimsEnabled )
      {
LABEL_97:
        v13 = v47;
      }
      else
      {
        v41 = v25;
        v13 = v47;
        v51 = 0LL;
        ((void (__fastcall *)(char **, char *, char *, _QWORD, PVOID *))(__ROR8__(
                                                                           g_pfnSE_GetProcAddressForCaller,
                                                                           64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
          &v51,
          v24,
          v47,
          0LL,
          v41);
        if ( v51 )
          v13 = v51;
      }
      goto LABEL_100;
    }
    v13 = 0LL;
  }
  v40 = BaseAddress;
  if ( LoadedDllByHandle == -1073741515 )
  {
LABEL_101:
    LoadedDllByHandle = -1073741702;
    goto LABEL_102;
  }
LABEL_100:
  if ( LoadedDllByHandle == -1073741502 )
    goto LABEL_101;
LABEL_102:
  if ( !v40 )
  {
    LdrpDereferenceModule(v24);
LABEL_105:
    if ( LoadedDllByHandle == -1073741702 )
    {
      if ( !Heap_0 )
        Heap_0 = (char *)v48;
      LoadedDllByHandle = (v52 != 0LL) - 1073741512;
      LdrpReportError(0LL, Heap_0, (unsigned int)LoadedDllByHandle);
    }
    goto LABEL_41;
  }
  LdrpDereferenceEnclave(v40);
LABEL_39:
  if ( LoadedDllByHandle < 0 )
    goto LABEL_105;
  v13 += *((_QWORD *)v24 + 23) - *((_QWORD *)v24 + 6);
LABEL_41:
  if ( v42 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  if ( !UseWOW64
    && LoadedDllByHandle >= 0
    && LdrSystemDllInitBlock.CfgBitMap
    && (LdrSystemDllInitBlock.Flags & 1) == 0
    && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3
    && (unsigned int)RtlValidateUserCallTarget(v13, &v49) != 1
    && (v49 & 0x10) != 0 )
  {
    if ( LdrSystemDllInitBlock.CfgBitMap )
    {
      if ( (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlpGetTargetRvaFlag(v13);
        __fastfail(0x2Eu);
      }
    }
    LoadedDllByHandle = 0;
  }
  *v53 = v13;
  return LoadedDllByHandle;
}
