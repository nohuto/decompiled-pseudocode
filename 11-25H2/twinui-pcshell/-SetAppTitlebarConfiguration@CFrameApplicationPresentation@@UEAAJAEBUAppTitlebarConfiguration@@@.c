/*
 * XREFs of ?SetAppTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJAEBUAppTitlebarConfiguration@@@Z @ 0x180309D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetAppTitlebarConfiguration(
        CFrameApplicationPresentation *this,
        const struct AppTitlebarConfiguration *a2)
{
  int v2; // eax
  const char *v4; // r9
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h]

  *((_WORD *)this + 296) = *(_WORD *)a2;
  if ( *((_QWORD *)this + 73) )
  {
    v2 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 168LL))(this);
    if ( v2 < 0 )
    {
      try
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x5EC,
          (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v2,
          v6);
      }
      catch ( ... )
      {
        *(_DWORD *)(v5 + 48) = wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x5F0,
                                 (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                                 v4);
        return v8;
      }
    }
  }
  return 0LL;
}
