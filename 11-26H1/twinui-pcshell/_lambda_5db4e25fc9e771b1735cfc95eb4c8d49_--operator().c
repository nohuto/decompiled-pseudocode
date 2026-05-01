/*
 * XREFs of _lambda_5db4e25fc9e771b1735cfc95eb4c8d49_::operator() @ 0x1805E4048
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5db4e25fc9e771b1735cfc95eb4c8d49___::Run @ 0x1805E8E50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5db4e25fc9e771b1735cfc95eb4c8d49___--Run.c)
 * Callees:
 *     ??R_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEBA@XZ @ 0x1805E3F9C (--R_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEBA@XZ.c)
 */

void __fastcall lambda_5db4e25fc9e771b1735cfc95eb4c8d49_::operator()(void **a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)(a1 + 1);
  try
  {
    _lambda_5724e9f0897f2fd11b6a24af4b09628e_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
