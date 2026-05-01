/*
 * XREFs of ?ExecuteTag@CAppTransitionTargetManager@@UEAAJXZ @ 0x1804E4C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionTargetManager::ExecuteTag(CAppTransitionTargetManager *this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  if ( *((_BYTE *)this + 104) )
  {
    v4 = *((_QWORD *)this + 6);
    if ( v4 )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v1);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
        ++v1;
      }
      while ( v1 < v4 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
}
