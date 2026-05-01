/*
 * XREFs of ??_GGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180039B60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180039730 (--1GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::~GameModeUserConfigurationFactoryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
