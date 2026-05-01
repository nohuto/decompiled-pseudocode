/*
 * XREFs of ??_EGameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001BA50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180019560 (--1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::~GameListFactoryServerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
