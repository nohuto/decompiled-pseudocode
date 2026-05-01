/*
 * XREFs of ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x18020336C
 * Callers:
 *     CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x180295B70 (CDelayIAMOperations--AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___.c)
 *     CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___ @ 0x1802E226C (CDelayIAMOperations--AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___.c)
 *     CDelayIAMOperations::AddOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___ @ 0x1802E23E0 (CDelayIAMOperations--AddOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___.c)
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x1802E2580 (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     CDelayIAMOperations::AddOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___ @ 0x1802E26F4 (CDelayIAMOperations--AddOperation__lambda_b685170db6cf3b2ad8ed143403a26c19___.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread(
        CDelayIAMOperations *this,
        enum DELAY_OPERATION_TYPE *a2)
{
  if ( *(_DWORD *)a2 == 4 )
    *(_DWORD *)a2 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 80LL))(*((_QWORD *)this + 1)) != 0
                  ? 1
                  : 3;
}
