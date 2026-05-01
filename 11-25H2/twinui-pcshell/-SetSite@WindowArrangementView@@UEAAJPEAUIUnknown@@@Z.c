/*
 * XREFs of ?SetSite@WindowArrangementView@@UEAAJPEAUIUnknown@@@Z @ 0x180508BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180067668 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementView::SetSite(WindowArrangementView *this, struct IUnknown *a2)
{
  IUnknown **v4; // r14
  char v5; // di
  _DWORD *v6; // rsi
  __int64 *v7; // rax
  IUnknown **v9; // rdi
  __int64 v10; // rcx
  IUnknown *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (IUnknown **)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) && a2 )
  {
    v5 = 1;
LABEL_4:
    v6 = (_DWORD *)((char *)this + 320);
    goto LABEL_5;
  }
  v5 = 0;
  if ( !*v4 || a2 )
    goto LABEL_4;
  v9 = (IUnknown **)((char *)this + 80);
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, 4LL, 0LL);
    IUnknown_SetSite(*v9, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v9);
  }
  v11 = (IUnknown *)*((_QWORD *)this + 9);
  if ( v11 )
  {
    IUnknown_SetSite(v11, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  SmartCookie::Unregister((WindowArrangementView *)((char *)this + 160));
  *((_BYTE *)this + 314) = 1;
  v13 = 0LL;
  v6 = (_DWORD *)((char *)this + 320);
  if ( *((_DWORD *)this + 80) )
  {
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
    if ( IUnknown_QueryService(
           *v4,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (void **)v12) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, (unsigned int)*v6);
      *v6 = 0;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v4, (__int64)a2);
  if ( v5 )
  {
    v13 = 0LL;
    if ( !*v6 )
    {
      v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
      if ( IUnknown_QueryService(
             *v4,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             (void **)v7) >= 0 )
        (*(void (__fastcall **)(__int64, unsigned __int64, _DWORD *))(*(_QWORD *)v13 + 96LL))(
          v13,
          ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
          v6);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  return 0LL;
}
