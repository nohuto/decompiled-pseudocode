/*
 * XREFs of ??1_Reallocation_guard@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000D460
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000C768 (--$_Emplace_reallocate@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Reallocation_guard::~_Reallocation_guard(
        _QWORD *a1)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  const struct std::nothrow_t *v6; // rdx

  if ( a1[1] )
  {
    v2 = (__int64 *)a1[4];
    for ( i = (__int64 *)a1[3]; i != v2; ++i )
    {
      v4 = *i;
      if ( *i )
      {
        *i = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v4);
      }
    }
    v5 = (_QWORD *)a1[1];
    v6 = (const struct std::nothrow_t *)(8LL * a1[2]);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      if ( (unsigned __int64)v5 - *(v5 - 1) - 8 > 0x1F )
        _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
      v5 = (_QWORD *)*(v5 - 1);
    }
    operator delete(v5, v6);
  }
}
