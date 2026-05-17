/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180085C00
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x1800454A0 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeKernel32Functions @ 0x1800858A8 (LdrpInitializeKernel32Functions.c)
 *     LdrGetProcedureAddress @ 0x180085BA0 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x180085BD0 (LdrGetProcedureAddressEx.c)
 *     AVrfpDetectVerifiedExports @ 0x1800C6D0C (AVrfpDetectVerifiedExports.c)
 *     CsrClientConnectToServer @ 0x1800CA4C0 (CsrClientConnectToServer.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpDereferenceEnclave @ 0x180070D94 (LdrpDereferenceEnclave.c)
 *     LdrpReleaseTlsEntry @ 0x18007E780 (LdrpReleaseTlsEntry.c)
 *     LdrpDrainWorkQueue @ 0x180087180 (LdrpDrainWorkQueue.c)
 *     LdrpResolveProcedureAddress @ 0x1800C5A40 (LdrpResolveProcedureAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800C5D7C (AVrfCallAPILookupCallback.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C6170 (LdrpFindLoadedDllByAddress.c)
 *     RtlValidateUserCallTarget @ 0x1800C6B50 (RtlValidateUserCallTarget.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800C7114 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpGetTargetRvaFlag @ 0x1800C71F4 (RtlpGetTargetRvaFlag.c)
 *     LdrpReportError @ 0x1800DA620 (LdrpReportError.c)
 *     LdrpFreeUnicodeString @ 0x1800E04A0 (LdrpFreeUnicodeString.c)
 *     LdrpDropLastInProgressCount @ 0x1800E1CDC (LdrpDropLastInProgressCount.c)
 *     LdrpDestroyNode @ 0x1800E5D90 (LdrpDestroyNode.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E81A0 (LdrpInitializeGraphRecurse.c)
 *     LdrpUnmapModule @ 0x1801199AC (LdrpUnmapModule.c)
 *     ExecuteHotpatchTestRuntimeFunction @ 0x180137A58 (ExecuteHotpatchTestRuntimeFunction.c)
 *     GetHotpatchTestRuntimeFunctionState @ 0x180137A84 (GetHotpatchTestRuntimeFunctionState.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        unsigned int a3,
        _QWORD *a4,
        char a5,
        __int64 a6)
{
  __int64 Heap_0; // r13
  bool v12; // zf
  __int64 v13; // r14
  int v14; // r12d
  int v15; // r15d
  size_t v16; // rbx
  __int64 i; // rbx
  __int64 *v18; // rax
  unsigned __int64 v19; // r9
  int LoadedDllByHandle; // ebx
  __int64 v21; // rdi
  int v22; // r15d
  _QWORD *v23; // rsi
  __int64 v24; // r14
  int LoadedDllByAddress; // eax
  __int64 v26; // rdi
  __int64 v27; // rcx
  _QWORD *SchedulerSharedDataSlot; // rdx
  unsigned int v29; // eax
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rdx
  _QWORD *v35; // r14
  _QWORD *v36; // r15
  volatile signed __int32 *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // [rsp+20h] [rbp-E0h]
  char v41; // [rsp+30h] [rbp-D0h] BYREF
  char v42[7]; // [rsp+31h] [rbp-CFh] BYREF
  _QWORD *v43; // [rsp+38h] [rbp-C8h] BYREF
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h]
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h]
  _QWORD *v52; // [rsp+78h] [rbp-88h]
  char v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+180h] [rbp+80h]

  Heap_0 = 0LL;
  v49 = a6;
  v43 = 0LL;
  v44 = 0;
  v48 = 0;
  v50 = 0LL;
  v52 = a4;
  v47 = a3;
  ExecuteHotpatchTestRuntimeFunction();
  if ( (unsigned int)GetHotpatchTestRuntimeFunctionState() && !a1 && !a2 && !a3 && !a6 && a4 )
  {
    *a4 = 4025479151LL;
    return 3221225485LL;
  }
  v12 = (a5 & 1) == 0;
  v54 = a5 & 1;
  v13 = 0LL;
  v14 = 9;
  v46 = 0LL;
  v41 = 0;
  if ( v12 || (v15 = 6, (void *)qword_1801C5930 != NtCurrentTeb()->ClientId.UniqueThread) )
    v15 = 9;
  if ( a2 )
  {
    v16 = *(unsigned __int16 *)a2;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v16 + 1) || (Heap_0 = (__int64)a2[1], *(_BYTE *)(v16 + Heap_0)) )
    {
      if ( (unsigned int)(v16 + 1) <= 0x80 )
      {
        Heap_0 = (__int64)&v53;
      }
      else
      {
        Heap_0 = RtlAllocateHeap_0();
        if ( !Heap_0 )
          return 3221225626LL;
        v41 = 1;
      }
      memmove((void *)Heap_0, a2[1], v16);
      *(_BYTE *)(v16 + Heap_0) = 0;
    }
  }
  v51 = Heap_0;
  v45 = 0LL;
  for ( i = 0LL; ; LdrpDereferenceEnclave(i) )
  {
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v18 = (__int64 *)LdrpEnclaveList;
    if ( (__int64 *)LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        i = (__int64)v18;
        if ( a1 == v18[9] )
          break;
        v18 = (__int64 *)*v18;
        if ( v18 == &LdrpEnclaveList )
          goto LABEL_24;
      }
    }
    if ( !i )
      break;
    _InterlockedIncrement((volatile signed __int32 *)(i + 60));
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    RtlEnterCriticalSection(i + 16);
    if ( *(_QWORD *)(i + 72) )
    {
      if ( *(_DWORD *)(i + 56) != 16 || *(_DWORD *)(i + 64) != 2 )
      {
        RtlLeaveCriticalSection(i + 16);
        LdrpDereferenceEnclave(i);
        goto LABEL_25;
      }
      RtlLeaveCriticalSection(i + 16);
      v21 = i;
      v45 = i;
      v22 = 3;
      LoadedDllByHandle = 0;
      v23 = *(_QWORD **)(v21 + 112);
      goto LABEL_58;
    }
    RtlLeaveCriticalSection(i + 16);
  }
LABEL_24:
  RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
LABEL_25:
  while ( 1 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, (__int64 *)&v43, &v44, v19);
    if ( LoadedDllByHandle < 0 || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      break;
    v14 = v44;
    if ( v44 >= v15 )
      goto LABEL_57;
    LdrpDereferenceModule((__int64)v43);
    if ( v14 < 0 )
    {
      LoadedDllByHandle = -1073741811;
      v23 = 0LL;
      v21 = 0LL;
      goto LABEL_38;
    }
    LdrpDrainWorkQueue(0LL);
    LdrpDropLastInProgressCount();
  }
  v14 = v44;
LABEL_57:
  v23 = v43;
  v21 = 0LL;
  v22 = 1;
LABEL_58:
  if ( !v23 )
  {
LABEL_38:
    if ( !v21 )
      goto LABEL_108;
    goto LABEL_39;
  }
  v24 = v49;
  v43 = 0LL;
  LoadedDllByAddress = LdrpFindLoadedDllByAddress(v49, &v43, 0LL);
  v26 = (__int64)v43;
  if ( LoadedDllByAddress < 0 )
    v26 = 0LL;
  LoadedDllByHandle = LdrpResolveProcedureAddress(v26, (_DWORD)v23, Heap_0, v47, v22, (__int64)&v46);
  if ( v26 )
  {
    v27 = *(_QWORD *)(v26 + 152);
    if ( *(_DWORD *)(v27 + 24) != -1
      && (*(_DWORD *)(*(_QWORD *)v27 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 276), 0xFFFFFFFF) == 1 )
    {
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        v29 = 0;
        v30 = SchedulerSharedDataSlot;
        while ( *v30 )
        {
          ++v29;
          ++v30;
          if ( v29 >= 8 )
            goto LABEL_72;
        }
        v31 = &SchedulerSharedDataSlot[v29];
        if ( v31 )
          *v31 = &LdrpModuleDatatableLock;
      }
LABEL_72:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)SchedulerSharedDataSlot);
      v33 = *(_QWORD *)(v26 + 160);
      if ( *(_QWORD *)(v33 + 8) != v26 + 160 || (v34 = *(_QWORD **)(v26 + 168), *v34 != v26 + 160) )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      v35 = *(_QWORD **)(v26 + 152);
      v36 = (_QWORD *)*v35;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v26 + 110) )
        LdrpReleaseTlsEntry(v26, 0LL);
      LdrpUnmapModule(v26);
      v37 = *(volatile signed __int32 **)(v26 + 136);
      if ( v37 && v37 != (volatile signed __int32 *)-1LL )
        RtlReleaseActivationContext(v37);
      if ( *(_QWORD *)(v26 + 80) )
        LdrpFreeUnicodeString(v26 + 72);
      RtlFreeHeap_0();
      if ( v36 == v35 )
        LdrpDestroyNode(v35);
      v24 = v49;
    }
  }
  if ( LoadedDllByHandle < 0 )
  {
    v13 = v46;
  }
  else
  {
    if ( v14 != 7
      || v54
      || (NtCurrentTeb()->SameTebFlags & 0x1000) == 0
      || (void *)qword_1801C5930 == NtCurrentTeb()->ClientId.UniqueThread
      || (v38 = v23[19],
          v42[0] = 0,
          LoadedDllByHandle = LdrpInitializeGraphRecurse(v38, 0LL, v42),
          LoadedDllByHandle >= 0) )
    {
      v39 = v45;
      if ( v45 )
        goto LABEL_100;
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback(v24, v23[6], v46, 0, (__int64)&v46);
      if ( !g_ShimsEnabled )
      {
LABEL_100:
        v13 = v46;
      }
      else
      {
        v40 = v24;
        v13 = v46;
        v50 = 0LL;
        ((void (__fastcall *)(__int64 *, _QWORD *, __int64, _QWORD, __int64))(__ROR8__(
                                                                                g_pfnSE_GetProcAddressForCaller,
                                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
          &v50,
          v23,
          v46,
          0LL,
          v40);
        if ( v50 )
          v13 = v50;
      }
      goto LABEL_103;
    }
    v13 = 0LL;
  }
  v39 = v45;
  if ( LoadedDllByHandle == -1073741515 )
  {
LABEL_104:
    LoadedDllByHandle = -1073741702;
    goto LABEL_105;
  }
LABEL_103:
  if ( LoadedDllByHandle == -1073741502 )
    goto LABEL_104;
LABEL_105:
  if ( !v39 )
  {
    LdrpDereferenceModule((__int64)v23);
LABEL_108:
    if ( LoadedDllByHandle == -1073741702 )
    {
      if ( !Heap_0 )
        Heap_0 = v47;
      LoadedDllByHandle = (v51 != 0) - 1073741512;
      LdrpReportError(0LL, Heap_0, (unsigned int)LoadedDllByHandle);
    }
    goto LABEL_41;
  }
  LdrpDereferenceEnclave(v39);
LABEL_39:
  if ( LoadedDllByHandle < 0 )
    goto LABEL_108;
  v13 += v23[23] - v23[6];
LABEL_41:
  if ( v41 )
    RtlFreeHeap_0();
  if ( !UseWOW64
    && LoadedDllByHandle >= 0
    && qword_1801E3518
    && (dword_1801E34FC & 1) == 0
    && (BYTE5(qword_1801E3500) & 3) == 3
    && (unsigned int)RtlValidateUserCallTarget(v13, &v48) != 1
    && (v48 & 0x10) != 0 )
  {
    if ( !qword_1801E3518 || (dword_1801E34FC & 1) != 0 )
    {
      LoadedDllByHandle = 0;
    }
    else
    {
      v41 = 0;
      if ( !(unsigned __int8)RtlpGetTargetRvaFlag(v13, &v41)
        || (v41 & 3) != 2
        || (LoadedDllByHandle = RtlpGuardGrantSuppressedCallAccess(v13, 4LL), LoadedDllByHandle < 0) )
      {
        __fastfail(0x2Eu);
      }
    }
  }
  *v52 = v13;
  return (unsigned int)LoadedDllByHandle;
}
