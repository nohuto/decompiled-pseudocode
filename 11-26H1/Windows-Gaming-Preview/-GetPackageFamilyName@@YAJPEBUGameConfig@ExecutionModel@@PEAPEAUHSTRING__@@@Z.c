/*
 * XREFs of ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x1800149FC
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F69C (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180030178 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032410 (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetPackageFamilyName(const struct ExecutionModel::GameConfig *a1, HSTRING *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  const WCHAR *v6; // rdi
  __int64 v7; // rax
  wchar_t *v8; // rax
  unsigned __int64 v9; // rbx
  HRESULT v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v3 = -2147467261;
    v4 = 255LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v3);
    return v3;
  }
  *a2 = 0LL;
  if ( !a1 )
  {
    v3 = -2147467261;
    v4 = 259LL;
    goto LABEL_24;
  }
  if ( *((_DWORD *)a1 + 5) != 2 )
    return 0LL;
  v6 = (const WCHAR *)*((_QWORD *)a1 + 3);
  if ( !v6 )
    goto LABEL_22;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  if ( !v7 )
  {
LABEL_22:
    v4 = 263LL;
    goto LABEL_23;
  }
  v8 = wcsrchr(*((const wchar_t **)a1 + 3), 0x21u);
  if ( !v8 )
  {
    v4 = 267LL;
LABEL_23:
    v3 = -2147418113;
    goto LABEL_24;
  }
  v9 = v8 - v6;
  if ( v9 >= 0x40 )
  {
    v4 = 270LL;
    goto LABEL_23;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  v10 = WindowsCreateString(v6, v9, &string);
  v3 = v10;
  if ( v10 >= 0 )
  {
    v10 = WindowsDuplicateString(string, a2);
    v3 = v10;
    if ( v10 >= 0 )
    {
      v3 = 0;
      goto LABEL_21;
    }
    v11 = 275LL;
  }
  else
  {
    v11 = 274LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)v10);
LABEL_21:
  WindowsDeleteString(string);
  return v3;
}
