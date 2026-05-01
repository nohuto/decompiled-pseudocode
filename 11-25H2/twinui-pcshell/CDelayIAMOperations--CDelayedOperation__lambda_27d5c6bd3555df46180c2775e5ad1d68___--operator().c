/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x1801FF000
 * Callers:
 *     <none>
 * Callees:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003D6F0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 */

HWND __fastcall CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator()(
        __int64 a1)
{
  __int64 v1; // rdi
  HWND result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = GetForegroundWindow();
  if ( result == (HWND)v1 )
    return (HWND)CApplicationManager::OnShellHookMessage(
                   (CApplicationManager *)(*(_QWORD *)(a1 + 16) + 160LL),
                   0x13uLL,
                   v1);
  return result;
}
