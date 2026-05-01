/*
 * XREFs of ??$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802B0F74
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18022F8E0 (-CreateInstance@-$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180025070 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801B6624 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDire.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180211850 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirec.c)
 *     ??0LockScreenDirectorServiceProviderImpl@@QEAA@XZ @ 0x1802B1080 (--0LockScreenDirectorServiceProviderImpl@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<LockScreenDirectorServiceProviderImpl,IUnknown,>(
        _QWORD *a1)
{
  LockScreenDirectorServiceProviderImpl *v2; // rax
  unsigned int v3; // edi
  LockScreenDirectorServiceProviderImpl *v4; // rbx
  int v5; // eax
  volatile int *v6; // rdx
  volatile int *v7; // rdx
  int v9[2]; // [rsp+20h] [rbp-48h] BYREF
  LockScreenDirectorServiceProviderImpl *v10; // [rsp+28h] [rbp-40h]
  _OWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0LL;
  v2 = (LockScreenDirectorServiceProviderImpl *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v9 = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)v9);
    return v3;
  }
  v4 = LockScreenDirectorServiceProviderImpl::LockScreenDirectorServiceProviderImpl(v2);
  v10 = v4;
  *(_QWORD *)v9 = 0LL;
  v11[0] = IID_ILockScreenDirector;
  v11[1] = 0LL;
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (LockScreenDirectorServiceProviderImpl *)((char *)v4 + 48),
         (__int64)v11,
         1uLL);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v5);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::Release(
        (__int64)v4,
        v6);
    goto LABEL_6;
  }
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>>(
         (__int64)v4,
         &GUID_00000000_0000_0000_c000_000000000046,
         a1);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::Release(
      (__int64)v4,
      v7);
  return v3;
}
