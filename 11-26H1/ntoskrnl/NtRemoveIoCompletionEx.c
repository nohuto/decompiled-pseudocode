/*
 * XREFs of NtRemoveIoCompletionEx @ 0x140A6AAB0
 * Callers:
 *     DifNtRemoveIoCompletionExWrapper @ 0x14068C570 (DifNtRemoveIoCompletionExWrapper.c)
 * Callees:
 *     IoRemoveIoCompletion @ 0x140222160 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  unsigned int *v6; // r14
  __int64 v7; // r13
  int v9; // edi
  LARGE_INTEGER *v10; // r15
  KPROCESSOR_MODE PreviousMode; // si
  PLIST_ENTRY *v12; // r14
  NTSTATUS v13; // ebx
  __int64 v15; // rax
  PFILE_IO_COMPLETION_INFORMATION v16; // r14
  _FILE_IO_COMPLETION_INFORMATION *v17; // rcx
  char UCharFromUser; // al
  int ULongFromUser; // eax
  __int64 Pool2; // rax
  int v21; // ecx
  int v22; // [rsp+44h] [rbp-104h] BYREF
  PVOID Object; // [rsp+48h] [rbp-100h] BYREF
  PULONG v24; // [rsp+58h] [rbp-F0h]
  __int64 ULong64FromUser; // [rsp+60h] [rbp-E8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-E0h]
  __int64 *v27; // [rsp+70h] [rbp-D8h]
  _BYTE P[128]; // [rsp+80h] [rbp-C8h] BYREF

  v6 = NumEntriesRemoved;
  v24 = NumEntriesRemoved;
  v7 = Count;
  Handle = IoCompletionHandle;
  memset_0(P, 0, sizeof(P));
  v9 = 0;
  ULong64FromUser = 0LL;
  v22 = 0;
  if ( (unsigned int)(v7 - 1) > 0x7FFFFFE )
    return -1073741811;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v15 = v7;
    if ( 32 * v7 )
    {
      v16 = IoCompletionInformation;
      if ( ((unsigned __int8)IoCompletionInformation & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = &IoCompletionInformation[v15];
      if ( &IoCompletionInformation[v15] <= IoCompletionInformation || (unsigned __int64)v17 > 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      Object = (PVOID)((((unsigned __int64)&v17[-1].IoStatusBlock.Information + 7) & 0xFFFFFFFFFFFFF000uLL) + 4096);
      do
      {
        UCharFromUser = RtlReadUCharFromUser(v16);
        RtlWriteUCharToUser(v16, UCharFromUser);
        v16 = (PFILE_IO_COMPLETION_INFORMATION)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL) + 4096);
      }
      while ( v16 != Object );
      v6 = v24;
    }
    ULongFromUser = RtlReadULongFromUser(v6);
    RtlWriteULongToUser(v6, ULongFromUser);
    if ( Timeout )
    {
      v10 = (LARGE_INTEGER *)&ULong64FromUser;
      v27 = &ULong64FromUser;
      ULong64FromUser = RtlReadULong64FromUser(Timeout);
    }
  }
  else if ( Timeout )
  {
    v10 = Timeout;
  }
  if ( (unsigned int)v7 > 0x10 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v12 = (PLIST_ENTRY *)P;
    if ( Pool2 )
      v12 = (PLIST_ENTRY *)Pool2;
    v21 = 16;
    if ( Pool2 )
      v21 = v7;
    LODWORD(v7) = v21;
  }
  else
  {
    v12 = (PLIST_ENTRY *)P;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v13 = IoRemoveIoCompletion(
            (struct _KQUEUE *)Object,
            (unsigned __int64)IoCompletionInformation,
            v12,
            v7,
            (ULONG *)&v22,
            PreviousMode,
            v10,
            Alertable);
    ObfDereferenceObject(Object);
    v9 = v22;
  }
  if ( v12 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(v12, 0);
  if ( v13 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(v24, v9);
    else
      *v24 = v9;
  }
  return v13;
}
