/*
 * XREFs of _lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator() @ 0x180026A04
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c__Windows::Internal::CNoResult_::Run @ 0x18002E860 (Windows--Internal--COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c___ea_18002E860.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x1800374F0 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator()(_QWORD *a1, HSTRING a2)
{
  HSTRING v3; // rsi
  HSTRING v4; // rbp
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING v12; // [rsp+40h] [rbp+8h] BYREF
  HSTRING v13; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h]

  v13 = a2;
  v3 = (HSTRING)a1[2];
  WindowsDeleteString(0LL);
  v12 = v3;
  v4 = (HSTRING)a1[3];
  WindowsDeleteString(0LL);
  v13 = v4;
  v5 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 168LL);
  EnterCriticalSection(v5);
  v14 = v5;
  v6 = *(Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)(*a1 + 272LL);
  if ( !v6 || !*(_QWORD *)(*a1 + 280LL) )
  {
    v8 = -2147024891;
    v9 = 2147942405LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x603,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v9);
    if ( v5 )
      LeaveCriticalSection(v5);
    goto LABEL_11;
  }
  v7 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
         v6,
         (const struct Microsoft::WRL::Wrappers::HString *)&v12,
         (const struct Microsoft::WRL::Wrappers::HString *)&v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    goto LABEL_9;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  v8 = 0;
LABEL_11:
  WindowsDeleteString(v4);
  WindowsDeleteString(v3);
  return v8;
}
