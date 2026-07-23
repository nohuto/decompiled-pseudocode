/*
 * XREFs of NtRemoveIoCompletion @ 0x140A684B0
 * Callers:
 *     DifNtRemoveIoCompletionWrapper @ 0x14068C720 (DifNtRemoveIoCompletionWrapper.c)
 * Callees:
 *     IoRemoveIoCompletion @ 0x140222160 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *KeyContext,
        PVOID *ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  LARGE_INTEGER *v9; // rdi
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 ULong64FromUser; // rax
  __int64 v12; // rax
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  NTSTATUS v15; // esi
  ULONG v16; // [rsp+48h] [rbp-60h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  __int128 v19; // [rsp+60h] [rbp-48h] BYREF
  __int128 Src; // [rsp+70h] [rbp-38h] BYREF
  PLIST_ENTRY v21[2]; // [rsp+80h] [rbp-28h] BYREF

  v21[0] = 0LL;
  v19 = 0LL;
  Src = 0LL;
  v16 = 0;
  v17 = 0LL;
  v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(ApcContext);
    RtlWriteULong64ToUser(ApcContext, ULong64FromUser);
    v12 = RtlReadULong64FromUser(KeyContext);
    RtlWriteULong64ToUser(KeyContext, v12);
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatusBlock);
    RtlWriteULongToUser(IoStatusBlock, ULongFromUser);
    if ( Timeout )
    {
      v9 = (LARGE_INTEGER *)&v17;
      v21[1] = (PLIST_ENTRY)&v17;
      v17 = RtlReadULong64FromUser(Timeout);
    }
  }
  else if ( Timeout )
  {
    v9 = Timeout;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v15 = IoRemoveIoCompletion((struct _KQUEUE *)Object, (unsigned __int64)&v19, v21, 1u, &v16, PreviousMode, v9, 0);
    ObfDereferenceObject(Object);
    if ( !v15 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(KeyContext, v19);
      else
        *KeyContext = (PVOID)v19;
      if ( PreviousMode )
        RtlWriteULong64ToUser(ApcContext, *((__int64 *)&v19 + 1));
      else
        *ApcContext = (PVOID)*((_QWORD *)&v19 + 1);
      if ( PreviousMode )
        RtlCopyToUser(IoStatusBlock, &Src, 0x10uLL);
      else
        RtlCopyVolatileMemory(IoStatusBlock, &Src, 0x10uLL);
    }
    return v15;
  }
  return result;
}
