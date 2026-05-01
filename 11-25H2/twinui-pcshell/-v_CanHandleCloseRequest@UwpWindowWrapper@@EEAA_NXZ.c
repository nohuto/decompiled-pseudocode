/*
 * XREFs of ?v_CanHandleCloseRequest@UwpWindowWrapper@@EEAA_NXZ @ 0x1801DF310
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_08e19f15ae792a297a06aee8f3a7a64f___ @ 0x1801DF3A8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_08e19f15ae792a297a06aee8f3a7a64f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall UwpWindowWrapper::v_CanHandleCloseRequest(UwpWindowWrapper *this)
{
  char v2; // di
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 232LL))(*((_QWORD *)this + 35));
  v2 = 0;
  v10 = 0;
  *(_QWORD *)v7 = (char *)this - 8;
  v8 = &v10;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_08e19f15ae792a297a06aee8f3a7a64f___(
         v4,
         CurrentThreadId,
         v7);
  if ( v5 >= 0 )
    return v10 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x7C,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
    (const char *)(unsigned int)v5);
  return v2;
}
