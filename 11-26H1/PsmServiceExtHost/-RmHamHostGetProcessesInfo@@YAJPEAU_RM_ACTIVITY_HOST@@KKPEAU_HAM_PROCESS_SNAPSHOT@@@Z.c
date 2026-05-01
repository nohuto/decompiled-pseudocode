/*
 * XREFs of ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180019300
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000CEE0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018D80 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006AED4 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18006DDEC (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmHamHostGetProcessesInfo(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        struct _HAM_PROCESS_SNAPSHOT *a4)
{
  _DWORD *Heap; // r14
  char *v7; // r8
  char *v8; // r10
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdi
  unsigned int v15; // ebx
  _DWORD *v16; // rax
  void *v17; // rax
  PVOID ProcessHeap; // rcx
  PVOID v19; // rax
  SIZE_T v20; // rax
  __int64 v21; // r13
  PVOID v22; // rcx
  PVOID v23; // rax
  unsigned int v24; // edi
  ACCESS_MASK v25; // ecx
  unsigned int v26; // r13d
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  PVOID v29; // rax
  PVOID v30; // rax
  unsigned int v31; // [rsp+50h] [rbp-88h] BYREF
  void *ProcessHandle; // [rsp+58h] [rbp-80h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+60h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-68h] BYREF
  int v36; // [rsp+E8h] [rbp+10h]

  v31 = 1;
  ProcessHandle = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
    return 3221225495LL;
  v7 = (char *)a1 + 80;
  v8 = (char *)a1 + 544;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, _DWORD *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
               v8,
               *((unsigned int *)a1 + 153),
               v7,
               *((unsigned int *)a1 + 154),
               *((_QWORD *)a1 + 4),
               *((_BYTE *)a1 + 648) != 0 ? 4 : 0,
               Heap,
               &v31);
    v10 = result;
    if ( (int)result >= 0 )
    {
      v11 = *((_DWORD *)a4 + 4);
      v12 = v31;
      v13 = v11 + v31;
      if ( v11 + v31 >= v11 )
      {
        LODWORD(v14) = *((_DWORD *)a4 + 5);
        if ( v13 <= (unsigned int)v14 )
        {
LABEL_24:
          v24 = 0;
          v25 = a2 | 0x1000;
          v36 = a2 | 0x1000;
          while ( v24 < v12 )
          {
            ClientId.UniqueThread = 0LL;
            memset(&ObjectAttributes.RootDirectory, 0, 40);
            v26 = Heap[2 * v24];
            ClientId.UniqueProcess = (HANDLE)v26;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            v27 = NtOpenProcess(&ProcessHandle, v25, &ObjectAttributes, &ClientId);
            v15 = v27;
            if ( v27 < 0 )
            {
              if ( (a3 & 1) == 0 && v27 != -1073741813 )
                goto LABEL_11;
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
              v28 = *((unsigned int *)a4 + 4);
              *(_QWORD *)(*(_QWORD *)a4 + 8 * v28) = ProcessHandle;
              *(_DWORD *)(*((_QWORD *)a4 + 1) + 4 * v28) = v26;
              ++*((_DWORD *)a4 + 4);
            }
            else
            {
              NtClose(ProcessHandle);
            }
            v25 = v36;
            ++v24;
          }
          v15 = 0;
          goto LABEL_11;
        }
        if ( (_DWORD)v14 )
        {
          while ( (unsigned int)v14 < v13 )
          {
            v14 = 2LL * (unsigned int)v14;
            if ( v14 > 0xFFFFFFFF )
              goto LABEL_9;
          }
        }
        else
        {
          LODWORD(v14) = v11 + v31;
        }
        ClientId.UniqueProcess = 0LL;
        if ( !is_mul_ok((unsigned int)v14, 8uLL) )
          goto LABEL_9;
        v17 = *(void **)a4;
        v15 = -1073741801;
        ClientId.UniqueProcess = v17;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( v17 )
        {
          v29 = RtlReAllocateHeap(ProcessHeap, 8u, v17, 8LL * (unsigned int)v14);
          *(_QWORD *)a4 = v29;
          if ( !v29 )
          {
            *(_QWORD *)a4 = ClientId.UniqueProcess;
            goto LABEL_11;
          }
        }
        else
        {
          v19 = RtlAllocateHeap(ProcessHeap, 8u, 8LL * (unsigned int)v14);
          *(_QWORD *)a4 = v19;
          if ( !v19 )
            goto LABEL_41;
        }
        ClientId.UniqueProcess = 0LL;
        v20 = 4LL * (unsigned int)v14;
        if ( is_mul_ok((unsigned int)v14, 4uLL) )
        {
          v21 = *((_QWORD *)a4 + 1);
          v22 = NtCurrentPeb()->ProcessHeap;
          if ( v21 )
          {
            v30 = RtlReAllocateHeap(v22, 8u, *((PVOID *)a4 + 1), v20);
            *((_QWORD *)a4 + 1) = v30;
            if ( !v30 )
            {
              *((_QWORD *)a4 + 1) = v21;
              goto LABEL_11;
            }
            goto LABEL_23;
          }
          v23 = RtlAllocateHeap(v22, 8u, v20);
          *((_QWORD *)a4 + 1) = v23;
          if ( v23 )
          {
LABEL_23:
            *((_DWORD *)a4 + 5) = v14;
            goto LABEL_24;
          }
LABEL_41:
          v15 = -1073741801;
          goto LABEL_11;
        }
      }
LABEL_9:
      v15 = -1073741675;
LABEL_11:
      if ( Heap )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v15;
    }
    if ( (_DWORD)result != -2147483643 )
      break;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v31);
    v7 = (char *)a1 + 80;
    Heap = v16;
    v8 = (char *)a1 + 544;
    if ( !v16 )
      return 3221225495LL;
  }
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return v10;
  }
  return result;
}
