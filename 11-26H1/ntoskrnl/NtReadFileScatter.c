/*
 * XREFs of NtReadFileScatter @ 0x140B0D2F0
 * Callers:
 *     DifNtReadFileScatterWrapper @ 0x140687760 (DifNtReadFileScatterWrapper.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 */

__int64 __fastcall NtReadFileScatter(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        ULONG Length,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-18h] BYREF

  BugCheckParameter2[0] = 0LL;
  result = IopReferenceFileObject(a1, 1u, KeGetCurrentThread()->PreviousMode, BugCheckParameter2, 0LL);
  if ( (int)result >= 0 )
    return IopReadFileScatter(
             BugCheckParameter2[0],
             a5,
             (Length >> 12) + ((Length & 0xFFF) != 0),
             SegmentArray,
             Length,
             a8,
             a9,
             0LL,
             0LL);
  return result;
}
