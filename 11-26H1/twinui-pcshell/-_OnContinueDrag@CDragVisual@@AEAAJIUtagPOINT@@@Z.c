/*
 * XREFs of ?_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1805435F8
 * Callers:
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180543A38 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180543DB4 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UITabletModeInputCallback@@@?$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeInputCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x18053FEBC (--$As@UITabletModeInputCallback@@@-$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x180540D04 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::_OnContinueDrag(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a3;
  v7 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IDragVisualHost>::As<ITabletModeInputCallback>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 17,
         &v7);
  if ( v5 >= 0 )
  {
    Geometry::CPoint::ClientToScreen(&v9, *((HWND *)this + 19), (LONG *)&v8);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagPOINT *))(*(_QWORD *)v7 + 32LL))(v7, a2, &v9);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  return (unsigned int)v5;
}
