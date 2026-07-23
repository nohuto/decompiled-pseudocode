/*
 * XREFs of CcWrapperMmCopyToCachedPage @ 0x1402B2310
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 */

__int64 __fastcall CcWrapperMmCopyToCachedPage(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, bool *a6)
{
  unsigned int i; // r15d
  unsigned int v12; // ecx

  for ( i = 1; i <= 2; ++i )
  {
    v12 = MmCopyToCachedPage(a1, a2, a3, a4, a5);
    if ( (a5 & 8) == 0 )
      break;
    if ( v12 != -1073741670 )
      break;
    a5 &= 0xFFFFFFF3;
  }
  *a6 = (a5 & 4) == 0;
  return v12;
}
