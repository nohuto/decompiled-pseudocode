/*
 * XREFs of RtlQueueWorkItem @ 0x1800867E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlPcToFileHeader @ 0x1800361E0 (RtlPcToFileHeader.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180039308 (TppPoolpFree.c)
 *     RtlpTpResumeImpersonation @ 0x1800397B8 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x180039800 (RtlpTpInitializeData.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     TppGetCurrentThreadNumaNode @ 0x180086D00 (TppGetCurrentThreadNumaNode.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180086E0C (RtlpTpETWCallbackEnqueue.c)
 *     TpPostTask @ 0x180086EE0 (TpPostTask.c)
 *     RtlpTpWorkUnposted @ 0x180087430 (RtlpTpWorkUnposted.c)
 *     RtlpTpDeleteData @ 0x180087894 (RtlpTpDeleteData.c)
 *     TpUnreserveTaskPost @ 0x1800DDF78 (TpUnreserveTaskPost.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenThreadToken @ 0x18015F2C0 (NtOpenThreadToken.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  char v6; // r15
  HANDLE *v7; // rsi
  NTSTATUS v8; // edi
  HANDLE *Heap_0; // rax
  NTSTATUS InformationActivationContext; // eax
  __int64 v11; // rax
  int v12; // eax
  _RTL_SRWLOCK *v13; // rdx
  volatile signed __int32 **v14; // rcx
  char v15; // r12
  char *v16; // r9
  HANDLE v17; // rcx
  _QWORD *v18; // rdx
  char v19; // bl
  __int64 v20; // rcx
  _ACTIVATION_CONTEXT *v22; // rcx
  char *v23; // rcx
  char v24; // [rsp+40h] [rbp-C8h]
  HANDLE TokenHandle; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE *v27; // [rsp+60h] [rbp-A8h]
  __int64 ThreadInformation; // [rsp+68h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-98h] BYREF
  PACTIVATION_CONTEXT ActivationContext[2]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v31[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-58h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+C8h] [rbp-40h]
  int v38; // [rsp+CCh] [rbp-3Ch]
  int v39; // [rsp+D0h] [rbp-38h]
  int v40; // [rsp+128h] [rbp+20h] BYREF

  *(_OWORD *)ActivationContext = 0LL;
  v24 = 0;
  v6 = 0;
  v31[1] = 0;
  memset_thunk_772440563353939046(v31, 0, 0x44uLL);
  TokenHandle = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  ThreadInformation = 0LL;
  TokenHandle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
  {
LABEL_5:
    v8 = 0;
    goto LABEL_6;
  }
  v8 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, (Flags & 0x100 | 0x200) >> 7, 1u, &TokenHandle);
  if ( v8 >= 0 )
  {
    ThreadInformation = 0LL;
    v8 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v8 < 0 )
    {
      NtClose(TokenHandle);
      TokenHandle = 0LL;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
LABEL_6:
  if ( v8 < 0 )
    goto LABEL_28;
  Heap_0 = (HANDLE *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v7 = Heap_0;
  v27 = Heap_0;
  if ( !Heap_0 )
  {
    v8 = -1073741801;
    goto LABEL_28;
  }
  v8 = RtlpTpInitializeData(Heap_0 + 5, Flags, TokenHandle);
  if ( v8 < 0 )
  {
LABEL_28:
    v19 = 0;
    v15 = 0;
    goto LABEL_38;
  }
  v6 = 1;
  v7[12] = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(v7 + 13) = NtCurrentTeb()->ActivityId;
  InformationActivationContext = RtlQueryInformationActivationContext(
                                   1u,
                                   0LL,
                                   0LL,
                                   ActivationContextBasicInformation,
                                   ActivationContext,
                                   0x10uLL,
                                   0LL);
  v8 = InformationActivationContext;
  if ( InformationActivationContext < 0 )
  {
    if ( InformationActivationContext == -1072365557 )
    {
      v7[9] = (HANDLE)-1LL;
      goto LABEL_10;
    }
    goto LABEL_28;
  }
LABEL_10:
  if ( ((__int64)ActivationContext[1] & 1) != 0 )
  {
    RtlReleaseActivationContext(ActivationContext[0]);
    v11 = -1LL;
    ActivationContext[0] = (PACTIVATION_CONTEXT)-1LL;
  }
  else
  {
    v11 = (__int64)ActivationContext[0];
  }
  v7[9] = (HANDLE)v11;
  v24 = 1;
  *((_DWORD *)v7 + 22) = 2;
  v7[7] = Function;
  v7[8] = Context;
  v7[4] = 0LL;
  v31[0] = 3;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v38 = 1;
  v39 = 72;
  v12 = 0;
  if ( (Flags & 0xC0) != 0 )
  {
    v37 = 2;
    v12 = 2;
  }
  *v7 = &RtlpTpWorkTaskCallbacks;
  *((_DWORD *)v7 + 2) = 0;
  v26 = 0LL;
  if ( v12 )
  {
    v13 = &TppPoolpSerializedPoolLock;
    v14 = (volatile signed __int32 **)&TppPoolpSerializedPool;
  }
  else
  {
    v13 = &TppPoolpGlobalPoolLock;
    v14 = (volatile signed __int32 **)&TppPoolpGlobalPool;
  }
  v8 = TppPoolpReferenceGlobalPool(v14, v13, &v26);
  if ( v8 < 0 )
  {
    v15 = 0;
  }
  else
  {
    TppGetCurrentThreadNumaNode(v26, v7 + 1, (char *)v7 + 12, 0LL);
    v15 = 1;
    RtlPcToFileHeader(v7[7], v7 + 10);
    v17 = v7[10];
    if ( v17 )
    {
      BaseAddress = 0LL;
      v40 = 0;
      if ( (int)LdrpFindLoadedDllByHandle(v17, (__int64 *)&BaseAddress, &v40, v16) >= 0 )
      {
        LdrpIncrementModuleLoadCount((__int64)BaseAddress, v18);
        LdrpDereferenceModule((char *)BaseAddress);
      }
      v19 = 1;
      if ( RtlGetCurrentServiceSessionId() )
        v20 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v20 = 2147353478LL;
      if ( *(_BYTE *)v20 )
        RtlpTpETWCallbackEnqueue(
          (unsigned int)v7[4],
          (_DWORD)v7,
          (unsigned int)v7[7],
          (unsigned int)v7[8],
          (__int64)NtCurrentTeb()->SubProcessTag);
      TpPostTask(v7, v7[4], 1LL, v31);
      if ( !_InterlockedDecrement((volatile signed __int32 *)v7 + 22) )
        RtlpTpWorkUnposted(v7);
      v7 = 0LL;
      v27 = 0LL;
      v8 = 0;
      goto LABEL_38;
    }
  }
  v19 = 0;
LABEL_38:
  if ( v7 )
  {
    if ( v24 )
    {
      v22 = (_ACTIVATION_CONTEXT *)v7[9];
      if ( v22 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v22);
    }
    if ( v15 )
    {
      v23 = (char *)v7[4];
      if ( !v23 )
      {
        v23 = (char *)TppPoolpGlobalPool;
        if ( (v37 & 2) != 0 )
          v23 = (char *)TppPoolpSerializedPool;
      }
      if ( v23 == (char *)TppPoolpGlobalPool )
      {
        TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
      }
      else if ( v23 == TppPoolpSerializedPool )
      {
        TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
      }
      else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23, 0xFFFFFFFF) == 1 )
      {
        TppPoolpFree(v23);
      }
    }
    if ( v19 )
      LdrUnloadDll(v7[10]);
    if ( v6 )
      RtlpTpDeleteData(v7 + 5);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v8;
}
