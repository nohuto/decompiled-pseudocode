/*
 * XREFs of ?AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z @ 0x1801C73F8
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180073624 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 */

void __fastcall CBspNode::AddPolygon(CBspNode *this, struct CPolygon *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v4; // rdx
  struct CPolygon *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (_QWORD *)((char *)this + 32);
  v4 = (_QWORD *)v2[1];
  if ( v4 == (_QWORD *)v2[2] )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      v2,
      (__int64)v4,
      (__int64 *)&v5);
  }
  else
  {
    *v4 = a2;
    v2[1] += 8LL;
  }
  (**(void (__fastcall ***)(struct CPolygon *))a2)(a2);
}
