/*
 * XREFs of HalPutScatterGatherListV3 @ 0x140437894
 * Callers:
 *     HalPutScatterGatherList @ 0x14035D2F0 (HalPutScatterGatherList.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IoFreeMapRegistersV3 @ 0x1404376F0 (IoFreeMapRegistersV3.c)
 *     HalpContinueProcessingWaitQueue @ 0x1404377B0 (HalpContinueProcessingWaitQueue.c)
 *     HalFlushAdapterBuffersEx @ 0x1404379C0 (HalFlushAdapterBuffersEx.c)
 *     HalpDmaStartWcb @ 0x140439A18 (HalpDmaStartWcb.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListV3(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // r12
  __int64 v5; // rbp
  char v6; // r15
  __int64 *v7; // rsi
  struct _MDL *v8; // rdi
  struct _MDL *Next; // r14

  v3 = *(_QWORD *)(a2 + 8);
  v4 = a3;
  v5 = a1;
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    v6 = 1;
    v7 = (__int64 *)(v3 + 24);
    if ( *(_QWORD *)(v3 + 24) )
    {
      while ( 1 )
      {
        LOBYTE(a3) = 1;
        if ( (unsigned __int8)HalpDmaStartWcb(a1, v3 + 48, a3) )
          break;
        _mm_pause();
        a1 = v5;
      }
    }
  }
  else
  {
    v6 = 0;
    v7 = (__int64 *)(v3 + 24);
  }
  HalFlushAdapterBuffersEx(
    v5,
    *(_QWORD *)(v3 + 8),
    *v7,
    *(_DWORD *)(v3 + 32) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 44LL) - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 32LL),
    *(_DWORD *)(v3 + 40),
    v4);
  IoFreeMapRegistersV3(v5, *v7, *(_DWORD *)(v3 + 44));
  v8 = *(struct _MDL **)(v3 + 16);
  if ( v8 )
  {
    do
    {
      Next = v8->Next;
      if ( (v8->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v8->MappedSystemVa, v8);
      IoFreeMdl(v8);
      v8 = Next;
    }
    while ( Next );
  }
  if ( v6 && *v7 )
    HalpContinueProcessingWaitQueue(v5);
  if ( (*(_DWORD *)v3 & 1) == 0 )
    ExFreePoolWithTag(*(PVOID *)(v3 + 160), 0);
}
