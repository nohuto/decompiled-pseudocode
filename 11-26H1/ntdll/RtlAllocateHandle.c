/*
 * XREFs of RtlAllocateHandle @ 0x1800018E0
 * Callers:
 *     RtlpInsertStringAtom @ 0x180001814 (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 */

PRTL_HANDLE_TABLE_ENTRY __cdecl RtlAllocateHandle(PRTL_HANDLE_TABLE HandleTable, PULONG HandleIndex)
{
  _QWORD *p_FreeHandles; // rsi
  PRTL_HANDLE_TABLE_ENTRY FreeHandles; // rcx
  _RTL_HANDLE_TABLE_ENTRY *v6; // r8
  ULONG v8; // ecx
  PRTL_HANDLE_TABLE_ENTRY CommittedHandles; // r8
  ULONG v10; // r15d
  __int64 v11; // r14
  void *ProcessHeap; // rcx
  _RTL_HANDLE_TABLE_ENTRY *v13; // rax
  _RTL_HANDLE_TABLE_ENTRY *v14; // rdx
  PRTL_HANDLE_TABLE_ENTRY *p_UnCommittedHandles; // r14
  char *v16; // rcx
  _RTL_HANDLE_TABLE_ENTRY *UnCommittedHandles; // rdx
  _RTL_HANDLE_TABLE_ENTRY *v18; // rcx
  ULONG_PTR v19[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID v20; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+20h] BYREF

  p_FreeHandles = &HandleTable->FreeHandles;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v19[0] = 0LL;
  if ( !HandleTable->FreeHandles )
  {
    if ( HandleTable->Reserved[0] )
    {
      v8 = HandleTable->Reserved[1];
      if ( v8 <= HandleTable->MaximumNumberOfHandles )
      {
        CommittedHandles = HandleTable->CommittedHandles;
        v10 = v8 * HandleTable->SizeOfHandleTableEntry;
        v11 = v10 + 8 * HandleTable->SizeOfHandleTableEntry;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v13 = (_RTL_HANDLE_TABLE_ENTRY *)(CommittedHandles
                                        ? RtlReAllocateHeap_0(ProcessHeap, 8u, CommittedHandles, (unsigned int)v11)
                                        : RtlAllocateHeap_0(
                                            ProcessHeap,
                                            8u,
                                            v10 + 8 * HandleTable->SizeOfHandleTableEntry));
        BaseAddress = v13;
        if ( v13 )
        {
          HandleTable->Reserved[1] += 8;
          v14 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v13 + v11);
          p_UnCommittedHandles = &HandleTable->UnCommittedHandles;
          v16 = (char *)v13 + v10;
          HandleTable->CommittedHandles = v13;
          v20 = v16;
          HandleTable->UnCommittedHandles = v14;
          goto LABEL_11;
        }
      }
    }
    else
    {
      UnCommittedHandles = HandleTable->UnCommittedHandles;
      if ( UnCommittedHandles )
      {
        p_UnCommittedHandles = &HandleTable->UnCommittedHandles;
      }
      else
      {
        RegionSize = HandleTable->MaximumNumberOfHandles * HandleTable->SizeOfHandleTableEntry;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
          return 0LL;
        UnCommittedHandles = (_RTL_HANDLE_TABLE_ENTRY *)BaseAddress;
        p_UnCommittedHandles = &HandleTable->UnCommittedHandles;
        v18 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)BaseAddress + RegionSize);
        HandleTable->CommittedHandles = (PRTL_HANDLE_TABLE_ENTRY)BaseAddress;
        HandleTable->MaxReservedHandles = v18;
        HandleTable->UnCommittedHandles = UnCommittedHandles;
      }
      v20 = UnCommittedHandles;
      if ( UnCommittedHandles < HandleTable->MaxReservedHandles )
      {
        v19[0] = 4096LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v20, 0LL, v19, 0x1000u, 4u) >= 0 )
        {
          v16 = (char *)v20;
          v14 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v20 + v19[0]);
          HandleTable->UnCommittedHandles = (PRTL_HANDLE_TABLE_ENTRY)((char *)v20 + v19[0]);
LABEL_11:
          if ( v16 < (char *)v14 )
          {
            do
            {
              *p_FreeHandles = v16;
              p_FreeHandles = v20;
              v16 = (char *)v20 + HandleTable->SizeOfHandleTableEntry;
              v20 = v16;
            }
            while ( v16 < (char *)*p_UnCommittedHandles );
          }
          goto LABEL_2;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  FreeHandles = HandleTable->FreeHandles;
  v20 = FreeHandles;
  HandleTable->FreeHandles = FreeHandles->NextFree;
  FreeHandles->NextFree = 0LL;
  v6 = (_RTL_HANDLE_TABLE_ENTRY *)v20;
  if ( HandleIndex )
    *HandleIndex = (signed __int64)((__int64)v20 - (unsigned __int64)HandleTable->CommittedHandles)
                 / HandleTable->SizeOfHandleTableEntry;
  return v6;
}
