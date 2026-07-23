/*
 * XREFs of TpSimpleTryPost @ 0x1800D7DF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     TppWorkPost @ 0x18002BCE0 (TppWorkPost.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkInitialize @ 0x180037E20 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x180039110 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl TpSimpleTryPost(PTP_SIMPLE_CALLBACK Callback, PVOID Context, PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // r15d
  unsigned int Flags; // edi
  _QWORD *Heap_0; // rax
  _QWORD *v8; // rsi
  NTSTATUS v9; // edi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (int)Context;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !Callback || (Flags & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xF0uLL);
    v8 = Heap_0;
    if ( Heap_0 )
    {
      Heap_0[22] = retaddr;
      v9 = TppWorkInitialize(
             (__int64)Heap_0,
             v4,
             (int)CallbackEnviron,
             Flags,
             (__int64)&TppSimplepCleanupGroupMemberVFuncs,
             (__int64)&TppSimplepTaskVFuncs);
      if ( v9 >= 0 )
      {
        v9 = 0;
        v8[10] = Callback;
        if ( CallbackEnviron )
          v8[4] = CallbackEnviron->FinalizationCallback;
        if ( v8[2] )
          TppCleanupGroupAddMember((__int64)v8);
      }
    }
    else
    {
      v9 = -1073741801;
    }
    if ( v9 < 0 )
    {
      if ( v8 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, v8);
    }
    else
    {
      TppWorkPost((__int64)v8);
    }
    return v9;
  }
}
