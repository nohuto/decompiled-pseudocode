/*
 * XREFs of BasepGetFileNameInformation @ 0x14001A318
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14001ADC0 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001EE28 (BaseSetLastNTError.c)
 *     memmove_0 @ 0x14001EFB3 (memmove_0.c)
 */

__int64 __fastcall BasepGetFileNameInformation(
        HANDLE FileHandle,
        FILE_INFORMATION_CLASS FileInformationClass,
        _QWORD *a3)
{
  _DWORD *v3; // rdi
  ULONG v7; // ebx
  _DWORD *Heap; // rax
  NTSTATUS v9; // eax
  size_t v10; // rbx
  __int64 result; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0LL;
  IoStatusBlock = 0LL;
  v7 = 528;
  do
  {
    if ( v3 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v7);
    v3 = Heap;
    if ( !Heap )
    {
      v9 = -1073741670;
      goto LABEL_9;
    }
    v9 = NtQueryInformationFile(FileHandle, &IoStatusBlock, Heap, v7, FileInformationClass);
    v7 = *v3 + 8;
  }
  while ( v9 == -2147483643 );
  if ( v9 >= 0 )
  {
    v10 = *(unsigned __int16 *)v3;
    memmove_0(v3, v3 + 1, v10);
    result = 1LL;
    *a3 = v3;
    *((_WORD *)v3 + (v10 >> 1)) = 0;
    return result;
  }
LABEL_9:
  BaseSetLastNTError((unsigned int)v9);
  if ( v3 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
  return 0LL;
}
