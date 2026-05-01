/*
 * XREFs of ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802242A0
 * Callers:
 *     _lambda_6bf0006fd05f45de9a9646c33bcd493f_::operator() @ 0x1803AED50 (_lambda_6bf0006fd05f45de9a9646c33bcd493f_--operator().c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A71A0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     _lambda_c455d037a1b864dd5cc5867b63d5951d_::operator() @ 0x1806BC870 (_lambda_c455d037a1b864dd5cc5867b63d5951d_--operator().c)
 * Callees:
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1802242C4 (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@win.c)
 */

__int64 __fastcall winrt::Windows::Foundation::IUnknown::as<IInspectable>(_QWORD *a1, __int64 a2)
{
  winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(a2, *a1);
  return a2;
}
