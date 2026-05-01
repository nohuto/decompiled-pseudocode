/*
 * XREFs of ??$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802C3380
 * Callers:
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x180207234 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027BC38 (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x1805EFE88 (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 * Callees:
 *     ??$as@UIUnknown@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180188D8C (--$as@UIUnknown@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<IUnknown>(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  winrt::impl::as<IUnknown,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(a2, *a1);
  return a2;
}
