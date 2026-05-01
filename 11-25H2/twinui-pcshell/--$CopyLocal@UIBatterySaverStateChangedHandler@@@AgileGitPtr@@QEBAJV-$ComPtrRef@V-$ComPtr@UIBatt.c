/*
 * XREFs of ??$CopyLocal@UIBatterySaverStateChangedHandler@@@AgileGitPtr@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBatterySaverStateChangedHandler@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802C91E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::Run @ 0x1802E1E10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall AgileGitPtr::CopyLocal<IBatterySaverStateChangedHandler>(AgileGitPtr *this, void **a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
  return AgileGitPtr::CopyLocal(this, &GUID_18661d31_3944_41b1_bd96_da3defc2c268, a2);
}
