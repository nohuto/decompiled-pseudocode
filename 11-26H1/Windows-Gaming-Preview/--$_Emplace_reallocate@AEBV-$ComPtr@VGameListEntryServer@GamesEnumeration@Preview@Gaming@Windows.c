/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000C768
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F69C (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000FD58 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000C6F4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000D460 (--1_Reallocation_guard@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@W.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180011100 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180011148 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // r9
  _QWORD *v16; // r14
  _QWORD *v17; // rbp
  _QWORD *v18; // r8
  signed __int64 v19; // rcx
  bool v20; // zf
  signed __int64 v21; // rax
  signed __int32 v22; // eax
  _QWORD *v23; // r9
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  __int64 *v27; // rbx
  __int64 *v28; // rsi
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  const struct std::nothrow_t *v31; // rdx
  _QWORD *v33; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]
  _QWORD *v36; // [rsp+48h] [rbp-40h]
  _QWORD *v37; // [rsp+50h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *a1) >> 3;
  v6 = a2;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v11 = (v10 >> 1) + v10;
    v12 = v9;
    if ( v11 >= v9 )
      v12 = v11;
    if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
      __scrt_throw_std_bad_array_new_length();
    v3 = v12;
  }
  v13 = v3;
  v14 = std::_Allocate<16,std::_Default_allocate_traits>(8 * v3);
  v15 = *a3;
  v16 = v14;
  v33 = a1;
  v34 = v14;
  v35 = v3;
  v17 = &v14[v5];
  *v17 = v15;
  v18 = v17 + 1;
  v36 = v17 + 1;
  v37 = v17 + 1;
  if ( v15 )
  {
    v19 = *(_QWORD *)(v15 + 136);
    while ( v19 >= 0 )
    {
      if ( (_DWORD)v19 != 0x7FFFFFFF )
      {
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 136), v19 + 1, v19);
        v20 = v19 == v21;
        v19 = v21;
        if ( !v20 )
          continue;
      }
      goto LABEL_15;
    }
    do
      v22 = *(_DWORD *)(2 * v19 + 0x10);
    while ( v22 != 0x7FFFFFFF
         && v22 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v19 + 16), v22 + 1, v22) );
  }
LABEL_15:
  v23 = (_QWORD *)a1[1];
  v24 = v16;
  v25 = (_QWORD *)*a1;
  v36 = v17;
  if ( v6 == v23 )
  {
    while ( v25 != v23 )
    {
      *v24 = 0LL;
      if ( v24 != v25 )
      {
        *v24 = *v25;
        *v25 = 0LL;
      }
      ++v24;
      ++v25;
    }
  }
  else
  {
    while ( v25 != v6 )
    {
      *v24 = 0LL;
      if ( v24 != v25 )
      {
        *v24 = *v25;
        *v25 = 0LL;
      }
      ++v24;
      ++v25;
    }
    v26 = (_QWORD *)a1[1];
    v36 = v16;
    while ( v6 != v26 )
    {
      *v18 = 0LL;
      if ( v18 != v6 )
      {
        *v18 = *v6;
        *v6 = 0LL;
      }
      ++v18;
      ++v6;
    }
  }
  v27 = (__int64 *)*a1;
  v34 = 0LL;
  if ( v27 )
  {
    v28 = (__int64 *)a1[1];
    while ( v27 != v28 )
    {
      v29 = *v27;
      if ( *v27 )
      {
        *v27 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v29);
      }
      ++v27;
    }
    v30 = (_QWORD *)*a1;
    v31 = (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v31 >= 0x1000 )
    {
      v31 = (const struct std::nothrow_t *)((char *)v31 + 39);
      if ( (unsigned __int64)v30 - *(v30 - 1) - 8 > 0x1F )
        _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
      v30 = (_QWORD *)*(v30 - 1);
    }
    operator delete(v30, v31);
  }
  *a1 = v16;
  a1[1] = &v16[v9];
  a1[2] = &v16[v13];
  std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Reallocation_guard::~_Reallocation_guard(
    &v33,
    v24);
  return v17;
}
