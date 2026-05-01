/*
 * XREFs of ??$As@UIMultitaskingViewElementRoot@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElementRoot@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B8C58
 * Callers:
 *     ?Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z @ 0x1804BAFA0 (-Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z.c)
 *     ?NavigateToItem@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@PEAUIUnknown@@@Z @ 0x1804BB1F0 (-NavigateToItem@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewElementRoot>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_71010444_c43d_42d5_9471_ce086b656008, a2);
}
