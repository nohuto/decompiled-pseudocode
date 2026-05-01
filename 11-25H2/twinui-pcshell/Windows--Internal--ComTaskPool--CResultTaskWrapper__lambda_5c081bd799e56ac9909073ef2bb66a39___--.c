/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5c081bd799e56ac9909073ef2bb66a39___::Run @ 0x1802A24B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5c081bd799e56ac9909073ef2bb66a39___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 296LL) + 104LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 296LL),
         **(_QWORD **)(a1 + 24));
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x347,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v2);
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
