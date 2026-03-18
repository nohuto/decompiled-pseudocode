/*
 * XREFs of NtCancelIoFileEx @ 0x1409561B0
 * Callers:
 *     DifNtCancelIoFileExWrapper @ 0x14066E190 (DifNtCancelIoFileExWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     IopCancelIoFile @ 0x140956B1C (IopCancelIoFile.c)
 */

__int64 __fastcall NtCancelIoFileEx(void *a1, __int64 a2, unsigned int *a3)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 result; // rax
  PVOID v8; // rdi
  unsigned int v9; // ebx
  int ULongFromUser; // eax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  unsigned int Src; // [rsp+48h] [rbp-20h] BYREF
  int v13; // [rsp+4Ch] [rbp-1Ch]
  __int64 v14; // [rsp+50h] [rbp-18h]

  Object = 0LL;
  v13 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a3);
    RtlWriteULongToUser(a3, ULongFromUser);
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, (ULONG_PTR *)&Object, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = Object;
    v9 = IopCancelIoFile(Object, a2);
    v13 = 0;
    Src = v9;
    v14 = 0LL;
    if ( PreviousMode )
      RtlCopyToUser(a3, &Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(a3, &Src, 0x10uLL);
    ObfDereferenceObject(v8);
    return v9;
  }
  return result;
}
