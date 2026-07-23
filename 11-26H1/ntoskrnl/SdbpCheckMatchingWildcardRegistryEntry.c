/*
 * XREFs of SdbpCheckMatchingWildcardRegistryEntry @ 0x140889FBC
 * Callers:
 *     SdbpCheckMatchingWildcardRegistry @ 0x140889E90 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     SdbpCheckMatchingRegistryValue @ 0x1408893C0 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegWildcardFindClose @ 0x140890A50 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindFirst @ 0x140890AC8 (AslRegWildcardFindFirst.c)
 *     AslRegWildcardFindNext @ 0x140890B90 (AslRegWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardRegistryEntry(
        __int64 a1,
        __int64 (*a2)(void),
        int a3,
        __int64 (*a4)(void),
        int a5,
        __int64 a6,
        __int64 (*a7)(void),
        size_t a8,
        _DWORD *a9)
{
  void *v13; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  *a9 = 0;
  if ( (int)AslRegWildcardFindFirst(&v13, &v14, a1) >= 0 )
  {
    while ( (!(unsigned int)SdbpCheckMatchingRegistryValue(v13, a2, a3, a4, a5, a6, a7, a8, a9) || !*a9)
         && (int)AslRegWildcardFindNext(&v13, v14) >= 0 )
      ;
  }
  AslRegWildcardFindClose(v14);
  return 1LL;
}
