/*
 * XREFs of TpAllocWork @ 0x180038DB0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180084E40 (LdrpEnableParallelLoading.c)
 *     RtlpFcAllocateChangeRegistration @ 0x18008EF18 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpCtContextInit @ 0x18014954C (RtlpCtContextInit.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppWorkInitialize @ 0x180037E20 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x180039110 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWork(
        PTP_WORK *WorkReturn,
        PTP_WORK_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r12d
  unsigned int Flags; // edi
  _TP_WORK *Heap_0; // rax
  _TP_WORK *v10; // rsi
  NTSTATUS v11; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (int)Context;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !WorkReturn || !Callback || (Flags & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    *WorkReturn = 0LL;
    Heap_0 = (_TP_WORK *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xF0uLL);
    v10 = Heap_0;
    if ( Heap_0 )
    {
      Heap_0->CleanupGroupMember.AllocCaller.ReturnAddress = retaddr;
      v11 = TppWorkInitialize(
              (__int64)Heap_0,
              v5,
              (int)CallbackEnviron,
              Flags,
              (__int64)&TppWorkpCleanupGroupMemberVFuncs,
              (__int64)&TppWorkpTaskVFuncs);
      if ( v11 >= 0 )
      {
        v10->CleanupGroupMember.Callback = Callback;
        v11 = 0;
        if ( CallbackEnviron )
          v10->CleanupGroupMember.FinalizationCallback = CallbackEnviron->FinalizationCallback;
        if ( v10->CleanupGroupMember.CleanupGroup )
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
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, v10);
    }
    else
    {
      *WorkReturn = v10;
    }
    return v11;
  }
}
