/*
 * XREFs of ??1PRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@QEAA@XZ @ 0x1802F50B8
 * Callers:
 *     ?Release@?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ @ 0x1802F82F0 (-Release@-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER::~PRESENTED_WINDOW_CALLBACK_TRIGGER(
        CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
