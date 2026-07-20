/*
 * XREFs of BasepGetObjectNTName @ 0x14001A43C
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14001ADC0 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001EE28 (BaseSetLastNTError.c)
 *     memmove_0 @ 0x14001EFB3 (memmove_0.c)
 */

__int64 __fastcall BasepGetObjectNTName(HANDLE Handle, const void ***a2)
{
  const void **Heap; // rbx
  NTSTATUS v5; // eax
  ULONG v6; // esi
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  ULONG ReturnLength; // [rsp+60h] [rbp+18h] BYREF

  Heap = 0LL;
  ReturnLength = 0;
  v5 = -2147483643;
  v6 = 536;
  while ( v5 == -2147483643 )
  {
    if ( Heap )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    Heap = (const void **)RtlAllocateHeap(
                            *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                            KernelBaseGlobalData,
                            v6);
    if ( !Heap )
    {
      v5 = -1073741670;
      goto LABEL_9;
    }
    v5 = NtQueryObject(Handle, ObjectNameInformation, Heap, v6, &ReturnLength);
    v6 = ReturnLength;
  }
  if ( v5 >= 0 )
  {
    ReturnLength = *(unsigned __int16 *)Heap;
    memmove_0(Heap, Heap[1], ReturnLength);
    result = 1LL;
    v8 = (unsigned __int64)ReturnLength >> 1;
    *a2 = Heap;
    *((_WORD *)Heap + v8) = 0;
    return result;
  }
LABEL_9:
  BaseSetLastNTError((unsigned int)v5);
  if ( Heap )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  return 0LL;
}
