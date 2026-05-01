/*
 * XREFs of ?AddRef@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x18001BD50
 * Callers:
 *     ?AddRef@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x18001BDB0 (-AddRef@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18001BDC0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@G.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::AddRef(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *this)
{
  signed __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  bool v4; // zf
  signed __int64 v5; // rax
  signed __int32 v6; // r9d

  v1 = *((_QWORD *)this + 4);
  v2 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v2;
    v3 = v1 + 1;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, v1 + 1, v1);
    v4 = v1 == v5;
    v1 = v5;
    if ( v4 )
      return v3;
  }
  while ( 1 )
  {
    v6 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v6 == 0x7FFFFFFF )
      break;
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v6 + 1, v6) )
      return (unsigned int)(v6 + 1);
  }
  return v2;
}
