/*
 * XREFs of MiHyperSpaceSize @ 0x14047F578
 * Callers:
 *     MiInitializePageTradePacket @ 0x140293510 (MiInitializePageTradePacket.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiDeleteVadBitmap @ 0x140AFAF24 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140CF9118 (MiAssignTopLevelRanges.c)
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

  result = qword_140E2DE60;
  if ( !qword_140E2DE60 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140E2DE68[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140E2DE60 = v3 + 8 * v4;
  }
  return result;
}
