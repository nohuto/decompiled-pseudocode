/*
 * XREFs of ?v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18001A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x18001ABB4 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::v_QueryService(
        LockScreenDirectorServiceProviderImpl *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // eax
  struct ILockScreenDirector *v12; // rcx
  struct ILockScreenDirector *v13; // rcx
  struct ILockScreenDirector *v14; // rcx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ILockScreenDirector *v17; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_ILockScreenDirector.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_ILockScreenDirector.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_ILockScreenDirector.Data4;
  if ( v7 )
  {
    v8 = -2147467263;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)0x80004001LL,
      v15);
    return v8;
  }
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v10 = LockScreenDirectorServiceProviderImpl::EnsureChildServices(
          (LockScreenDirectorServiceProviderImpl *)((char *)this - 48),
          &v17);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v10,
      v15);
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v8;
  }
  v11 = (**(__int64 (__fastcall ***)(struct ILockScreenDirector *, const struct _GUID *, void **))v17)(v17, a3, a4);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v11,
      v15);
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v8;
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
