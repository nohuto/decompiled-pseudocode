/*
 * XREFs of TpAllocTimer @ 0x18004EC00
 * Callers:
 *     RtlCreateTimer @ 0x1800674B0 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x180070624 (RtlpInitializeWnf.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppWorkInitialize @ 0x18004D8A0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18004EB90 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocTimer(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 Heap_0; // rbx
  int v9; // r9d
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    Heap_0 = RtlAllocateHeap_0();
    if ( Heap_0 )
    {
      *(_QWORD *)(Heap_0 + 176) = retaddr;
      if ( a4 )
        v9 = *(_DWORD *)(a4 + 56);
      else
        v9 = 0;
      result = TppWorkInitialize(
                 Heap_0,
                 a3,
                 a4,
                 v9,
                 (__int64)TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)TppTimerpTaskVFuncs);
      if ( (int)result >= 0 )
      {
        v11 = *(_QWORD *)(Heap_0 + 144);
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 432), 1u);
        v13 = (unsigned int)(v12 + 1);
        if ( v12 <= 0 && (int)v13 > 0 )
        {
          v14 = *(_QWORD *)(v11 + 56);
          v16 = 1;
          NtSetInformationWorkerFactory(v14, 3LL, &v16, 4LL);
        }
        *(_QWORD *)(Heap_0 + 240) = 0LL;
        *(_BYTE *)(Heap_0 + 353) = 0;
        if ( a4 )
          *(_QWORD *)(Heap_0 + 32) = *(_QWORD *)(a4 + 48);
        if ( *(_QWORD *)(Heap_0 + 16) )
          TppCleanupGroupAddMember(Heap_0, v13);
        *(_QWORD *)(Heap_0 + 80) = a2;
        result = 0LL;
        *a1 = Heap_0;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
