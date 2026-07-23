/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x18001DFD0
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x18001D2F0 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x180102480 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x180108F34 (LdrpResMapFile.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 *     LdrpInitMuiCrits @ 0x18001D184 (LdrpInitMuiCrits.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 */

NTSTATUS __cdecl LdrRemoveLoadAsDataTable(PVOID InitModule, PVOID *BaseModule, PSIZE_T Size, ULONG Flags)
{
  PVOID v8; // r14
  NTSTATUS v9; // esi
  unsigned int v10; // edx
  PVOID *v11; // r8
  bool v12; // zf
  unsigned int i; // edi
  __int64 v14; // rax
  __int64 v15; // rbx
  _ACTIVATION_CONTEXT *v16; // rcx
  __int64 v17; // rax
  PVOID *Heap_0; // rax
  unsigned int v19; // r13d
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  PVOID *v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // [rsp+60h] [rbp+8h]

  if ( InitModule )
  {
    v8 = 0LL;
    v9 = -1073741511;
    LdrpInitMuiCrits((__int64)InitModule, (__int64)BaseModule);
    RtlEnterCriticalSection(&LoadAsDataCrits);
    v10 = LoadAsDataTableCount;
    if ( LoadAsDataTableCount )
    {
      if ( (Flags & 0xE00) == 0 )
      {
        v11 = (PVOID *)LoadAsDataTable;
        goto LABEL_5;
      }
      if ( BaseModule )
      {
        *BaseModule = 0LL;
        v19 = v10;
        v11 = (PVOID *)LoadAsDataTable;
        while ( v19 )
        {
          if ( (Flags & 0x800) != 0 )
          {
            v23 = &v11[6 * v19 - 6];
            if ( v23[3] == InitModule )
            {
              v8 = *v23;
              break;
            }
          }
          else if ( (Flags & 0x400) != 0 && (v26 = 6LL * (v19 - 1), (v20 = (const wchar_t *)v11[v26 + 1]) != 0LL) )
          {
            if ( !wcsicmp(v20, (const wchar_t *)InitModule) )
            {
              v11 = (PVOID *)LoadAsDataTable;
              v8 = *(PVOID *)((char *)LoadAsDataTable + v26 * 8);
              v10 = LoadAsDataTableCount;
              break;
            }
            v10 = LoadAsDataTableCount;
            v11 = (PVOID *)LoadAsDataTable;
          }
          else if ( (Flags & 0x200) != 0 )
          {
            v21 = 6LL * (v19 - 1);
            if ( v11[v21] == InitModule )
            {
              v8 = v11[v21];
              break;
            }
          }
          --v19;
        }
        if ( v8 )
          *BaseModule = v8;
        if ( (Flags & 0x200000) != 0 )
        {
          if ( v8 && Size )
          {
            v24 = 6LL * (v19 - 1);
            *Size = (ULONG_PTR)v11[v24 + 2];
            if ( (Flags & 0x40000) != 0 )
              ++LODWORD(v11[v24 + 4]);
            v9 = 0;
          }
        }
        else
        {
          v12 = v8 == 0LL;
          if ( !v8 )
          {
LABEL_6:
            if ( v12 )
              v8 = InitModule;
            for ( i = v10; i; --i )
            {
              v14 = i - 1;
              v15 = 6 * v14;
              if ( v11[6 * v14] == v8 )
              {
                if ( v11[6 * v14 + 1] )
                {
                  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v11[6 * v14 + 1]);
                  v11 = (PVOID *)LoadAsDataTable;
                  *((_QWORD *)LoadAsDataTable + v15 + 1) = 0LL;
                  v10 = LoadAsDataTableCount;
                }
                v16 = (_ACTIVATION_CONTEXT *)v11[v15 + 5];
                if ( (unsigned __int64)&v16[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v16);
                  v11 = (PVOID *)LoadAsDataTable;
                  *((_QWORD *)LoadAsDataTable + v15 + 5) = 0LL;
                  v10 = LoadAsDataTableCount;
                }
                if ( i != v10 )
                {
                  *(_OWORD *)&v11[v15] = *(_OWORD *)&v11[6 * v10 - 6];
                  *(_OWORD *)&v11[v15 + 2] = *(_OWORD *)&v11[6 * v10 - 4];
                  *(_OWORD *)&v11[v15 + 4] = *(_OWORD *)&v11[6 * v10 - 2];
                }
                LoadAsDataTableCount = --v10;
                v17 = (unsigned int)(LoadAsDataTableBlockCount - 32);
                if ( v10 < (unsigned int)v17 )
                {
                  Heap_0 = (PVOID *)RtlReAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, LoadAsDataTable, 48 * v17);
                  v11 = Heap_0;
                  if ( !Heap_0 )
                  {
                    v9 = -1073741801;
                    goto LABEL_50;
                  }
                  LoadAsDataTable = Heap_0;
                  LoadAsDataTableBlockCount -= 32;
                  v10 = LoadAsDataTableCount;
                }
                v9 = 0;
              }
            }
            goto LABEL_50;
          }
          v22 = 6LL * (v19 - 1);
          if ( (int)--LODWORD(v11[v22 + 4]) <= 0 )
          {
LABEL_5:
            v12 = v8 == 0LL;
            goto LABEL_6;
          }
          v9 = -1073740024;
        }
      }
      else
      {
        v9 = -1073741811;
      }
    }
LABEL_50:
    RtlLeaveCriticalSection(&LoadAsDataCrits);
    return v9;
  }
  return -1073741811;
}
