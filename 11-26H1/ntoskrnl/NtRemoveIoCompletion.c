/*
 * XREFs of NtRemoveIoCompletion @ 0x140A5B4F0
 * Callers:
 *     DifNtRemoveIoCompletionWrapper @ 0x140688B40 (DifNtRemoveIoCompletionWrapper.c)
 * Callees:
 *     IoRemoveIoCompletion @ 0x1402207D0 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtRemoveIoCompletion(HANDLE Handle, _QWORD *a2, _QWORD *a3, unsigned int *a4, LARGE_INTEGER *a5)
{
  LARGE_INTEGER *v9; // rdi
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 ULong64FromUser; // rax
  __int64 v12; // rax
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  int v15; // esi
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
    ULong64FromUser = RtlReadULong64FromUser(a3);
    RtlWriteULong64ToUser(a3, ULong64FromUser);
    v12 = RtlReadULong64FromUser(a2);
    RtlWriteULong64ToUser(a2, v12);
    ULongFromUser = RtlReadULongFromUser(a4);
    RtlWriteULongToUser(a4, ULongFromUser);
    if ( a5 )
    {
      v9 = (LARGE_INTEGER *)&v17;
      v21[1] = (PLIST_ENTRY)&v17;
      v17 = RtlReadULong64FromUser(a5);
    }
  }
  else if ( a5 )
  {
    v9 = a5;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v15 = IoRemoveIoCompletion((struct _KQUEUE *)Object, (unsigned __int64)&v19, v21, 1u, &v16, PreviousMode, v9, 0);
    ObfDereferenceObject(Object);
    if ( !v15 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a2, v19);
      else
        *a2 = v19;
      if ( PreviousMode )
        RtlWriteULong64ToUser(a3, *((__int64 *)&v19 + 1));
      else
        *a3 = *((_QWORD *)&v19 + 1);
      if ( PreviousMode )
        RtlCopyToUser(a4, &Src, 0x10uLL);
      else
        RtlCopyVolatileMemory(a4, &Src, 0x10uLL);
    }
    return v15;
  }
  return result;
}
