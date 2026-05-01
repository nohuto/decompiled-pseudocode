/*
 * XREFs of ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x18015863C
 * Callers:
 *     ??_EVirtualDesktopGestureWindow@@UEAAPEAXI@Z @ 0x180539AA8 (--_EVirtualDesktopGestureWindow@@UEAAPEAXI@Z.c)
 *     ??_EVirtualDesktopHotKeyWindow@@UEAAPEAXI@Z @ 0x180545D2C (--_EVirtualDesktopHotKeyWindow@@UEAAPEAXI@Z.c)
 *     _VirtualDesktopHotKeyWindow::VirtualDesktopHotKeyWindow_::_1_::dtor$0 @ 0x1806CC2D2 (_VirtualDesktopHotKeyWindow--VirtualDesktopHotKeyWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1801588AC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CF498 (--1-$com_ptr_t@V-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@.c)
 */

void __fastcall VirtualDesktopGestureWindow::~VirtualDesktopGestureWindow(VirtualDesktopGestureWindow *this)
{
  *(_QWORD *)this = &VirtualDesktopGestureWindow::`vftable'{for `CWRLImpWndProc<VirtualDesktopGestureWindow>'};
  *((_QWORD *)this + 2) = &VirtualDesktopGestureWindow::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
  wil::com_ptr_t<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>,wil::err_returncode_policy>((char *)this + 320);
  wil::com_ptr_t<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LoadCustomVDWallpaperWithGesturePerfTest,_tip_LoadCustomVDWallpaperWithGesturePerfTest>,wil::err_returncode_policy>((char *)this + 312);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  CTSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>::RemoveAll((char *)this + 128);
  CTSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>::RemoveAll((char *)this + 96);
  CTSimpleArray<Microsoft::WRL::ComPtr<IDCompThumbnail>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDCompThumbnail>>>::RemoveAll((char *)this + 64);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
}
