/*
 * XREFs of wistd::__function::__func__lambda_a1bf07eabb51e841d7b59a4e813e5668__void___cdecl(void)_::operator() @ 0x18063F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator() @ 0x18063F280 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__function::__func__lambda_a1bf07eabb51e841d7b59a4e813e5668__void___cdecl_void__::operator()(
        __int64 a1)
{
  void (__fastcall **v2)(char *); // [rsp+40h] [rbp+8h]

  v2 = (void (__fastcall **)(char *))operator new(0xC0uLL);
  v2[23] = (void (__fastcall *)(char *))(a1 + 8);
  *v2 = lambda_a1bf07eabb51e841d7b59a4e813e5668___ResumeCoro_1::operator();
  *((_DWORD *)v2 + 2) = 65538;
  *((_BYTE *)v2 + 176) = 0;
  lambda_a1bf07eabb51e841d7b59a4e813e5668___ResumeCoro_1::operator()((char *)v2);
}
