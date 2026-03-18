/*
 * XREFs of IopIoRingReferenceFileObject @ 0x140B3E9AC
 * Callers:
 *     IopIoRingDispatchCancel @ 0x140797ED8 (IopIoRingDispatchCancel.c)
 *     IopIoRingDispatchFlush @ 0x140797FA0 (IopIoRingDispatchFlush.c)
 *     IopIoRingDispatchReadScatter @ 0x140798090 (IopIoRingDispatchReadScatter.c)
 *     IopIoRingDispatchWrite @ 0x1407987BC (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchWriteGather @ 0x140798974 (IopIoRingDispatchWriteGather.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObReferenceFileObjectForWrite @ 0x1408F9590 (ObReferenceFileObjectForWrite.c)
 */

__int64 __fastcall IopIoRingReferenceFileObject(
        __int64 a1,
        __int64 a2,
        char a3,
        KPROCESSOR_MODE a4,
        char a5,
        ACCESS_MASK a6,
        ULONG_PTR *a7,
        struct _OBJECT_HANDLE_INFORMATION *a8)
{
  void *v8; // r10

  v8 = (void *)a2;
  if ( a3 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 192) )
      return 3221226705LL;
    v8 = *(void **)(*(_QWORD *)(a1 + 200) + 8LL * (unsigned int)a2);
  }
  if ( !a5 )
    return IopReferenceFileObject(v8, a6, a4, a7, a8);
  LOBYTE(a2) = a4;
  return ObReferenceFileObjectForWrite((ULONG_PTR)v8, a2, a7, (int *)a8);
}
