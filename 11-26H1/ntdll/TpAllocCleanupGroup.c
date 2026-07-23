/*
 * XREFs of TpAllocCleanupGroup @ 0x1800EC9F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocCleanupGroup(PTP_CLEANUP_GROUP *CleanupGroupReturn)
{
  _QWORD *Heap_0; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  NTSTATUS v5; // ebx

  if ( !CleanupGroupReturn || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    *CleanupGroupReturn = 0LL;
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag | 8, 0x50uLL);
    v3 = Heap_0;
    if ( Heap_0 )
    {
      *Heap_0 = 1LL;
      Heap_0[1] = 0LL;
      Heap_0[7] = 0LL;
      v4 = Heap_0 + 2;
      v4[1] = v4;
      *v4 = v4;
      v3[9] = v3 + 8;
      v3[8] = v3 + 8;
      *((_OWORD *)v3 + 2) = 0LL;
      v3[6] = 0LL;
      v5 = 0;
      *CleanupGroupReturn = (PTP_CLEANUP_GROUP)v3;
    }
    else
    {
      v5 = -1073741801;
    }
    if ( v5 < 0 )
    {
      if ( v3 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag, v3);
    }
    return v5;
  }
}
