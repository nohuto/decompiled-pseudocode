/*
 * XREFs of ?MoveVirtualCursor@CAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x18049C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAltTabViewHost::MoveVirtualCursor(CAltTabViewHost *this, struct tagPOINT *a2)
{
  __int64 *v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, LONG *); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LONG x; // [rsp+30h] [rbp+8h] BYREF
  LONG y; // [rsp+34h] [rbp+Ch]

  v2 = (__int64 *)*((_QWORD *)this + 20);
  if ( !v2 )
  {
    v3 = -2147023728;
    v4 = 289LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)v3);
    return v3;
  }
  v5 = *v2;
  x = a2->x;
  v6 = *(__int64 (__fastcall **)(__int64 *, LONG *))(v5 + 128);
  y = a2->y;
  v3 = v6(v2, &x);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 290LL;
    goto LABEL_5;
  }
  return v3;
}
