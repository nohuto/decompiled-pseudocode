/*
 * XREFs of RtlQueueWorkItem @ 0x180066390
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlPcToFileHeader @ 0x18004BC60 (RtlPcToFileHeader.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x18004DED0 (RtlQueryInformationActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x18004ED88 (TppPoolpFree.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x18004F280 (RtlpTpInitializeData.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     TppGetCurrentThreadNumaNode @ 0x1800668B0 (TppGetCurrentThreadNumaNode.c)
 *     RtlpTpETWCallbackEnqueue @ 0x1800669BC (RtlpTpETWCallbackEnqueue.c)
 *     TpPostTask @ 0x180066A90 (TpPostTask.c)
 *     RtlpTpWorkUnposted @ 0x180066FE0 (RtlpTpWorkUnposted.c)
 *     RtlpTpDeleteData @ 0x180067444 (RtlpTpDeleteData.c)
 *     TpUnreserveTaskPost @ 0x1800E06D8 (TpUnreserveTaskPost.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenThreadToken @ 0x18015F3C0 (NtOpenThreadToken.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // rsi
  int v11; // edi
  __int64 Heap_0; // rax
  int InformationActivationContext; // eax
  __int64 v14; // rax
  int v15; // eax
  volatile signed __int64 *v16; // rdx
  __int64 *v17; // rcx
  char v18; // r12
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rdx
  char v21; // bl
  __int64 v22; // rcx
  volatile signed __int32 *v24; // rcx
  volatile signed __int32 *v25; // rcx
  char v26; // [rsp+40h] [rbp-C8h]
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h]
  __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-98h] BYREF
  __int128 v32; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v33[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int128 v37; // [rsp+B0h] [rbp-58h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  int v39; // [rsp+C8h] [rbp-40h]
  int v40; // [rsp+CCh] [rbp-3Ch]
  int v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+128h] [rbp+20h] BYREF

  v32 = 0LL;
  v26 = 0;
  v6 = 0;
  v33[1] = 0;
  memset_thunk_772440563353939046(v33, 0, 0x44uLL);
  Handle = 0LL;
  v10 = 0LL;
  v29 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v30 = 0LL;
  Handle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
  {
LABEL_5:
    v11 = 0;
    goto LABEL_6;
  }
  LOBYTE(v8) = 1;
  v11 = NtOpenThreadToken(-2LL, (a3 & 0x100 | 0x200) >> 7, v8, &Handle);
  if ( v11 >= 0 )
  {
    v30 = 0LL;
    v11 = NtSetInformationThread(-2LL, 5LL, &v30, 8LL);
    if ( v11 < 0 )
    {
      NtClose(Handle);
      Handle = 0LL;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
LABEL_6:
  if ( v11 < 0 )
    goto LABEL_28;
  Heap_0 = RtlAllocateHeap_0();
  v10 = Heap_0;
  v29 = Heap_0;
  if ( !Heap_0 )
  {
    v11 = -1073741801;
    goto LABEL_28;
  }
  v11 = RtlpTpInitializeData(Heap_0 + 40, a3, (__int64)Handle);
  if ( v11 < 0 )
  {
LABEL_28:
    v21 = 0;
    v18 = 0;
    goto LABEL_38;
  }
  v6 = 1;
  *(_QWORD *)(v10 + 96) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(v10 + 104) = NtCurrentTeb()->ActivityId;
  InformationActivationContext = RtlQueryInformationActivationContext(1, 0LL, 0LL, 1, (__int64)&v32, 0x10uLL, 0LL);
  v11 = InformationActivationContext;
  if ( InformationActivationContext < 0 )
  {
    if ( InformationActivationContext == -1072365557 )
    {
      *(_QWORD *)(v10 + 72) = -1LL;
      goto LABEL_10;
    }
    goto LABEL_28;
  }
LABEL_10:
  if ( (BYTE8(v32) & 1) != 0 )
  {
    RtlReleaseActivationContext((volatile signed __int32 *)v32);
    v14 = -1LL;
    *(_QWORD *)&v32 = -1LL;
  }
  else
  {
    v14 = v32;
  }
  *(_QWORD *)(v10 + 72) = v14;
  v26 = 1;
  *(_DWORD *)(v10 + 88) = 2;
  *(_QWORD *)(v10 + 56) = a1;
  *(_QWORD *)(v10 + 64) = a2;
  *(_QWORD *)(v10 + 32) = 0LL;
  v33[0] = 3;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v40 = 1;
  v41 = 72;
  v15 = 0;
  if ( (a3 & 0xC0) != 0 )
  {
    v39 = 2;
    v15 = 2;
  }
  *(_QWORD *)v10 = RtlpTpWorkTaskCallbacks;
  *(_DWORD *)(v10 + 8) = 0;
  v28 = 0LL;
  if ( v15 )
  {
    v16 = &TppPoolpSerializedPoolLock;
    v17 = &TppPoolpSerializedPool;
  }
  else
  {
    v16 = &TppPoolpGlobalPoolLock;
    v17 = &TppPoolpGlobalPool;
  }
  v11 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)v17, v16, &v28);
  if ( v11 < 0 )
  {
    v18 = 0;
  }
  else
  {
    TppGetCurrentThreadNumaNode(v28, v10 + 8, v10 + 12, 0LL);
    v18 = 1;
    RtlPcToFileHeader(*(PVOID *)(v10 + 56), (PVOID *)(v10 + 80));
    v19 = *(_QWORD *)(v10 + 80);
    if ( v19 )
    {
      v31 = 0LL;
      v42 = 0;
      if ( (int)LdrpFindLoadedDllByHandle(v19, &v31, &v42, v9) >= 0 )
      {
        LdrpIncrementModuleLoadCount(v31, v20);
        LdrpDereferenceModule(v31);
      }
      v21 = 1;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v22 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v22 = 2147353478LL;
      if ( *(_BYTE *)v22 )
        RtlpTpETWCallbackEnqueue(
          *(_QWORD *)(v10 + 32),
          v10,
          *(_QWORD *)(v10 + 56),
          *(_QWORD *)(v10 + 64),
          (__int64)NtCurrentTeb()->SubProcessTag);
      TpPostTask(v10, *(_QWORD *)(v10 + 32), 1LL, v33);
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v10 + 88)) )
        RtlpTpWorkUnposted(v10, *(_QWORD *)(v10 + 32));
      v10 = 0LL;
      v29 = 0LL;
      v11 = 0;
      goto LABEL_38;
    }
  }
  v21 = 0;
LABEL_38:
  if ( v10 )
  {
    if ( v26 )
    {
      v24 = *(volatile signed __int32 **)(v10 + 72);
      if ( v24 != (volatile signed __int32 *)-1LL )
        RtlReleaseActivationContext(v24);
    }
    if ( v18 )
    {
      v25 = *(volatile signed __int32 **)(v10 + 32);
      v7 = TppPoolpGlobalPool;
      if ( !v25 )
      {
        v25 = (volatile signed __int32 *)TppPoolpGlobalPool;
        if ( (v39 & 2) != 0 )
          v25 = (volatile signed __int32 *)TppPoolpSerializedPool;
      }
      if ( v25 == (volatile signed __int32 *)TppPoolpGlobalPool )
      {
        TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
      }
      else if ( v25 == (volatile signed __int32 *)TppPoolpSerializedPool )
      {
        TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
      }
      else if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
      {
        TppPoolpFree((__int64)v25);
      }
    }
    if ( v21 )
      LdrUnloadDll(*(_QWORD *)(v10 + 80), v7, v8, v9);
    if ( v6 )
      RtlpTpDeleteData(v10 + 40);
    RtlFreeHeap_0();
  }
  RtlpTpResumeImpersonation(Handle);
  return (unsigned int)v11;
}
