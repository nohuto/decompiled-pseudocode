/*
 * XREFs of ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800275B0
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F69C (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800220CC (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180026264 (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180030178 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180034C38 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     memcmp_0 @ 0x180043364 (memcmp_0.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfig(
        __int64 a1,
        const void *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v11; // rbp
  bool v12; // si
  int v13; // eax
  unsigned int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !memcmp_0(a2, &xmmword_18004EA70, 0x10uLL) )
  {
    v7 = -2147024809;
    v8 = 865LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !*a3 )
  {
    v7 = -2147467261;
    v8 = 866LL;
    goto LABEL_3;
  }
  if ( !*a4 )
  {
    v7 = -2147467261;
    v8 = 867LL;
    goto LABEL_3;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v11 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24);
  if ( !*(_QWORD *)(a1 - 24 + 280) )
    std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((_QWORD *)(a1 + 256), a4);
  v12 = *(_QWORD *)(a1 + 248) && *(_QWORD *)(a1 + 256);
  v13 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig((Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24));
  v14 = v13;
  if ( v13 >= 0 )
  {
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(v11, v12);
    if ( v10 )
      LeaveCriticalSection(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x374,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v13);
    if ( v10 )
      LeaveCriticalSection(v10);
    return v14;
  }
}
