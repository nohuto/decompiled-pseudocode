/*
 * XREFs of ??$Initialize@UILockScreenDirector@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UILockScreenDirector@@@WRL@Microsoft@@@Z @ 0x1803E6500
 * Callers:
 *     ?SetDirectorReference@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIUnknown@@@Z @ 0x18022CF30 (-SetDirectorReference@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall AgileGitPtr::Initialize<ILockScreenDirector>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned int AgileReference; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = 0LL;
  AgileReference = 0;
  v7 = 0LL;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
    AgileReference = RoGetAgileReference(0LL, &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb, v2, &v7);
    v3 = v7;
  }
  v8 = *a1;
  v7 = 0LL;
  *a1 = v3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  return AgileReference;
}
