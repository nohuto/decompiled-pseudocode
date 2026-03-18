/*
 * XREFs of VfIrpWatermark @ 0x140B7E0A0
 * Callers:
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     IovUtilWatermarkIrp @ 0x140482194 (IovUtilWatermarkIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140B94004 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140B970A4 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfIrpWatermark(__int64 a1, char a2)
{
  __int64 result; // rax

  result = VfIrpDatabaseEntryFindAndLock(a1);
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 56) |= 0x100000u;
    if ( (a2 & 2) != 0 )
      *(_DWORD *)(result + 56) |= 0x20u;
    return VfIrpDatabaseEntryReleaseLock(result);
  }
  return result;
}
