/*
 * XREFs of NtWriteFileGather @ 0x140B01BE0
 * Callers:
 *     DifNtWriteFileGatherWrapper @ 0x140691980 (DifNtWriteFileGatherWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 */

__int64 __fastcall NtWriteFileGather(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        volatile void *Address,
        ULONG Length,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax
  struct _OBJECT_HANDLE_INFORMATION v10; // [rsp+70h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  v10 = 0LL;
  result = IopReferenceFileObject(a1, 0, KeGetCurrentThread()->PreviousMode, &BugCheckParameter2, &v10);
  if ( (int)result >= 0 )
    return IopWriteFileGather(
             BugCheckParameter2,
             a5,
             (Length >> 12) + ((Length & 0xFFF) != 0),
             Address,
             Length,
             a8,
             a9,
             v10.GrantedAccess,
             0LL,
             0LL,
             0);
  return result;
}
