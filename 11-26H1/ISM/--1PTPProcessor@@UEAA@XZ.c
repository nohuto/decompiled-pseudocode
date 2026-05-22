/*
 * XREFs of ??1PTPProcessor@@UEAA@XZ @ 0x1801CA1C0
 * Callers:
 *     ??_GPTPProcessor@@UEAAPEAXI@Z @ 0x1801CA1F0 (--_GPTPProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall PTPProcessor::~PTPProcessor(PTPProcessor *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>((__int64)this);
}
