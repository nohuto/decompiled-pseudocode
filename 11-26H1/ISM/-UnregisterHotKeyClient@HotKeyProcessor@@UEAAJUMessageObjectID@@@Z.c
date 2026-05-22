/*
 * XREFs of ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801D1C80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801A3104 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801D02BC (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801D14C0 (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 */

__int64 __fastcall HotKeyProcessor::UnregisterHotKeyClient(HotKeyProcessor *a1, const struct MessageObjectID *a2)
{
  int RegisteredClient; // eax
  unsigned int v5; // ebx
  ULONG_PTR v6; // r8
  int v7; // eax
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]
  struct HotkeyClientRegistration *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  RegisteredClient = HotKeyProcessor::FindRegisteredClient(a1, a2, &v10);
  v5 = RegisteredClient;
  if ( RegisteredClient < 0 )
  {
    if ( RegisteredClient == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v6 = 184LL;
LABEL_9:
    FailFastWithHR(v5, retaddr, v6);
    goto LABEL_10;
  }
  v7 = HotKeyProcessor::RemoveClientRegistration(a1, v10);
  v5 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v6 = 185LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  return v5;
}
