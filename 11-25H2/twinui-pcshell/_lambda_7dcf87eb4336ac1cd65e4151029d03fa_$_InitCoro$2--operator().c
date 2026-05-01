/*
 * XREFs of _lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_InitCoro$2::operator() @ 0x1806193E8
 * Callers:
 *     _lambda_7dcf87eb4336ac1cd65e4151029d03fa_::operator() @ 0x180619AA4 (_lambda_7dcf87eb4336ac1cd65e4151029d03fa_--operator().c)
 * Callees:
 *     _lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1::operator() @ 0x180619440 (_lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_ResumeCoro$1--operator().c)
 */

__int64 __fastcall lambda_7dcf87eb4336ac1cd65e4151029d03fa___InitCoro_2::operator()(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 241) = a4;
  *(_QWORD *)a2 = lambda_7dcf87eb4336ac1cd65e4151029d03fa___ResumeCoro_1::operator();
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[240] = 0;
  return lambda_7dcf87eb4336ac1cd65e4151029d03fa___ResumeCoro_1::operator()(a2);
}
