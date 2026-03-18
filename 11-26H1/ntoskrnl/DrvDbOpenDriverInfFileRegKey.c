/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x14091BE60
 * Callers:
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14089E314 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14089F03C (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x14091BC80 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
