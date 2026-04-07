/*
 * XREFs of ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180069C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::RenderRecursive(CVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 8) & 0xFFFFFFFE) == 0 )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 32LL))(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v2,
    v4);
  return v3;
}
