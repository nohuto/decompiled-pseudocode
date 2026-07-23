/*
 * XREFs of SaferpIsDllAllowed @ 0x1800E27A4
 * Callers:
 *     LdrpCodeAuthzCheckDllAllowedSrpV2 @ 0x1800E25F0 (LdrpCodeAuthzCheckDllAllowedSrpV2.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtDeviceIoControlFile @ 0x18015EF20 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenFile @ 0x18015F4A0 (NtOpenFile.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SaferpIsDllAllowed(__int64 a1, const void **a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  ULONG InputBufferLength; // r14d
  _WORD *Heap_0; // rax
  _WORD *InputBuffer; // rdi
  NTSTATUS v9; // eax
  struct _PEB *v10; // rcx
  _QWORD v12[2]; // [rsp+50h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  unsigned int OutputBuffer; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v12[0] = 2359330LL;
  FileHandle = 0LL;
  v12[1] = L"\\Device\\SrpDevice";
  OutputBuffer = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 7u, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 || v4 == -1073741810 )
      v5 = 0;
  }
  else
  {
    InputBufferLength = *(unsigned __int16 *)a2 + 10;
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, InputBufferLength);
    InputBuffer = Heap_0;
    if ( Heap_0 )
    {
      memset_thunk_772440563353939046(Heap_0, 0, InputBufferLength);
      *(_QWORD *)InputBuffer = a1;
      if ( *(_WORD *)a2 )
      {
        InputBuffer[4] = *(_WORD *)a2;
        memmove(InputBuffer + 5, a2[1], *(unsigned __int16 *)a2);
      }
      v9 = NtDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x225804u,
             InputBuffer,
             InputBufferLength,
             &OutputBuffer,
             4u);
      v10 = NtCurrentPeb();
      v5 = v9;
      if ( v9 >= 0 )
        v5 = OutputBuffer;
      RtlFreeHeap_0(v10->ProcessHeap, 0, InputBuffer);
    }
    else
    {
      v5 = -1073741801;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  return v5;
}
