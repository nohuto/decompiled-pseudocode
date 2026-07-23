/*
 * XREFs of MiHyperSpaceSize @ 0x140478EE8
 * Callers:
 *     MiInitializePageTradePacket @ 0x140292A70 (MiInitializePageTradePacket.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiDeleteVadBitmap @ 0x140AFCE30 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140CFF498 (MiAssignTopLevelRanges.c)
 * Callees:
 *     <none>
 */

__int64 MiHyperSpaceSize()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = qword_140E2DFE0;
  if ( !qword_140E2DFE0 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140E2DFE8[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140E2DFE0 = v3 + 8 * v4;
  }
  return result;
}
