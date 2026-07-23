/*
 * XREFs of MiReverseSwizzleInvalidPte @ 0x140441B60
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     MiAllocatePerSessionProtos @ 0x140B13A28 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReverseSwizzleInvalidPte(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  result = a1;
  if ( qword_140E2D8C0 )
  {
    result = a1 & 0xFFFFFFFFFFFFFFEFuLL;
    if ( (a1 & 0x10) == 0 )
      return a1 & qword_140E2D8C8;
  }
  return result;
}
