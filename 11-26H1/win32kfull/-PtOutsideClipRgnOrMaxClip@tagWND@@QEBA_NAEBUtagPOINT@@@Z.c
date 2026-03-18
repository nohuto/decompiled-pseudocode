/*
 * XREFs of ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1400462A4
 * Callers:
 *     _ChildWindowFromPointEx @ 0x140047B90 (_ChildWindowFromPointEx.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     _RealChildWindowFromPoint @ 0x14008BE64 (_RealChildWindowFromPoint.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402F23D0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall tagWND::PtOutsideClipRgnOrMaxClip(tagWND *this, const struct tagPOINT *a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 168LL);
  if ( v3 )
    return (unsigned int)GrePtInRegion(v3, (unsigned int)a2->x, (unsigned int)a2->y) == 0;
  return v2;
}
