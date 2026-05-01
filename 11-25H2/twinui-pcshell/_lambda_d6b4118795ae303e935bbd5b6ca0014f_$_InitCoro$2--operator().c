/*
 * XREFs of _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_InitCoro$2::operator() @ 0x1805DC408
 * Callers:
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_::operator() @ 0x1805DC570 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_--operator().c)
 * Callees:
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x1805DC470 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1--operator().c)
 */

__int64 __fastcall lambda_d6b4118795ae303e935bbd5b6ca0014f___InitCoro_2::operator()(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  *(_QWORD *)(a2 + 49) = a6;
  *(_QWORD *)(a2 + 57) = a4;
  *(_QWORD *)(a2 + 65) = a5;
  *(_QWORD *)a2 = lambda_d6b4118795ae303e935bbd5b6ca0014f___ResumeCoro_1::operator();
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 48) = 0;
  return lambda_d6b4118795ae303e935bbd5b6ca0014f___ResumeCoro_1::operator()(a2);
}
