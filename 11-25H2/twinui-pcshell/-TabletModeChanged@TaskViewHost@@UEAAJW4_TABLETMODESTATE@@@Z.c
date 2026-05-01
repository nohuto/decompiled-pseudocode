/*
 * XREFs of ?TabletModeChanged@TaskViewHost@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180680A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TaskViewHost::TabletModeChanged(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 128) + 40LL))(a1 - 128);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
