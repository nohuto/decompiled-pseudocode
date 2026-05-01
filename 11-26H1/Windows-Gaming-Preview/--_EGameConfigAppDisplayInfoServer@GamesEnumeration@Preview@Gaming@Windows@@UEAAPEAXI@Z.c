/*
 * XREFs of ??_EGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800272A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180025C48 (--1GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::~GameConfigAppDisplayInfoServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
