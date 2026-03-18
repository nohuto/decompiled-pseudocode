/*
 * XREFs of DrvDbOpenDriverFileRegKey @ 0x14089E8F0
 * Callers:
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x14089E1F4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x14089EF08 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x140B55610 (DrvDbDispatchDriverFile.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140B61BEC (DrvDbGetDriverFileMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 4, a2, a3, a4, a5, a6, 0LL);
}
