/*
 * XREFs of ?_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180543910
 * Callers:
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180543A38 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x180540D04 (-ClientToScreen@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x180544388 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::_OnMouseHover(CDragVisual *this, struct tagPOINT a2)
{
  unsigned int v2; // edi
  LONG v4; // eax
  LONG v5; // ecx
  __int64 v6; // r9
  struct tagPOINT v8; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  v8 = a2;
  if ( !*((_BYTE *)this + 275) )
  {
    *(struct tagPOINT *)&rc.left = a2;
    *((struct tagPOINT *)this + 23) = a2;
    *((_BYTE *)this + 275) = 1;
  }
  if ( !*((_BYTE *)this + 276) )
  {
    v4 = *((_DWORD *)this + 46);
    v5 = *((_DWORD *)this + 47);
    rc.left = v4;
    rc.right = v4 + 1;
    rc.top = v5;
    rc.bottom = v5 + 1;
    InflateRect(&rc, 3, 3);
    if ( !Geometry::CRect::Contains((Geometry::CRect *)&rc, &v8) )
      *((_BYTE *)this + 276) = 1;
  }
  if ( !*((_BYTE *)this + 326) && !*((_DWORD *)this + 82) && *((_BYTE *)this + 276) )
  {
    CDragVisual::_TrackMouseLeave(this, 1);
    Geometry::CPoint::ClientToScreen((struct tagPOINT *)&rc, *((HWND *)this + 19), (LONG *)&v8);
    LOBYTE(v6) = 1;
    return (*(unsigned int (__fastcall **)(_QWORD, __int64, struct tagRECT *, __int64))(**((_QWORD **)this + 17) + 64LL))(
             *((_QWORD *)this + 17),
             1LL,
             &rc,
             v6);
  }
  return v2;
}
