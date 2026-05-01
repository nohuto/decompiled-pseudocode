/*
 * XREFs of ?IsSearchButtonMode@SearchBoxOnTaskbarSearchAppPositioner@@UEAA_NAEBUtagRECT@@@Z @ 0x1803CF790
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall SearchBoxOnTaskbarSearchAppPositioner::IsSearchButtonMode(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        const struct tagRECT *a2)
{
  const char *v2; // r9
  bool result; // al
  _BYTE v4[80]; // [rsp+20h] [rbp-78h] BYREF
  int v5; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *, const struct tagRECT *))(**((_QWORD **)this + 1) + 8LL))(
      *((_QWORD *)this + 1),
      v4,
      a2);
    result = ((v5 - 1) & 0xFFFFFFFD) == 0;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x32D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchboxontaskbarsearchapppositioner.cpp",
      v2);
    return 1;
  }
  return result;
}
