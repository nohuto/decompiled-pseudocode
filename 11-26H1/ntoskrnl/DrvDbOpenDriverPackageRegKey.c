/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x14091D528
 * Callers:
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14089E434 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbDispatchDriverPackage @ 0x14091C060 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B7F3A8 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
