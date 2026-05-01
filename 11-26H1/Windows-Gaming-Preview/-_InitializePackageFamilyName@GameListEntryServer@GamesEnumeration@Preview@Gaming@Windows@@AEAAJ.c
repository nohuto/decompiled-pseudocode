/*
 * XREFs of ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032410
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E894 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002EA48 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800109DC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x1800149FC (-GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180036EC8 (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r14
  __int64 (__fastcall *v6)(__int64, char *); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v11; // rcx
  const struct ExecutionModel::GameConfig *GameConfig; // rdi
  HSTRING v13; // rcx
  int PackageFamilyName; // eax
  struct _GUID v15; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v18 = v2;
  v3 = *((_QWORD *)this + 32);
  if ( !v3 || !*((_QWORD *)this + 30) )
  {
    v11 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)*((_QWORD *)this + 34);
    if ( v11 && *((_QWORD *)this + 35) )
    {
      v15 = *(struct _GUID *)&xmmword_18004EA70;
      GameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(v11, &v15);
      v13 = (HSTRING)*((_QWORD *)this + 20);
      if ( *((_DWORD *)GameConfig + 5) == 2 )
      {
        WindowsDeleteString(v13);
        *((_QWORD *)this + 20) = 0LL;
        PackageFamilyName = GetPackageFamilyName(GameConfig, (HSTRING *)this + 20);
        v8 = PackageFamilyName;
        if ( PackageFamilyName < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1BE,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)PackageFamilyName);
          goto LABEL_13;
        }
      }
      else
      {
        WindowsDeleteString(v13);
        *((_QWORD *)this + 20) = 0LL;
      }
    }
LABEL_22:
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, &v17);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B1,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_5;
  }
  v5 = v17;
  if ( !v17 )
  {
LABEL_6:
    if ( v5 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    goto LABEL_22;
  }
  v6 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 48LL);
  WindowsDeleteString(*((HSTRING *)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  v7 = v6(v5, (char *)this + 160);
  v8 = v7;
  if ( v7 >= 0 )
  {
LABEL_5:
    v5 = v17;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B3,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v7);
  v9 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_13:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v8;
}
