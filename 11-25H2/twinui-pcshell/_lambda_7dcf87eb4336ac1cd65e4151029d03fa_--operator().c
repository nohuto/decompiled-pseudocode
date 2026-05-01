/*
 * XREFs of _lambda_7dcf87eb4336ac1cd65e4151029d03fa_::operator() @ 0x180619AA4
 * Callers:
 *     wistd::__function::__func__lambda_7dcf87eb4336ac1cd65e4151029d03fa__void___cdecl(void)_::operator() @ 0x180619B50 (wistd--__function--__func__lambda_7dcf87eb4336ac1cd65e4151029d03fa__void___cdecl(void)_--operato.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     _lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_InitCoro$2::operator() @ 0x1806193E8 (_lambda_7dcf87eb4336ac1cd65e4151029d03fa_$_InitCoro$2--operator().c)
 */

_BYTE *__fastcall lambda_7dcf87eb4336ac1cd65e4151029d03fa_::operator()(__int64 a1, _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+138h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x100uLL);
  v6 = 0;
  lambda_7dcf87eb4336ac1cd65e4151029d03fa___InitCoro_2::operator()(&v6, v4, a2, a1);
  return a2;
}
