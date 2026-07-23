/*
 * XREFs of NtReadFile @ 0x1409293A0
 * Callers:
 *     DifNtReadFileWrapper @ 0x14068B530 (DifNtReadFileWrapper.c)
 *     PfSnGetPrefetchInstructions @ 0x140987060 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 */

NTSTATUS __stdcall NtReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v13; // rbx
  _DWORD *v14; // rax
  SIZE_T v15; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+70h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             1u,
             (POBJECT_TYPE)IoFileObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v13 = (struct _FILE_OBJECT *)Object;
    v14 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v14 && (*v14 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(v13);
      return -1073739504;
    }
    else
    {
      LODWORD(v15) = Length;
      return IopReadFile(
               v13,
               Event,
               (__int64)ApcRoutine,
               (unsigned int *)ApcContext,
               (unsigned int *)IoStatusBlock,
               (struct _IRP *)Buffer,
               v15,
               (__int64)ByteOffset,
               Key,
               0LL,
               0LL,
               0,
               0LL,
               0LL);
    }
  }
  return result;
}
