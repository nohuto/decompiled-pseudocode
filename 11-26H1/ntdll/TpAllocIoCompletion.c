/*
 * XREFs of TpAllocIoCompletion @ 0x1800856E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x180039110 (TppCleanupGroupAddMember.c)
 *     TpBindFileToDirect @ 0x180085924 (TpBindFileToDirect.c)
 *     TppGetCurrentThreadNumaNode @ 0x180086D00 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  PTP_IO *v8; // r12
  unsigned int Flags; // edi
  _QWORD *Heap_0; // rax
  __int64 v11; // rbx
  NTSTATUS v12; // edi
  __int64 v13; // rcx
  _DWORD *v14; // r14
  _BYTE *v15; // r15
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v8 = IoReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( IoReturn
    && File
    && Callback
    && (Flags & 0xFFFFFFFC) == 0
    && (IoReturn = (PTP_IO *)NtCurrentPeb()->Ldr, !*((_BYTE *)IoReturn + 72)) )
  {
    *v8 = 0LL;
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, 0x120uLL);
    v11 = (__int64)Heap_0;
    if ( Heap_0 )
    {
      Heap_0[22] = retaddr;
      v12 = TppCleanupGroupMemberInitialize(
              (__int64)Heap_0,
              (__int64)Context,
              (__int64)CallbackEnviron,
              Flags,
              (__int64)&TppIopCleanupGroupMemberVFuncs);
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = Callback;
        *(_QWORD *)(v11 + 272) = File;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = TppIopExecuteCallback;
        v14 = (_DWORD *)(v11 + 264);
        v15 = (_BYTE *)(v11 + 268);
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, v11 + 264, v11 + 268, 0LL);
        }
        else
        {
          *v14 = 0;
          *v15 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 208) = *v14;
        *(_BYTE *)(v11 + 212) = *v15;
        v12 = TpBindFileToDirect(File);
        if ( v12 >= 0 )
        {
          v12 = 0;
          if ( CallbackEnviron )
            *(_QWORD *)(v11 + 32) = CallbackEnviron->FinalizationCallback;
          if ( *(_QWORD *)(v11 + 16) )
            TppCleanupGroupAddMember(v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy((_QWORD *)v11);
      }
    }
    else
    {
      v12 = -1073741801;
    }
    if ( v12 < 0 )
    {
      if ( v11 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, (PVOID)v11);
    }
    else
    {
      *v8 = (PTP_IO)v11;
    }
    return v12;
  }
  else
  {
    TppRaiseInvalidParameter(IoReturn, File);
    return -1073741811;
  }
}
