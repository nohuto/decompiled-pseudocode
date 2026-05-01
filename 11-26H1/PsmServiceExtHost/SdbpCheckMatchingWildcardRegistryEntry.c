/*
 * XREFs of SdbpCheckMatchingWildcardRegistryEntry @ 0x18009602C
 * Callers:
 *     SdbpCheckMatchingWildcardRegistry @ 0x180095F00 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     SdbpCheckMatchingRegistryValue @ 0x180095210 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegWildcardFindClose @ 0x1800A0414 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindFirst @ 0x1800A04BC (AslRegWildcardFindFirst.c)
 *     AslRegWildcardFindNext @ 0x1800A059C (AslRegWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardRegistryEntry(
        __int64 a1,
        wchar_t *a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  HANDLE KeyHandle; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF

  v14 = 0LL;
  KeyHandle = 0LL;
  *a9 = 0;
  if ( (int)AslRegWildcardFindFirst(&KeyHandle, &v14, a1) >= 0 )
  {
    while ( (!(unsigned int)SdbpCheckMatchingRegistryValue(KeyHandle, a2, a3, a4, a5, a6, Buf1, Size, a9) || !*a9)
         && (int)AslRegWildcardFindNext(&KeyHandle, v14) >= 0 )
      ;
  }
  AslRegWildcardFindClose(v14);
  return 1LL;
}
