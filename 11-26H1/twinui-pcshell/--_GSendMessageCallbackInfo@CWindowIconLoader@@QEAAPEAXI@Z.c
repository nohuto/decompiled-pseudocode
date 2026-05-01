/*
 * XREFs of ??_GSendMessageCallbackInfo@CWindowIconLoader@@QEAAPEAXI@Z @ 0x1800F3EBC
 * Callers:
 *     ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x1800F3DDC (-_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z.c)
 *     ?_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z @ 0x1800F3E90 (-_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CWindowIconLoader::SendMessageCallbackInfo *__fastcall CWindowIconLoader::SendMessageCallbackInfo::`scalar deleting destructor'(
        CWindowIconLoader::SendMessageCallbackInfo *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this);
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
