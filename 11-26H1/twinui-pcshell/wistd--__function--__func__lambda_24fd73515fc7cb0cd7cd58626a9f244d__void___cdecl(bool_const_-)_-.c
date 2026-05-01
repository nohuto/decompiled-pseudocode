/*
 * XREFs of wistd::__function::__func__lambda_24fd73515fc7cb0cd7cd58626a9f244d__void___cdecl(bool_const_&)_::operator() @ 0x18046B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_24fd73515fc7cb0cd7cd58626a9f244d__void___cdecl_bool_const____::operator()(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(a2) = *a2;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 584LL);
  if ( !v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x139F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)retaddr);
  v3 = *(_QWORD *)(v2 + 128);
  v7 = 0;
  result = (*(__int64 (__fastcall **)(__int64, _BYTE *, int *, wil::details::in1diag3 *))(*(_QWORD *)v3 + 120LL))(
             v3,
             a2,
             &v7,
             retaddr);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC1E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)result,
      v5);
  return result;
}
