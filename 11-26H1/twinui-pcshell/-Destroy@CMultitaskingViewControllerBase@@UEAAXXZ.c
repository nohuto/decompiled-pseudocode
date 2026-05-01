/*
 * XREFs of ?Destroy@CMultitaskingViewControllerBase@@UEAAXXZ @ 0x1804C45C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewControllerBase::Destroy(CMultitaskingViewControllerBase *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
}
