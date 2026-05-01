/*
 * XREFs of ??$Initialize@UILockScreenDirector@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UILockScreenDirector@@@WRL@Microsoft@@@Z @ 0x1803DD68C
 * Callers:
 *     ?SetDirectorReference@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIUnknown@@@Z @ 0x18023B300 (-SetDirectorReference@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall AgileGitPtr::Initialize<ILockScreenDirector>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned int AgileReference; // esi
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = 0LL;
  AgileReference = 0;
  v8 = 0LL;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    AgileReference = RoGetAgileReference(0LL, &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb, v2, &v8);
    v3 = v8;
  }
  v6 = *a1;
  v8 = 0LL;
  v9 = v6;
  *a1 = v3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  return AgileReference;
}
