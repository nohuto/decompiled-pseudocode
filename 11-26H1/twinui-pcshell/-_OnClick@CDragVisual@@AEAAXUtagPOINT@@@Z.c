/*
 * XREFs of ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x18054358C
 * Callers:
 *     ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180543878 (-_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180544B70 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x180540D04 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180542D78 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::_OnClick(HWND *this, struct tagPOINT a2)
{
  struct tagPOINT v3; // [rsp+30h] [rbp+8h] BYREF
  struct tagPOINT v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  CDragVisual::_ClearVisualFeedback((CDragVisual *)this);
  Geometry::CPoint::ClientToScreen(&v3, this[19], (LONG *)&v4);
  if ( !*((_BYTE *)this + 326) && Geometry::CRect::Contains((Geometry::CRect *)(this + 24), &v3) )
    (*(void (__fastcall **)(HWND, struct tagPOINT))(*(_QWORD *)this[17] + 56LL))(this[17], v3);
}
