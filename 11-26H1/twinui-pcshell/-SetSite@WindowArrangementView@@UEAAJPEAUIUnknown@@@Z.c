/*
 * XREFs of ?SetSite@WindowArrangementView@@UEAAJPEAUIUnknown@@@Z @ 0x18052B000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementView::SetSite(WindowArrangementView *this, struct IUnknown *a2)
{
  IUnknown **v4; // r14
  bool v5; // si
  IUnknown **v6; // rdi
  __int64 v7; // rcx
  IUnknown *v8; // rcx
  _DWORD *v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (IUnknown **)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    v5 = a2 != 0LL;
    goto LABEL_12;
  }
  v5 = 0;
  if ( a2 )
  {
LABEL_12:
    v9 = (_DWORD *)((char *)this + 320);
    goto LABEL_13;
  }
  v6 = (IUnknown **)((char *)this + 80);
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, 4LL, 0LL);
    IUnknown_SetSite(*v6, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v6);
  }
  v8 = (IUnknown *)*((_QWORD *)this + 9);
  if ( v8 )
  {
    IUnknown_SetSite(v8, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  SmartCookie::Unregister((WindowArrangementView *)((char *)this + 160));
  *((_BYTE *)this + 314) = 1;
  v13 = 0LL;
  v9 = (_DWORD *)((char *)this + 320);
  if ( *((_DWORD *)this + 80) )
  {
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
    if ( IUnknown_QueryService(
           *v4,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (void **)v10) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, (unsigned int)*v9);
      *v9 = 0;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  v5 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v4, (__int64)a2);
  if ( v5 )
  {
    v13 = 0LL;
    if ( !*v9 )
    {
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
      if ( IUnknown_QueryService(
             *v4,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             (void **)v11) >= 0 )
        (*(void (__fastcall **)(__int64, unsigned __int64, _DWORD *))(*(_QWORD *)v13 + 96LL))(
          v13,
          ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
          v9);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  return 0LL;
}
