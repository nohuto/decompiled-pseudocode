/*
 * XREFs of ?SetFocusState@UwpWindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1801D6620
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x180230458 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8032610bc69c7d33d4f231d1bb122a3b___ @ 0x180437800 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8032610bc69c7d33d4f231d1bb122a3b.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::SetFocusState(__int64 a1, int a2)
{
  __int64 v3; // rax
  int v4; // eax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 224LL))(*(_QWORD *)(a1 + 264));
  v3 = std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
         v5,
         &v7,
         a1 - 16);
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8032610bc69c7d33d4f231d1bb122a3b___(v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x834,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v4);
}
