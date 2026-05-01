/*
 * XREFs of ??$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180080E14
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18022FA90 (-CreateInstance@-$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006ADE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18006ADE0.c)
 *     ??0CAppTransitionManager@@QEAA@XZ @ 0x18007F734 (--0CAppTransitionManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x180080EC0 (-RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180080F30 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShell.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAppTransitionManager,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  CAppTransitionManager *v4; // rax
  __int64 v5; // rbx
  volatile int *v6; // rdx
  int v7; // edi
  volatile int *v8; // rdx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = CAppTransitionManager::CAppTransitionManager((CAppTransitionManager *)v2);
  v9 = 0LL;
  v5 = (__int64)v4;
  v7 = CAppTransitionManager::RuntimeClassInitialize(v4);
  if ( v7 >= 0 )
  {
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>>(
           v5,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::Release(
        v5,
        v8);
  }
  else
  {
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::Release(
        v5,
        v6);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
  }
  return (unsigned int)v7;
}
