/*
 * XREFs of _lambda_93656037d821f0cf4f10769c2d148d9f_::_lambda_93656037d821f0cf4f10769c2d148d9f_ @ 0x18055BF9C
 * Callers:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_____lambda_74c676e1075650fb24d91a9b16da121f___ @ 0x18055B8A8 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f_.c)
 *     CreationThreadDispatcher::RunSync__lambda_93656037d821f0cf4f10769c2d148d9f___ @ 0x18055BB60 (CreationThreadDispatcher--RunSync__lambda_93656037d821f0cf4f10769c2d148d9f___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_93656037d821f0cf4f10769c2d148d9f_::_lambda_93656037d821f0cf4f10769c2d148d9f_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = *a2;
  v3 = a2 + 9;
  *a2 = 0LL;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(a1 + 32) = *((_OWORD *)a2 + 2);
  v4 = a2[6];
  a2[6] = 0LL;
  *(_QWORD *)(a1 + 48) = v4;
  v5 = a2[7];
  a2[7] = 0LL;
  *(_QWORD *)(a1 + 56) = v5;
  v6 = a2[8];
  a2[8] = 0LL;
  *(_QWORD *)(a1 + 64) = v6;
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( (__int64 *)(a1 + 72) != a2 + 9 )
  {
    *(_QWORD *)(a1 + 72) = *v3;
    *v3 = 0LL;
  }
  *(_DWORD *)(a1 + 80) = *((_DWORD *)a2 + 20);
  v7 = a2[11];
  a2[11] = 0LL;
  *(_QWORD *)(a1 + 88) = v7;
  return a1;
}
