/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f00520507454a36d8de4c18dfc66140a___::Run @ 0x1801A9CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086__&_ @ 0x1801A9D38 (CreationThreadDispatcher--RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086__-_.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f00520507454a36d8de4c18dfc66140a___::Run(
        _QWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CreationThreadDispatcher::RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086____(a1[2], a1[3]);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v2);
  result = (int *)a1[4];
  *result = v3;
  return result;
}
