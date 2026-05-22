/*
 * XREFs of ?OnHorizontalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x1801B059C
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1801B04E4 (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1801B0644 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnHorizontalDrag(EdgyProcessorTarget *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v7[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0LL;
  v2 = *((_QWORD *)this + 19);
  *(_OWORD *)v7 = 0LL;
  v7[0] = 24;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 88LL))(v2, 5LL, v7);
  v5 = v3;
  if ( v3 >= 0 )
  {
    LOBYTE(v4) = 1;
    *((_DWORD *)this + 8) = EdgyProcessorTarget::OnSwipe(this, v4, (unsigned int)v7[3]);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
