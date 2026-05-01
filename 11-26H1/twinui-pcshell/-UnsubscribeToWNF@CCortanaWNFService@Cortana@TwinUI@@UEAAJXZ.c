/*
 * XREFs of ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x1803D87A0
 * Callers:
 *     ??1CCortanaWNFService@Cortana@TwinUI@@UEAA@XZ @ 0x1803D7DDC (--1CCortanaWNFService@Cortana@TwinUI@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SafeUnsubscribeWnf@@YAXPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1803D834C (-SafeUnsubscribeWnf@@YAXPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(TwinUI::Cortana::CCortanaWNFService *this)
{
  __int64 v1; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  v5 = 0LL;
  v4 = v1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 1);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 2);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 3);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 4);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 5);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 6);
  return 0LL;
}
