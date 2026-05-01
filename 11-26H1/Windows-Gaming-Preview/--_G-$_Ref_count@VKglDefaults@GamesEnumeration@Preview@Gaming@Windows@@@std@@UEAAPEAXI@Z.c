/*
 * XREFs of ??_G?$_Ref_count@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@UEAAPEAXI@Z @ 0x18003A980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
