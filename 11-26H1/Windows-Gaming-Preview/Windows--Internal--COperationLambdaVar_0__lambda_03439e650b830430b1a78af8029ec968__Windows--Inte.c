/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_03439e650b830430b1a78af8029ec968__Windows::Internal::CNoResult_::Run @ 0x18002E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetTitleIdInternal@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180034F50 (-_SetTitleIdInternal@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJVHString@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_03439e650b830430b1a78af8029ec968__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // ebx
  __int64 v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  if ( a3 >= 0 )
    v3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && v3 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    WindowsDeleteString(0LL);
    v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 168LL);
    EnterCriticalSection(v6);
    *(_QWORD *)v9 = v5;
    v7 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_SetTitleIdInternal(*(_QWORD *)(a1 + 8), v9);
    v3 = v7;
    if ( v7 >= 0 )
    {
      if ( v6 )
        LeaveCriticalSection(v6);
      WindowsDeleteString(0LL);
      return 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x641,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v7);
      if ( v6 )
        LeaveCriticalSection(v6);
      WindowsDeleteString(0LL);
    }
  }
  return (unsigned int)v3;
}
