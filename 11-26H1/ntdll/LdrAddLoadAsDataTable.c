/*
 * XREFs of LdrAddLoadAsDataTable @ 0x180032190
 * Callers:
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x180032024 (LdrpInitMuiCrits.c)
 *     LdrRemoveLoadAsDataTable @ 0x180032E70 (LdrRemoveLoadAsDataTable.c)
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrLogNewDataDllLoad @ 0x1800D6F00 (LdrLogNewDataDllLoad.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrAddLoadAsDataTable(wchar_t *String2, _WORD *Src, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // rdx
  void *v12; // rsi
  __int64 v13; // rax
  size_t v14; // r14
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 Heap_0; // rax

  v9 = 0;
  if ( !String2 )
    return 3221225485LL;
  LdrpInitMuiCrits((__int64)String2, (__int64)Src);
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v10 = 0;
  v11 = LoadAsDataTable;
  while ( v10 < LoadAsDataTableCount )
  {
    if ( *(wchar_t **)(v11 + 48LL * v10) == String2 )
    {
      LdrRemoveLoadAsDataTable(String2);
      v11 = LoadAsDataTable;
    }
    ++v10;
  }
  if ( v11 )
  {
    if ( LoadAsDataTableCount >= (unsigned int)LoadAsDataTableBlockCount )
    {
      Heap_0 = RtlReAllocateHeap_0(
                 NtCurrentPeb()->ProcessHeap,
                 0LL,
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
    v17 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 1536LL);
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
  if ( !Src )
    goto LABEL_15;
  v13 = -1LL;
  do
    ++v13;
  while ( Src[v13] );
  v14 = 2 * v13;
  v15 = (void *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 2 * v13 + 2);
  v12 = v15;
  if ( v15 )
  {
    memmove(v15, Src, v14);
    v11 = LoadAsDataTable;
LABEL_15:
    v16 = 6LL * (unsigned int)LoadAsDataTableCount;
    *(_QWORD *)(v11 + 8 * v16) = String2;
    *(_QWORD *)(v11 + 8 * v16 + 8) = v12;
    *(_QWORD *)(v11 + 8 * v16 + 16) = a3;
    *(_QWORD *)(v11 + 8 * v16 + 24) = a4;
    *(_DWORD *)(v11 + 8 * v16 + 32) = 1;
    *(_QWORD *)(v11 + 8 * v16 + 40) = a5;
    ++LoadAsDataTableCount;
    goto LABEL_22;
  }
  v9 = -1073741801;
LABEL_22:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  if ( v9 >= 0 )
  {
    if ( Src )
      LdrLogNewDataDllLoad(String2, Src);
  }
  return (unsigned int)v9;
}
