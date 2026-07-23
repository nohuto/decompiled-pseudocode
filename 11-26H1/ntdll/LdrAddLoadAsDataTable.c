/*
 * XREFs of LdrAddLoadAsDataTable @ 0x18001D2F0
 * Callers:
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 *     LdrpInitMuiCrits @ 0x18001D184 (LdrpInitMuiCrits.c)
 *     LdrRemoveLoadAsDataTable @ 0x18001DFD0 (LdrRemoveLoadAsDataTable.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrLogNewDataDllLoad @ 0x1800D3EC0 (LdrLogNewDataDllLoad.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl LdrAddLoadAsDataTable(
        PVOID Module,
        PWSTR FilePath,
        SIZE_T Size,
        HANDLE Handle,
        PACTIVATION_CONTEXT ActCtx)
{
  NTSTATUS v9; // edi
  unsigned int v10; // esi
  PVOID *v11; // rdx
  PVOID v12; // rsi
  __int64 v13; // rax
  size_t v14; // r14
  PVOID v15; // rax
  __int64 v16; // rcx
  PVOID *v17; // rax
  PVOID *Heap_0; // rax

  v9 = 0;
  if ( !Module )
    return -1073741811;
  LdrpInitMuiCrits((__int64)Module, (__int64)FilePath);
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v10 = 0;
  v11 = (PVOID *)LoadAsDataTable;
  while ( v10 < LoadAsDataTableCount )
  {
    if ( v11[6 * v10] == Module )
    {
      LdrRemoveLoadAsDataTable(Module, 0LL, 0LL, 0);
      v11 = (PVOID *)LoadAsDataTable;
    }
    ++v10;
  }
  if ( v11 )
  {
    if ( LoadAsDataTableCount >= (unsigned int)LoadAsDataTableBlockCount )
    {
      Heap_0 = (PVOID *)RtlReAllocateHeap_0(
                          NtCurrentPeb()->ProcessHeap,
                          0,
                          LoadAsDataTable,
                          48LL * (unsigned int)(LoadAsDataTableBlockCount + 32));
      v11 = Heap_0;
      if ( !Heap_0 )
      {
        v9 = -1073741801;
        goto LABEL_22;
      }
      LoadAsDataTable = Heap_0;
      LoadAsDataTableBlockCount += 32;
    }
  }
  else
  {
    v17 = (PVOID *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x600uLL);
    v11 = v17;
    if ( !v17 )
    {
      v9 = -1073741801;
      goto LABEL_22;
    }
    LoadAsDataTable = v17;
    LoadAsDataTableBlockCount = 32;
  }
  v12 = 0LL;
  if ( !FilePath )
    goto LABEL_15;
  v13 = -1LL;
  do
    ++v13;
  while ( FilePath[v13] );
  v14 = 2 * v13;
  v15 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 2 * v13 + 2);
  v12 = v15;
  if ( v15 )
  {
    memmove(v15, FilePath, v14);
    v11 = (PVOID *)LoadAsDataTable;
LABEL_15:
    v16 = 6LL * (unsigned int)LoadAsDataTableCount;
    v11[v16] = Module;
    v11[v16 + 1] = v12;
    v11[v16 + 2] = (PVOID)Size;
    v11[v16 + 3] = Handle;
    LODWORD(v11[v16 + 4]) = 1;
    v11[v16 + 5] = ActCtx;
    ++LoadAsDataTableCount;
    goto LABEL_22;
  }
  v9 = -1073741801;
LABEL_22:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  if ( v9 >= 0 )
  {
    if ( FilePath )
      LdrLogNewDataDllLoad(Module, FilePath);
  }
  return v9;
}
