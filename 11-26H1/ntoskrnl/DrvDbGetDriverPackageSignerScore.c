/*
 * XREFs of DrvDbGetDriverPackageSignerScore @ 0x140B2B98C
 * Callers:
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1408A4834 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140B88288 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverPackageSignerScore(__int64 a1, _WORD *a2, char *a3, void *a4)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-18h] BYREF
  __int64 (*v6)[3]; // [rsp+44h] [rbp-14h] BYREF

  v5 = 0;
  LODWORD(v6) = 0;
  result = DrvDbGetDriverPackageMappedProperty(
             a1,
             a2,
             a3,
             (__int64)&DEVPKEY_DriverPackage_SignerScore,
             &v5,
             a4,
             4u,
             &v6);
  if ( (int)result >= 0 && (v5 != 7 || (_DWORD)v6 != 4) )
    return 3221225473LL;
  return result;
}
