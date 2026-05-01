/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d01e05628e7c62b77a3bad017b515331___::Run @ 0x1801A99E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunSync__lambda_1ffeb2ec45e68daa8c54666c73698e49__&_ @ 0x1801A9A38 (CreationThreadDispatcher--RunSync__lambda_1ffeb2ec45e68daa8c54666c73698e49__-_.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d01e05628e7c62b77a3bad017b515331___::Run(
        _QWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CreationThreadDispatcher::RunSync__lambda_1ffeb2ec45e68daa8c54666c73698e49____(a1[2], a1[3]);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v2);
  else
    v3 = 0;
  result = (int *)a1[4];
  *result = v3;
  return result;
}
