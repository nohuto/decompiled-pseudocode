/*
 * XREFs of ?_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180521108
 * Callers:
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180520B70 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180520EE0 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x18051DE30 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x18051FED0 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::_OnStartDrag(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  HRESULT v5; // edi
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a3;
  if ( a2 )
    DwmShowContact(a2, 0LL);
  CDragVisual::_ClearVisualFeedback(this);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         *((IUnknown **)this + 2),
         &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
         &GUID_84098f74_87a7_4582_b398_f6c3178e9dd6,
         &ppvOut);
  if ( v5 >= 0 )
  {
    Geometry::CPoint::ClientToScreen(&v9, *((HWND *)this + 19), (LONG *)&v8);
    v5 = (*(__int64 (__fastcall **)(void *, _QWORD, struct tagPOINT))(*(_QWORD *)ppvOut + 88LL))(ppvOut, a2, v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v5;
}
