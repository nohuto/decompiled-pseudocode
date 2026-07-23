/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140C55B88
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140C55C94 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140D1AA6C (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x140C57F4C (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
