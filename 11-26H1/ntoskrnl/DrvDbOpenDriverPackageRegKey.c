/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x140977F88
 * Callers:
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1408A4834 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbDispatchDriverPackage @ 0x140976AC0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B88288 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
