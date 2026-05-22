/*
 * XREFs of ?GetForegroundTarget@DWMInputRouter@@UEAAJPEAPEAUIFocusInputTarget@@@Z @ 0x1801A3240
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMInputRouter::GetForegroundTarget(
        DWMInputRouter *this,
        struct IFocusInputTarget **a2,
        __int64 a3,
        const char *a4)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IFocusInputTarget **); // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x784,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      a4);
  *a2 = 0LL;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IFocusInputTarget **))*((_QWORD *)this + 32);
  if ( v5 )
  {
    v6 = (**v5)(v5, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x789,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v6,
        v8);
  }
  return *a2 == 0LL ? 0x80004005 : 0;
}
