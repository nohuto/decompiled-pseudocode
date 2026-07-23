/*
 * XREFs of MiPageSizeToPteLevel @ 0x140471ED0
 * Callers:
 *     MiWriteAwePtesPrepare @ 0x140471C9C (MiWriteAwePtesPrepare.c)
 *     MiVadPageTableChargeLevel @ 0x140471E50 (MiVadPageTableChargeLevel.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140773E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiProtectAwePrepare @ 0x14087F400 (MiProtectAwePrepare.c)
 *     NtMapUserPhysicalPages @ 0x140B3C1D0 (NtMapUserPhysicalPages.c)
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
