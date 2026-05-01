/*
 * XREFs of ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180045630
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043D80 (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18004465C (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800449A0 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180044B40 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180044DD0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpEnforcementApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800452F0 (-RmpEnforcementApplyLimits@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmHamHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        int (*a4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *),
        void *a5)
{
  __int64 v6; // rsi
  HANDLE *v7; // r14
  unsigned int *v8; // r12
  unsigned int *Heap; // rdi
  char *v10; // r8
  char *v11; // r10
  int v12; // ebx
  unsigned int v13; // r15d
  unsigned int i; // edi
  HANDLE *v15; // rdi
  unsigned int *v16; // r8
  unsigned int *v18; // rax
  unsigned int v19; // ebp
  ACCESS_MASK v20; // ecx
  NTSTATUS v21; // eax
  unsigned int v22; // [rsp+50h] [rbp-98h] BYREF
  void *ProcessHandle; // [rsp+58h] [rbp-90h] BYREF
  void *v24; // [rsp+60h] [rbp-88h]
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-70h] BYREF
  int v28; // [rsp+F8h] [rbp+10h]

  v22 = 1;
  ProcessHandle = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    v10 = (char *)a1 + 80;
    v11 = (char *)a1 + 544;
    while ( 1 )
    {
      v12 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
              v11,
              *((unsigned int *)a1 + 153),
              v10,
              *((unsigned int *)a1 + 154),
              *((_QWORD *)a1 + 4),
              *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
              Heap,
              &v22);
      if ( v12 >= 0 )
        break;
      if ( v12 != -2147483643 )
      {
        if ( !Heap )
          return (unsigned int)v12;
        v16 = Heap;
LABEL_22:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
        return (unsigned int)v12;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      v18 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v22);
      v10 = (char *)a1 + 80;
      Heap = v18;
      v11 = (char *)a1 + 544;
      if ( !v18 )
        return 3221225495LL;
    }
    v13 = v22;
    if ( v22 )
    {
      v24 = 0LL;
      if ( !is_mul_ok(v22, 8uLL) )
        goto LABEL_6;
      v7 = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * v22);
      v12 = -1073741801;
      if ( !v7 )
        goto LABEL_7;
      v24 = 0LL;
      if ( !is_mul_ok(v13, 4uLL) )
      {
LABEL_6:
        v12 = -1073741675;
LABEL_7:
        if ( Heap )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        if ( v12 >= 0 )
        {
          for ( i = 0; i < (unsigned int)v6; ++i )
          {
            v12 = ((__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, HANDLE, _QWORD, void *))a4)(a1, v7[i], v8[i], a5);
            if ( v12 < 0 && (a3 & 1) == 0 )
              goto LABEL_15;
          }
          v12 = 0;
        }
LABEL_15:
        if ( (_DWORD)v6 )
        {
          v15 = v7;
          do
          {
            NtClose(*v15++);
            --v6;
          }
          while ( v6 );
        }
        if ( v7 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
        if ( !v8 )
          return (unsigned int)v12;
        v16 = v8;
        goto LABEL_22;
      }
      v8 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4LL * v13);
      v12 = -1073741801;
      if ( !v8 )
        goto LABEL_7;
    }
    v19 = 0;
    v20 = a2 | 0x1000;
    v28 = a2 | 0x1000;
    while ( v19 < v13 )
    {
      ClientId.UniqueThread = 0LL;
      memset(&ObjectAttributes.RootDirectory, 0, 40);
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      v24 = (void *)Heap[2 * v19];
      ClientId.UniqueProcess = v24;
      v21 = NtOpenProcess(&ProcessHandle, v20, &ObjectAttributes, &ClientId);
      v12 = v21;
      if ( v21 < 0 )
      {
        if ( (a3 & 1) == 0 && v21 != -1073741813 )
          goto LABEL_7;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                  (char *)a1 + 544,
                  *((unsigned int *)a1 + 153),
                  (char *)a1 + 80,
                  *((unsigned int *)a1 + 154),
                  *((_QWORD *)a1 + 4),
                  *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
                  ProcessHandle) )
      {
        v7[v6] = ProcessHandle;
        v8[v6] = (unsigned int)v24;
        v6 = (unsigned int)(v6 + 1);
      }
      else
      {
        NtClose(ProcessHandle);
      }
      v20 = v28;
      ++v19;
    }
    v12 = 0;
    goto LABEL_7;
  }
  return 3221225495LL;
}
