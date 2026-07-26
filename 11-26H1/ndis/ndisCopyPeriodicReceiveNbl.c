/*
 * XREFs of ndisCopyPeriodicReceiveNbl @ 0x14002FCF0
 * Callers:
 *     ndisMPeriodicReceivesResources @ 0x14002FB00 (ndisMPeriodicReceivesResources.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140027B00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x14002AC10 (NdisFreeNetBufferList.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x140058800 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

PNET_BUFFER_LIST __fastcall ndisCopyPeriodicReceiveNbl(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  SIZE_T v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  struct _NPAGED_LOOKASIDE_LIST *v8; // r13
  struct _MDL *v9; // rax
  struct _MDL *v10; // r14
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rbx
  struct _MDL *v12; // r12
  char *MappedSystemVa; // rax
  __int64 v14; // rdx
  unsigned int ByteCount; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // esi
  __int64 v18; // rdi
  const struct _EVENT_DESCRIPTOR *v19; // rdx
  char *i; // rcx
  char *v21; // rcx
  unsigned int v23; // edi
  PVOID v24; // rax
  __int64 v25; // rax
  struct _GUID v26; // xmm0
  __int64 v27; // rax
  unsigned __int8 DataOffset; // [rsp+20h] [rbp-88h]
  const struct _GUID *DataLength; // [rsp+28h] [rbp-80h]
  struct _GUID v31; // [rsp+50h] [rbp-58h] BYREF
  struct _GUID v32; // [rsp+60h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a3 + 8);
  v5 = *(unsigned int *)(v3 + 24);
  v6 = ((unsigned int)MmSizeOfMdl((PVOID)0xFFF, v5) + 7) & 0xFFFFFFF8;
  v7 = (unsigned int)v6;
  *(_QWORD *)&v32.Data1 = (unsigned int)v6;
  if ( (unsigned int)v5 <= 0x64 )
  {
    v8 = &Lookaside;
LABEL_3:
    v9 = (struct _MDL *)ExAllocateFromNPagedLookasideList(v8);
    goto LABEL_4;
  }
  if ( (unsigned int)v5 <= 0x5EE )
  {
    v8 = &stru_14011D500;
    goto LABEL_3;
  }
  v8 = 0LL;
  if ( (v5 + v6) >> 32 )
    return 0LL;
  v31 = 0LL;
  LOBYTE(v31.Data1) = 1;
  *(_DWORD *)v31.Data4 = 0;
  v9 = (struct _MDL *)ExAllocatePool3(66LL, (unsigned int)(v5 + v6), 1919960142LL, &v31, 1);
LABEL_4:
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v9->Next = 0LL;
  v9->MdlFlags = 0;
  v9->ByteCount = v5;
  v9->ByteOffset = ((_WORD)v7 + (_WORD)v9) & 0xFFF;
  v9->Size = 8 * (((v5 + (((_WORD)v7 + (_WORD)v9) & 0xFFF) + 4095LL) >> 12) + 6);
  v9->StartVa = (PVOID)(((unsigned __int64)v9 + v7) & 0xFFFFFFFFFFFFF000uLL);
  MmBuildMdlForNonPagedPool(v9);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(PoolHandle, 0, 0, v10, 0, v5);
  if ( !NetBufferAndNetBufferList )
  {
LABEL_36:
    if ( (v10->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v10->MappedSystemVa, v10);
    if ( v8 )
      ExFreeToNPagedLookasideList(v8, v10);
    else
      ExFreePoolWithTag(v10, 0x7270444Eu);
    return 0LL;
  }
  v12 = *(struct _MDL **)(v3 + 8);
  if ( (v12->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)v12->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000000u);
  if ( !MappedSystemVa || (v14 = *(unsigned int *)(v3 + 16), ByteCount = v12->ByteCount, (unsigned int)v14 > ByteCount) )
  {
LABEL_35:
    NdisFreeNetBufferList(NetBufferAndNetBufferList);
    goto LABEL_36;
  }
  v16 = ByteCount - v14;
  v17 = v5;
  if ( v16 < (unsigned int)v5 )
    v17 = v16;
  v18 = v17;
  memmove((char *)v10 + *(_QWORD *)&v32.Data1, &MappedSystemVa[v14], v17);
  for ( i = (char *)v10 + *(_QWORD *)&v32.Data1; ; i = *(char **)&v32.Data1 )
  {
    v12 = v12->Next;
    v21 = &i[v18];
    LODWORD(v5) = v5 - v17;
    *(_QWORD *)&v32.Data1 = v21;
    if ( !v12 )
      break;
    v23 = v12->ByteCount;
    if ( (v12->MdlFlags & 5) != 0 )
    {
      v24 = v12->MappedSystemVa;
    }
    else
    {
      v24 = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000000u);
      v21 = *(char **)&v32.Data1;
    }
    if ( !v24 )
      goto LABEL_35;
    v17 = v5;
    if ( v23 < (unsigned int)v5 )
      v17 = v23;
    v18 = v17;
    memmove(v21, v24, v17);
  }
  LODWORD(NetBufferAndNetBufferList->ProtocolReserved[0]) = a2;
  NetBufferAndNetBufferList->MiniportReserved[1] = v8;
  NetBufferAndNetBufferList->SourceHandle = *(void **)(a3 + 120);
  if ( (*(_DWORD *)(a3 + 136) & 0x80u) != 0 )
  {
    NetBufferAndNetBufferList->Flags |= 0x80u;
    NetBufferAndNetBufferList->NblFlags |= 0x8000u;
  }
  if ( (*(_DWORD *)(a3 + 136) & 0x200) != 0 )
    NetBufferAndNetBufferList->Flags |= 0x200u;
  NetBufferAndNetBufferList->NetBufferListInfo[0] = *(void **)(a3 + 144);
  NetBufferAndNetBufferList->NetBufferListInfo[1] = *(void **)(a3 + 152);
  NetBufferAndNetBufferList->NetBufferListInfo[2] = *(void **)(a3 + 160);
  NetBufferAndNetBufferList->NetBufferListInfo[3] = *(void **)(a3 + 168);
  NetBufferAndNetBufferList->NetBufferListInfo[4] = *(void **)(a3 + 176);
  NetBufferAndNetBufferList->NetBufferListInfo[6] = *(void **)(a3 + 192);
  NetBufferAndNetBufferList->NetBufferListInfo[7] = *(void **)(a3 + 200);
  NetBufferAndNetBufferList->NetBufferListInfo[11] = *(void **)(a3 + 232);
  NetBufferAndNetBufferList->NetBufferListInfo[12] = *(void **)(a3 + 240);
  if ( byte_14011F740 )
  {
    NetBufferAndNetBufferList->NetBufferListInfo[13] = *(void **)(a3 + 248);
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v25 = (__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v31.Data4 = 0LL;
    *(_QWORD *)&v31.Data1 = v25;
    v26 = (struct _GUID)(unsigned __int64)v25;
    v27 = *(_QWORD *)(a3 + 248) & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v31.Data4 = 0LL;
    *(_QWORD *)&v31.Data1 = v27;
    v32 = v26;
    EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFuLL, v19, &v32, &v31, DataOffset, DataLength, 6u);
  }
  return NetBufferAndNetBufferList;
}
