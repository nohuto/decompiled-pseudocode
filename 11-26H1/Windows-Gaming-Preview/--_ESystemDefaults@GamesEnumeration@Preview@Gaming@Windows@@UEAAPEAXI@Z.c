/*
 * XREFs of ??_ESystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18003B760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003B6BC (--1SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 */

Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *__fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::~SystemDefaults(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
