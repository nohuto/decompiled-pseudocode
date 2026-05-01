/*
 * XREFs of wistd::__function::__func__lambda_650cbaca47f3f36a43900b999564d652__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::operator() @ 0x18045F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801E8AC4 (-OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Hologr.c)
 */

void __fastcall wistd::__function::__func__lambda_650cbaca47f3f36a43900b999564d652__void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____::operator()(
        __int64 a1,
        const enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TouchKeyboardExperienceManager::OnHolographicDisplayChanged(*(TouchKeyboardExperienceManager **)(a1 + 8), a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1512,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
}
