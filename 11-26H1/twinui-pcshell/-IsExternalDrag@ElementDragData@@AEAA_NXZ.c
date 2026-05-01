/*
 * XREFs of ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x1804DB790
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DB13C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x18022A7B0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804C861C (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x1804DB70C (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall ElementDragData::IsExternalDrag(ElementDragData *this)
{
  _DWORD *v2; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v5; // [rsp+30h] [rbp-28h] BYREF

  if ( ElementDragData::GetExternalDragProgress(this) > 1.0 )
    return 1;
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagPOINT *))(**((_QWORD **)this + 5) + 88LL))(
                   *((_QWORD *)this + 5),
                   &v5);
  RelativeMargins::ApplyMargins((double *)this + 16, (__int64)v4, v2);
  v5 = *(struct tagPOINT *)((char *)this + 92);
  return !Geometry::CRect::Contains((Geometry::CRect *)v4, &v5);
}
