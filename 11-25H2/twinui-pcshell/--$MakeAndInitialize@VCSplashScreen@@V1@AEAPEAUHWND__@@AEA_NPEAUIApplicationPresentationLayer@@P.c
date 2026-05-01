/*
 * XREFs of ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x180300194
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180136E24 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1801831E0 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180183220 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x1801F60F4 (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     ??0CSplashScreen@@QEAA@XZ @ 0x1802A4220 (--0CSplashScreen@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
        CSplashScreen **a1,
        __int64 *a2,
        char *a3,
        __int64 *a4,
        __int64 (__fastcall ****a5)(_QWORD, GUID *, __int64 *))
{
  void *v9; // rax
  int v10; // ebx
  CSplashScreen *v11; // rax
  __int64 v12; // rdx
  CSplashScreen *v13; // rsi
  __int64 v14; // r8
  char v15; // bl
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v17; // rax
  void *v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-20h] BYREF
  CSplashScreen *v21; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v9;
  if ( v9 )
  {
    v11 = CSplashScreen::CSplashScreen((CSplashScreen *)v9);
    v12 = *a4;
    v13 = v11;
    v14 = *a2;
    v15 = *a3;
    v19 = 0LL;
    v16 = *a5;
    v21 = v11;
    *((_QWORD *)v11 + 18) = v14;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v11 + 15, v12);
    *((_BYTE *)v13 + 168) = v15;
    v20 = (__int64 *)((char *)v13 + 160);
    v17 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v20);
    v10 = Microsoft::WRL::AsWeak<IInspectable>(v16, v17);
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef((__int64 *)&v21);
      *a1 = v13;
      Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((__int64 *)&v21);
      v10 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((__int64 *)&v21);
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v19);
  return (unsigned int)v10;
}
