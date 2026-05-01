/*
 * XREFs of ?ShowWithStart@SearchAppExperienceManager@@UEAAJE@Z @ 0x18039B750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::ShowWithStart(SearchAppExperienceManager *this, char a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 53) + 72LL))(
         *((_QWORD *)this + 53),
         *((_QWORD *)this + 64),
         1LL);
  if ( v5 < 0 )
  {
    v6 = 443LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  LOBYTE(v4) = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 54) + 88LL))(*((_QWORD *)this + 54), v4);
  if ( v5 < 0 )
  {
    v6 = 444LL;
    goto LABEL_3;
  }
  return 0LL;
}
