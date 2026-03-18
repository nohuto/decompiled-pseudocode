/*
 * XREFs of MiReverseSwizzleInvalidPte @ 0x140449070
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 *     MiAllocatePerSessionProtos @ 0x140B11CA8 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReverseSwizzleInvalidPte(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  result = a1;
  if ( qword_140E2D740 )
  {
    result = a1 & 0xFFFFFFFFFFFFFFEFuLL;
    if ( (a1 & 0x10) == 0 )
      return a1 & qword_140E2D748;
  }
  return result;
}
