/*
 * XREFs of ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x18052107C
 * Callers:
 *     ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1805208FC (-_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180520B70 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180520DB0 (-_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180520EE0 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802388B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x18051DE30 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_CancelPlacement@CDragVisual@@AEAAXXZ @ 0x18051FE18 (-_CancelPlacement@CDragVisual@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::_OnPressDown(CDragVisual *this, struct tagPOINT a2)
{
  HWND v2; // rdx
  unsigned int v3; // edi
  __int64 v5; // r9
  struct tagPOINT v7; // [rsp+40h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (HWND)*((_QWORD *)this + 19);
  v3 = 0;
  if ( *((_BYTE *)this + 326) )
  {
    Geometry::CPoint::ClientToScreen(&v7, v2, (LONG *)&v8);
    if ( !Geometry::CRect::Contains((CDragVisual *)((char *)this + 240), &v7) )
      CDragVisual::_CancelPlacement(this);
  }
  else
  {
    Geometry::CPoint::ClientToScreen(&v7, v2, (LONG *)&v8);
    LOBYTE(v5) = 1;
    return (*(unsigned int (__fastcall **)(_QWORD, __int64, struct tagPOINT *, __int64))(**((_QWORD **)this + 17) + 64LL))(
             *((_QWORD *)this + 17),
             2LL,
             &v7,
             v5);
  }
  return v3;
}
