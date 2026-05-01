/*
 * XREFs of ?GetExtendedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x1801DB5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CSnappedWindow::GetExtendedFramePosition(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 128LL))(*(_QWORD *)(a1 + 32));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6A,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
      (const char *)(unsigned int)v3);
  return a2;
}
