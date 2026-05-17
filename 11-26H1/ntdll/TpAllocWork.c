/*
 * XREFs of TpAllocWork @ 0x18004E830
 * Callers:
 *     LdrpEnableParallelLoading @ 0x1800649F0 (LdrpEnableParallelLoading.c)
 *     RtlpFcAllocateChangeRegistration @ 0x18006EAC8 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpCtContextInit @ 0x18014969C (RtlpCtContextInit.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppWorkInitialize @ 0x18004D8A0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18004EB90 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocWork(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // edi
  __int64 Heap_0; // rax
  _QWORD *v10; // rsi
  int v11; // edi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( a4 )
    v8 = *(_DWORD *)(a4 + 56);
  else
    v8 = 0;
  if ( !a1 || !a2 || (v8 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    *a1 = 0LL;
    Heap_0 = RtlAllocateHeap_0();
    v10 = (_QWORD *)Heap_0;
    if ( Heap_0 )
    {
      *(_QWORD *)(Heap_0 + 176) = retaddr;
      v11 = TppWorkInitialize(
              Heap_0,
              a3,
              a4,
              v8,
              (__int64)TppWorkpCleanupGroupMemberVFuncs,
              (__int64)TppWorkpTaskVFuncs);
      if ( v11 >= 0 )
      {
        v10[10] = a2;
        v11 = 0;
        if ( a4 )
          v10[4] = *(_QWORD *)(a4 + 48);
        if ( v10[2] )
          TppCleanupGroupAddMember(v10);
      }
    }
    else
    {
      v11 = -1073741801;
    }
    if ( v11 < 0 )
    {
      if ( v10 )
        RtlFreeHeap_0();
    }
    else
    {
      *a1 = v10;
    }
    return (unsigned int)v11;
  }
}
