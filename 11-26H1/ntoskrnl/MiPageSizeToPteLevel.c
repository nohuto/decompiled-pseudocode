/*
 * XREFs of MiPageSizeToPteLevel @ 0x140478750
 * Callers:
 *     MiWriteAwePtesPrepare @ 0x14047851C (MiWriteAwePtesPrepare.c)
 *     MiVadPageTableChargeLevel @ 0x1404786D0 (MiVadPageTableChargeLevel.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140770E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiProtectAwePrepare @ 0x140879020 (MiProtectAwePrepare.c)
 *     NtMapUserPhysicalPages @ 0x140B39FC0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageSizeToPteLevel(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 2LL; i >= -1; --i )
  {
    if ( a1 <= MiPageSizes[i] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
