/*
 * XREFs of VfIrpWatermark @ 0x140C2C774
 * Callers:
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     IovUtilWatermarkIrp @ 0x1404BECEC (IovUtilWatermarkIrp.c)
 * Callees:
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C39D70 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C45F84 (VfIrpDatabaseEntryFindAndLock.c)
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
