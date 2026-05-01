/*
 * XREFs of ?SetSite@AppResizeView@@UEAAJPEAUIUnknown@@@Z @ 0x18050BF30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeView::SetSite(AppResizeView *this, struct IUnknown *a2)
{
  IUnknown **v4; // rdi
  IUnknown *v5; // rcx
  _DWORD *v6; // rsi
  __int64 *v7; // rax
  char v8; // bp
  __int64 *v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (IUnknown **)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    if ( a2 )
    {
      v8 = 1;
LABEL_13:
      v6 = (_DWORD *)((char *)this + 480);
      goto LABEL_14;
    }
    v4 = (IUnknown **)((char *)this + 16);
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  if ( a2 )
    goto LABEL_12;
  v5 = (IUnknown *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    IUnknown_SetSite(v5, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
  v11 = 0LL;
  v6 = (_DWORD *)((char *)this + 480);
  if ( *((_DWORD *)this + 120) )
  {
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v11);
    if ( IUnknown_QueryService(
           *v4,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (void **)v7) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 104LL))(v11, (unsigned int)*v6);
      *v6 = 0;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  v4 = (IUnknown **)((char *)this + 16);
  v8 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a2);
  if ( v8 )
  {
    v11 = 0LL;
    if ( !*v6 )
    {
      v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v11);
      if ( IUnknown_QueryService(
             *v4,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             (void **)v9) >= 0 )
        (*(void (__fastcall **)(__int64, unsigned __int64, _DWORD *))(*(_QWORD *)v11 + 96LL))(
          v11,
          ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
          v6);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  }
  return 0LL;
}
