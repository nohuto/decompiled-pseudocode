/*
 * XREFs of ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180232AD0
 * Callers:
 *     _lambda_78435879237a5598503e840a3e952968_::operator() @ 0x1803A594C (_lambda_78435879237a5598503e840a3e952968_--operator().c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180680158 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::operator() @ 0x180695158 (_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_--operator().c)
 * Callees:
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180232AF4 (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@win.c)
 */

__int64 __fastcall winrt::Windows::Foundation::IUnknown::as<IInspectable>(_QWORD *a1, __int64 a2)
{
  winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(a2, *a1);
  return a2;
}
