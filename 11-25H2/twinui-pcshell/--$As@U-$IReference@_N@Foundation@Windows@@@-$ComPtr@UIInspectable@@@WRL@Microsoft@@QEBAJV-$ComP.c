/*
 * XREFs of ??$As@U?$IReference@_N@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IReference@_N@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801BE5C0
 * Callers:
 *     _lambda_d7884d2305cb98080a7771b114819b2a_::operator() @ 0x18042E954 (_lambda_d7884d2305cb98080a7771b114819b2a_--operator().c)
 *     _lambda_993f706d182f480392a468d901dd08e8_::operator() @ 0x180439968 (_lambda_993f706d182f480392a468d901dd08e8_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IReference<bool>>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_3c00fd60_2950_5939_a21a_2d12c5a01b8a, a2);
}
