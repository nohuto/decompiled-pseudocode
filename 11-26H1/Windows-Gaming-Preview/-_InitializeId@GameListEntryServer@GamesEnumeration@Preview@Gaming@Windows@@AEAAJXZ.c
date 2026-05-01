/*
 * XREFs of ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031DE8
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E894 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002EA48 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180034C38 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180036E10 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeId(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  LPOLESTR v6; // rcx
  LPOLESTR v7; // rbx
  __int64 (__fastcall *v8)(LPOLESTR, char *); // rdi
  int v9; // eax
  LPOLESTR v10; // rcx
  LPOLESTR v11; // rcx
  __int64 v12; // rcx
  HSTRING *v13; // rsi
  LPOLESTR v14; // rdi
  unsigned __int64 v15; // rbx
  UINT32 v16; // edx
  const WCHAR *v17; // rcx
  LPOLESTR lpsz; // [rsp+20h] [rbp-20h] BYREF
  IID rclsid; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    lpsz = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, LPOLESTR *))(*(_QWORD *)v3 + 48LL))(v3, &lpsz);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D0,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v4);
      v6 = lpsz;
      if ( lpsz )
      {
        lpsz = 0LL;
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return v5;
    }
    v7 = lpsz;
    v8 = *(__int64 (__fastcall **)(LPOLESTR, char *))(*(_QWORD *)lpsz + 56LL);
    WindowsDeleteString(*((HSTRING *)this + 30));
    *((_QWORD *)this + 30) = 0LL;
    v9 = v8(v7, (char *)this + 240);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D2,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v9);
      v10 = lpsz;
      if ( lpsz )
      {
        lpsz = 0LL;
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return v5;
    }
    WindowsDeleteString(*((HSTRING *)this + 29));
    *((_QWORD *)this + 29) = 0LL;
    WindowsDuplicateString(*((HSTRING *)this + 30), (HSTRING *)this + 29);
    v11 = lpsz;
    if ( lpsz )
    {
      lpsz = 0LL;
      (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  v12 = *((_QWORD *)this + 34);
  if ( v12 && *((_QWORD *)this + 35) )
  {
    LOBYTE(a2) = 1;
    rclsid = *(IID *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                       v12,
                       a2);
    lpsz = 0LL;
    StringFromCLSID(&rclsid, &lpsz);
    v13 = (HSTRING *)((char *)this + 232);
    v14 = lpsz;
    if ( lpsz )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( lpsz[v15] );
      if ( v15 > 0xFFFFFFFF )
        goto LABEL_22;
      WindowsDeleteString(*v13);
      v16 = v15;
      v17 = v14;
    }
    else
    {
      WindowsDeleteString(*v13);
      v16 = 0;
      v17 = &String1;
    }
    *v13 = 0LL;
    WindowsCreateString(v17, v16, v13);
LABEL_22:
    CoTaskMemFree(lpsz);
    return 0LL;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D8,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}
