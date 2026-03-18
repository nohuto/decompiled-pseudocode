/*
 * XREFs of MiValidateZeroBits @ 0x1409F3F40
 * Callers:
 *     NtCreateEnclave @ 0x140876D00 (NtCreateEnclave.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409F2C94 (MiAllocateVirtualMemoryPrepare.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x140479BE0 (RtlFindMostSignificantBit.c)
 */

ULONGLONG __fastcall MiValidateZeroBits(ULONGLONG *a1)
{
  ULONGLONG result; // rax
  unsigned __int64 v3; // rcx

  result = *a1;
  if ( *a1 )
  {
    if ( result < 0x20 )
      v3 = result + 32;
    else
      v3 = 63 - RtlFindMostSignificantBit(*a1);
    result = 0LL;
    *a1 = v3;
    if ( v3 > 0x35 )
      return 3221225485LL;
  }
  return result;
}
