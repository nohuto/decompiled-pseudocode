/*
 * XREFs of ?SetAppChromePolicy@CFrameApplicationPresentation@@UEAAJW4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x18023A730
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetAppChromePolicy(__int64 a1, int a2, __int64 a3, const char *a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    v5 = *(_DWORD *)(a1 + 596);
    *(_DWORD *)(a1 + 596) = a2;
    if ( v5 != a2 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, *(_QWORD *)(a1 + 568));
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4EA,
          (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v6,
          v9);
      if ( *(_QWORD *)(a1 + 584) )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
        if ( v7 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x4EE,
            (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v7,
            v9);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4F3,
                           (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                           a4);
  }
  return result;
}
