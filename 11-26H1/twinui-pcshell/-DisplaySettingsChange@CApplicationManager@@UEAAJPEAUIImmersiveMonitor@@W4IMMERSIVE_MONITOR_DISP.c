/*
 * XREFs of ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801F1CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___ @ 0x1802DB678 (CDelayIAMOperations--AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___.c)
 *     _lambda_e4f37fdae08429a84761ade0db4bdd38_::_lambda_e4f37fdae08429a84761ade0db4bdd38_ @ 0x1802DCED0 (_lambda_e4f37fdae08429a84761ade0db4bdd38_--_lambda_e4f37fdae08429a84761ade0db4bdd38_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  int v8; // edi
  __int64 v10; // r9
  _BYTE v11[56]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = a2;
  v6 = a1 - 208;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 184) & -(__int64)(a1 != 208));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  if ( *(_DWORD *)(v6 + 820) )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v12 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v12) >= 0 && !v12 )
      {
        lambda_e4f37fdae08429a84761ade0db4bdd38_::_lambda_e4f37fdae08429a84761ade0db4bdd38_(v11, v6, &v13, v10);
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___(*(_QWORD *)(a1 + 592), v11);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
    }
  }
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return 0LL;
}
