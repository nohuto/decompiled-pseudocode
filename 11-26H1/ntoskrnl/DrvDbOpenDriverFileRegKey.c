/*
 * XREFs of DrvDbOpenDriverFileRegKey @ 0x1408A4CF0
 * Callers:
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1408A45F4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x1408A5308 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x140B57EB0 (DrvDbDispatchDriverFile.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140B64C8C (DrvDbGetDriverFileMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 4, a2, a3, a4, a5, a6, 0LL);
}
