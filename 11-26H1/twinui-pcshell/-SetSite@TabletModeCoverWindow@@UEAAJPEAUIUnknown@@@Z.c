/*
 * XREFs of ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x18016FF80
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall TabletModeCoverWindow::SetSite(HWND *this, struct IUnknown *a2)
{
  char v4; // al
  void (__fastcall *v5)(TabletModeCoverWindow *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  bool v7; // bl
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v7 = 0;
  if ( !a2 )
  {
    v9 = 0LL;
    v5 = (void (__fastcall *)(TabletModeCoverWindow *, GUID *, __int64 *))*((_QWORD *)*this + 4);
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v9);
    v5((TabletModeCoverWindow *)this, &GUID_00000000_0000_0000_c000_000000000046, v6);
    v4 = 3;
    if ( v9 )
      v7 = 1;
  }
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  if ( v7 )
  {
    (*(void (__fastcall **)(HWND, HWND, _QWORD))(*(_QWORD *)this[24] + 24LL))(this[24], this[13], 0LL);
    DestroyWindow(this[13]);
    this[13] = 0LL;
  }
  return CWRLObjectWithGITSite::SetSite((CWRLObjectWithGITSite *)this, a2);
}
