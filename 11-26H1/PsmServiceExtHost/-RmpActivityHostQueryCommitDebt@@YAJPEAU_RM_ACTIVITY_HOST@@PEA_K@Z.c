/*
 * XREFs of ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180007EE0
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007A00 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180008350 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003F124 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpActivityHostQueryCommitDebt(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  HANDLE *v3; // r14
  _DWORD *v4; // r12
  __int64 v5; // rsi
  PVOID Heap; // rdi
  char *v7; // r8
  char *v8; // r11
  int v9; // ebx
  unsigned __int64 v10; // r15
  unsigned int v11; // ebx
  void *v12; // r15
  HANDLE *v13; // rdi
  unsigned int v14; // r12d
  PVOID v16; // rax
  int v17; // r8d
  int v18; // r9d
  unsigned int i; // ebx
  _DWORD *P; // [rsp+50h] [rbp-29h]
  unsigned int v21; // [rsp+58h] [rbp-21h]
  struct _CLIENT_ID ClientId; // [rsp+60h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  void *v24; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+F0h] [rbp+77h] BYREF
  void *ProcessHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v24 = a2;
  LODWORD(v25) = 1;
  *a2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  ProcessHandle = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v14 = -1073741801;
    v9 = -1073741801;
    goto LABEL_26;
  }
  v7 = (char *)a1 + 80;
  v8 = (char *)a1 + 544;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, PVOID, __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                                  + 72LL))(
           v8,
           *((unsigned int *)a1 + 153),
           v7,
           *((unsigned int *)a1 + 154),
           *((_QWORD *)a1 + 4),
           *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
           Heap,
           &v25);
    if ( v9 >= 0 )
      break;
    if ( v9 != -2147483643 )
    {
      if ( Heap )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      v14 = v9;
      goto LABEL_26;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v25);
    v7 = (char *)a1 + 80;
    Heap = v16;
    v8 = (char *)a1 + 544;
    if ( !v16 )
    {
      v14 = -1073741801;
      v9 = -1073741801;
      goto LABEL_26;
    }
  }
  v10 = (unsigned int)v25;
  if ( !(_DWORD)v25 )
    goto LABEL_36;
  if ( !is_mul_ok((unsigned int)v25, 8uLL) )
  {
    v9 = -1073741675;
    goto LABEL_7;
  }
  v3 = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * (unsigned int)v25);
  v9 = -1073741801;
  if ( v3 )
  {
    if ( !is_mul_ok(v10, 4uLL) )
    {
      v9 = -1073741675;
      goto LABEL_7;
    }
    P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4 * v10);
    v9 = -1073741801;
    v4 = P;
    if ( P )
    {
LABEL_36:
      for ( i = 0; i < (unsigned int)v10; ++i )
      {
        ClientId.UniqueThread = 0LL;
        memset(&ObjectAttributes.RootDirectory, 0, 40);
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        v21 = *((_DWORD *)Heap + 2 * i);
        ClientId.UniqueProcess = (HANDLE)v21;
        if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                 (char *)a1 + 544,
                 *((unsigned int *)a1 + 153),
                 (char *)a1 + 80,
                 *((unsigned int *)a1 + 154),
                 *((_QWORD *)a1 + 4),
                 *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
                 ProcessHandle) )
          {
            v3[v5] = ProcessHandle;
            v4[v5] = v21;
            v5 = (unsigned int)(v5 + 1);
          }
          else
          {
            NtClose(ProcessHandle);
          }
        }
      }
      v9 = 0;
    }
  }
LABEL_7:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v9 >= 0 )
  {
    v11 = 0;
    v12 = v24;
    while ( v11 < (unsigned int)v5 )
    {
      RmpActivityHostCommitDebtCallback(a1, v3[v11], P[v11], v12);
      ++v11;
    }
    v9 = 0;
  }
  if ( (_DWORD)v5 )
  {
    v13 = v3;
    do
    {
      NtClose(*v13++);
      --v5;
    }
    while ( v5 );
  }
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  v14 = v9;
  if ( v9 >= 0 )
    return 0LL;
LABEL_26:
  if ( (unsigned int)dword_1800E1278 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 1LL) )
    {
      v25 = *((_QWORD *)a1 + 4);
      LODWORD(v24) = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800E1278,
        (unsigned int)&unk_1800D49AE,
        v17,
        v18,
        (__int64)&v24,
        (__int64)&v25);
    }
  }
  return v14;
}
