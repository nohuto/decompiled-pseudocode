/*
 * XREFs of ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180007160
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180006D80 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemory(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  bool v2; // zf
  __int64 v5; // rdx
  int v6; // edi
  HANDLE *v8; // r12
  PVOID ProcessHeap; // rcx
  __int64 v10; // r14
  unsigned int *Heap; // rsi
  char *v12; // r8
  char *v13; // r11
  int v14; // eax
  unsigned __int64 v15; // r13
  void (__fastcall *v16)(struct _RM_ACTIVITY_HOST *, HANDLE, _QWORD, __int64 *); // rsi
  unsigned int v17; // edi
  unsigned int *v18; // rbx
  HANDLE *v19; // rsi
  unsigned int *v20; // rax
  unsigned int i; // edi
  int v22; // edx
  bool v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-ACh] BYREF
  void *ProcessHandle; // [rsp+58h] [rbp-A8h] BYREF
  void *v26; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 *v29; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  _CLIENT_ID ClientId; // [rsp+90h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES UserData; // [rsp+A0h] [rbp-60h] BYREF
  void **v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  unsigned __int64 **v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  bool *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]

  v2 = (*((_BYTE *)a1 + 1252) & 0x10) == 0;
  v29 = a2;
  if ( v2 )
  {
    *(_QWORD *)&EventDescriptor.Id = RmpActivityHostQueryOfferedMemoryDxgCallback;
    goto LABEL_13;
  }
  if ( (*((_BYTE *)a1 + 1248) & 4) == 0 )
  {
    *(_QWORD *)&EventDescriptor.Id = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
LABEL_13:
    v24 = 1;
    v28 = 0LL;
    ProcessHandle = 0LL;
    v8 = 0LL;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    P = 0LL;
    v10 = 0LL;
    Heap = (unsigned int *)RtlAllocateHeap(ProcessHeap, 0, 8uLL);
    if ( !Heap )
    {
      v6 = -1073741801;
LABEL_6:
      v5 = -1LL;
      v28 = -1LL;
      goto LABEL_7;
    }
    v12 = (char *)a1 + 80;
    v13 = (char *)a1 + 544;
    while ( 1 )
    {
      v14 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
              v13,
              *((unsigned int *)a1 + 153),
              v12,
              *((unsigned int *)a1 + 154),
              *((_QWORD *)a1 + 4),
              *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
              Heap,
              &v24);
      v6 = v14;
      if ( v14 >= 0 )
        break;
      if ( v14 != -2147483643 )
      {
        if ( Heap )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        goto LABEL_6;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      v20 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v24);
      v12 = (char *)a1 + 80;
      Heap = v20;
      v13 = (char *)a1 + 544;
      if ( !v20 )
      {
        v6 = -1073741801;
        goto LABEL_6;
      }
    }
    v15 = v24;
    if ( !v24 )
      goto LABEL_42;
    v26 = 0LL;
    if ( !is_mul_ok(v24, 8uLL) )
    {
LABEL_18:
      v6 = -1073741675;
      goto LABEL_19;
    }
    v8 = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * v24);
    if ( !v8 )
      goto LABEL_49;
    v26 = 0LL;
    if ( !is_mul_ok(v15, 4uLL) )
      goto LABEL_18;
    P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4 * v15);
    if ( P )
    {
LABEL_42:
      for ( i = 0; i < (unsigned int)v15; ++i )
      {
        *(_QWORD *)&UserData.Length = 48LL;
        ClientId.UniqueThread = 0LL;
        v26 = (void *)Heap[2 * i];
        ClientId.UniqueProcess = v26;
        memset(&UserData.RootDirectory, 0, 40);
        if ( NtOpenProcess(&ProcessHandle, 0x1000u, &UserData, &ClientId) >= 0 )
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
            v22 = (int)v26;
            v8[v10] = ProcessHandle;
            *((_DWORD *)P + v10) = v22;
            v10 = (unsigned int)(v10 + 1);
          }
          else
          {
            NtClose(ProcessHandle);
          }
        }
      }
      v6 = 0;
    }
    else
    {
LABEL_49:
      v6 = -1073741801;
    }
LABEL_19:
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v6 >= 0 )
    {
      v16 = *(void (__fastcall **)(struct _RM_ACTIVITY_HOST *, HANDLE, _QWORD, __int64 *))&EventDescriptor.Id;
      v17 = 0;
      v18 = (unsigned int *)P;
      while ( v17 < (unsigned int)v10 )
      {
        v16(a1, v8[v17], v18[v17], &v28);
        ++v17;
      }
      v6 = 0;
    }
    if ( (_DWORD)v10 )
    {
      v19 = v8;
      do
      {
        NtClose(*v19++);
        --v10;
      }
      while ( v10 );
    }
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( P )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    if ( v6 >= 0 )
    {
      v6 = 0;
      v5 = v28;
      *v29 = v28;
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v5 = 0LL;
  v28 = 0LL;
  *a2 = 0LL;
  v6 = 0;
LABEL_7:
  if ( (unsigned int)dword_1800E1278 > 5 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v23 = (*((_BYTE *)a1 + 1252) & 0x10) != 0;
    v26 = (void *)*((_QWORD *)a1 + 4);
    v29 = (unsigned __int64 *)v5;
    v37 = &v23;
    v24 = v6;
    v35 = &v29;
    v33 = &v26;
    UserData.SecurityDescriptor = &v24;
    *(_DWORD *)&EventDescriptor.Level = 5;
    *(_QWORD *)&UserData.Length = off_1800E1280;
    v38 = 1LL;
    v36 = 8LL;
    v34 = 8LL;
    UserData.SecurityQualityOfService = (PVOID)4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    LODWORD(UserData.RootDirectory) = *(unsigned __int16 *)off_1800E1280;
    UserData.ObjectName = (PUNICODE_STRING)&unk_1800D206B;
    HIDWORD(UserData.RootDirectory) = 2;
    *(_QWORD *)&UserData.Attributes = 0x100000053LL;
    LODWORD(ProcessHandle) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, (PEVENT_DATA_DESCRIPTOR)&UserData);
  }
  return (unsigned int)v6;
}
