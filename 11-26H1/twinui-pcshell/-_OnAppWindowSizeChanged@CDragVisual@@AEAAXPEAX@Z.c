/*
 * XREFs of ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x180543280
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180544B70 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ @ 0x180544B48 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::_OnAppWindowSizeChanged(CDragVisual *this, void *a2)
{
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  void (__fastcall *v9)(__int64 *, void *, __int64 *, char *, _DWORD, _QWORD); // rax
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13[2]; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 279) && *((_QWORD *)this + 10) )
  {
    v10 = *((_QWORD *)this + 9);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v13, &v10, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    v4 = *((_QWORD *)this + 10);
    hWnd = 0LL;
    v11 = 0LL;
    v5 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v11);
    if ( v5(v4, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v6) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 32LL))(v11, &hWnd) >= 0 )
    {
      Rect = 0LL;
      GetWindowRect(hWnd, &Rect);
      if ( !EqualRect((const RECT *)this + 14, &Rect) )
      {
        if ( *((_QWORD *)this + 13) == *((_QWORD *)this + 14) )
        {
          CopyRect((LPRECT)this + 14, &Rect);
          CDragVisual::_UpdateThumbnailRect(this);
          v7 = (__int64 *)*((_QWORD *)this + 13);
          if ( v7 )
          {
            v8 = *v7;
            LODWORD(v10) = *((_DWORD *)this + 58) - *((_DWORD *)this + 56);
            v9 = *(void (__fastcall **)(__int64 *, void *, __int64 *, char *, _DWORD, _QWORD))(v8 + 120);
            HIDWORD(v10) = *((_DWORD *)this + 59) - *((_DWORD *)this + 57);
            v9(v7, a2, &v10, (char *)this + 240, 0, 0LL);
          }
        }
        else
        {
          (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 64LL))(
            (char *)this + 24,
            *((_QWORD *)this + 10));
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v13);
  }
}
