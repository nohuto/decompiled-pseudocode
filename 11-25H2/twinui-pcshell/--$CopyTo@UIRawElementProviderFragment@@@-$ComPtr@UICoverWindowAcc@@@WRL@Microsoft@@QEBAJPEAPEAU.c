/*
 * XREFs of ??$CopyTo@UIRawElementProviderFragment@@@?$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@QEBAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x180512B50
 * Callers:
 *     ?GetSibling@CoverWindowAcc@@UEAAJPEAUIRawElementProviderSimple@@W4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x180513080 (-GetSibling@CoverWindowAcc@@UEAAJPEAUIRawElementProviderSimple@@W4NavigateDirection@@PEAPEAUIRaw.c)
 *     ?Navigate@CoverWindowAcc@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x180513170 (-Navigate@CoverWindowAcc@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ICoverWindowAcc>::CopyTo<IRawElementProviderFragment>(_QWORD *a1, __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87, a2);
}
