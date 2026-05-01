/*
 * XREFs of ?GetSnapAssistTabEnablement@CMultitaskingViewManager@@UEAAJPEAH0@Z @ 0x1804A0A30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewManager::GetSnapAssistTabEnablement(
        CMultitaskingViewManager *this,
        int *a2,
        int *a3)
{
  __int64 v5; // rcx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 22);
  if ( !v5 )
    return 2147943568LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v5 + 32LL))(v5, 6LL, a2);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F1,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 22) + 32LL))(
         *((_QWORD *)this + 22),
         7LL,
         a3);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
