/*
 * XREFs of ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180054E28
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x180053598 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180054E8C (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801B8F60 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x180053E1C (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

bool __fastcall CPathData::IsSimpleGeometry(CPathData *this)
{
  char v1; // al
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  _BYTE *i; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 66);
  if ( !v1 )
  {
    v4 = (_BYTE *)*((_QWORD *)this + 2);
    v5 = (_BYTE *)*((_QWORD *)this + 3);
    for ( i = v4; ; v4 = i )
    {
      if ( v4 == v5 )
      {
        v1 = 1;
        goto LABEL_9;
      }
      if ( *v4 == 3 || *v4 == 4 )
        break;
      Path::SegmentCollection::const_iterator::operator++(&i);
    }
    v1 = -1;
LABEL_9:
    *((_BYTE *)this + 66) = v1;
  }
  return v1 == 1;
}
