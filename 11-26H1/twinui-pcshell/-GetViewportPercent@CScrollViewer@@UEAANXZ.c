/*
 * XREFs of ?GetViewportPercent@CScrollViewer@@UEAANXZ @ 0x1804D8CA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_GetTotalRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1804D9910 (-_GetTotalRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1804D9988 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

double __fastcall CScrollViewer::GetViewportPercent(CScrollViewer *this)
{
  char *v1; // rsi
  __int64 (__fastcall *v3)(Geometry::CRect *); // rdi
  __int64 VisibleRect; // rax
  double v5; // xmm6_8
  __int64 TotalRect; // rax
  _BYTE v8[16]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (char *)this - 208;
  v3 = Geometry::CRect::GetWidth;
  if ( !(*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 96LL))(this) )
    v3 = Geometry::CRect::GetHeight;
  if ( !(*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 64LL))(this) )
    return DOUBLE_100_0;
  VisibleRect = CScrollViewer::_GetVisibleRect(v1);
  v5 = (double)(int)v3((Geometry::CRect *)VisibleRect);
  TotalRect = CScrollViewer::_GetTotalRect(v1, v8);
  return v5 * 100.0 / (double)(int)v3((Geometry::CRect *)TotalRect);
}
