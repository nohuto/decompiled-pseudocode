/*
 * XREFs of ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035A60
 * Callers:
 *     _lambda_75b78523e3da460933f50e5d76bfa16b_::operator() @ 0x1800263F8 (_lambda_75b78523e3da460933f50e5d76bfa16b_--operator().c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180030178 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014B68 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180036E10 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm6
  __int64 v8; // rcx
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v10; // edi
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v6 = *((_QWORD *)this + 32);
  if ( v6 && *((_QWORD *)this + 33) )
  {
    LOBYTE(v5) = 1;
    v7 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(v6, v5);
    WindowsDeleteString(0LL);
    v8 = *((_QWORD *)this + 33);
    string = 0LL;
    *(_OWORD *)v12 = v7;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(v8, (__int128 *)v12, 26LL, &string);
    v10 = StringPropertyFromGameConfigStore;
    if ( StringPropertyFromGameConfigStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5AD,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)StringPropertyFromGameConfigStore);
      WindowsDeleteString(string);
      string = 0LL;
      if ( v2 )
        LeaveCriticalSection(v2);
      return v10;
    }
    *a2 = string;
    string = 0LL;
    WindowsDeleteString(0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
