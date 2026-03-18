/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140C4FB88
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140C4FC94 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140D148A4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x140C51F4C (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
