/*
 * XREFs of ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x180231B6C
 * Callers:
 *     _lambda_4963465e0f00482d68929271c70599ba_::operator() @ 0x18030805C (_lambda_4963465e0f00482d68929271c70599ba_--operator().c)
 *     _lambda_90c64e6b4e677faa5e1350e6dea894c9_::operator() @ 0x1803082E4 (_lambda_90c64e6b4e677faa5e1350e6dea894c9_--operator().c)
 *     ?TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180308FF0 (-TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, a2);
}
