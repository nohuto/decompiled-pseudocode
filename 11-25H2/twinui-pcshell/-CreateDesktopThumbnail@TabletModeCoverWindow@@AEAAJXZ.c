/*
 * XREFs of ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x18050D714
 * Callers:
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180142BC0 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 *     ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18050D9D0 (-DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x1802360C0 (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B8C98 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ?DestroyDesktopThumbnail@TabletModeCoverWindow@@AEAAXXZ @ 0x1802B8EF0 (-DestroyDesktopThumbnail@TabletModeCoverWindow@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModeCoverWindow::CreateDesktopThumbnail(TabletModeCoverWindow *this)
{
  LPVOID *ppv; // rdi
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  DCompThumbnailHelpers **v6; // r14
  LPVOID v7; // rdi
  __int64 (__fastcall *v8)(LPVOID, _QWORD, __int64, char *); // rbx
  int DesktopBackgroundThumbnail; // eax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  DCompThumbnailHelpers *v13; // rdi
  __int64 (__fastcall *v14)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, char *); // rbx
  _QWORD *v15; // r14
  DWORD SysColor; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-38h] BYREF
  char v21; // [rsp+60h] [rbp-20h]
  _DWORD v22[4]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v20[2] = (__int64)this;
  v21 = 1;
  ppv = (LPVOID *)((char *)this + 168);
  if ( !*((_QWORD *)this + 21) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
    Instance = CoCreateInstance(
                 &CLSID_SwitchThumbnailDeviceManager,
                 0LL,
                 1u,
                 &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                 ppv);
    v4 = Instance;
    if ( Instance < 0 )
    {
      v5 = 300LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)Instance);
LABEL_20:
      TabletModeCoverWindow::DestroyDesktopThumbnail(this);
      return v4;
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)*ppv + 176LL))(*ppv);
  }
  v6 = (DCompThumbnailHelpers **)((char *)this + 160);
  if ( !*((_QWORD *)this + 20) )
  {
    v7 = *ppv;
    v8 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, char *))(*(_QWORD *)v7 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
    Instance = v8(v7, *((_QWORD *)this + 13), 1LL, (char *)this + 160);
    v4 = Instance;
    if ( Instance < 0 )
    {
      v5 = 308LL;
      goto LABEL_8;
    }
  }
  v19 = (__int64)*v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v20, &v19, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  TabletModeCoverWindow::DestroyDesktopThumbnail(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  DesktopBackgroundThumbnail = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
                                 *v6,
                                 0LL,
                                 (TabletModeCoverWindow *)((char *)this + 204),
                                 0LL,
                                 (const struct tagSIZE *)this + 15);
  v4 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v10 = 317LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)DesktopBackgroundThumbnail);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v20);
    goto LABEL_20;
  }
  v11 = *((_DWORD *)this + 54) - *((_DWORD *)this + 52);
  v12 = *((_DWORD *)this + 53) - *((_DWORD *)this + 51);
  v22[0] = 0;
  v22[1] = 0;
  v22[2] = v12;
  v22[3] = v11;
  DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(**((_QWORD **)this + 15)
                                                                                           + 24LL))(
                                 *((_QWORD *)this + 15),
                                 v22,
                                 0LL,
                                 0LL);
  v4 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v10 = 319LL;
    goto LABEL_19;
  }
  v13 = *v6;
  v14 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, char *))(*(_QWORD *)*v6 + 104LL);
  v15 = (_QWORD *)((char *)this + 128);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  v19 = 0x100000001LL;
  SysColor = GetSysColor(8);
  DesktopBackgroundThumbnail = v14(
                                 v13,
                                 0LL,
                                 SysColor,
                                 v19,
                                 &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                                 (char *)this + 128);
  v4 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v10 = 323LL;
    goto LABEL_19;
  }
  DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v15 + 32LL))(
                                 *v15,
                                 v17,
                                 0LL,
                                 0LL);
  v4 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v10 = 325LL;
    goto LABEL_19;
  }
  DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)*v15 + 24LL))(
                                 *v15,
                                 v22,
                                 0LL,
                                 0LL);
  v4 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v10 = 326LL;
    goto LABEL_19;
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v20);
  return 0LL;
}
