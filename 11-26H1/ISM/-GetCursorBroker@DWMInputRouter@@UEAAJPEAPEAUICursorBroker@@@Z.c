/*
 * XREFs of ?GetCursorBroker@DWMInputRouter@@UEAAJPEAPEAUICursorBroker@@@Z @ 0x18007C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMInputRouter::GetCursorBroker(DWMInputRouter *this, struct ICursorBroker **a2)
{
  struct ICursorBroker *v3; // rcx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = (struct ICursorBroker *)*((_QWORD *)this + 33);
    *a2 = v3;
    (*(void (__fastcall **)(struct ICursorBroker *))(*(_QWORD *)v3 + 8LL))(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x714,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL,
      v4);
    return 2147942487LL;
  }
}
