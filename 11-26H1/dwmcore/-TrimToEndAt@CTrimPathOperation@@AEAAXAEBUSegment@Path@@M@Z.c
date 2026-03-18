/*
 * XREFs of ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180052E94
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x1800533A4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180053E88 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x180052E34 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x180052FBC (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x180053A48 (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTrimPathOperation::TrimToEndAt(CTrimPathOperation *this, const struct Path::Segment *a2, float a3)
{
  struct Path::Segment *v5; // rdi
  char v6; // cl
  unsigned int Size; // eax
  unsigned int v8; // eax
  __int64 v9; // r9
  bool v10; // al
  __int16 v11; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+32h] [rbp-26h]
  int v13; // [rsp+34h] [rbp-24h]

  if ( COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.0000011920929 )
  {
    v5 = CTrimPathOperation::InterpolateSegment(this, a2, 0.0, a3, 0LL);
    v6 = *(_BYTE *)v5;
    *((float *)v5 + 1) = a3 * *((float *)a2 + 1);
    Size = Path::Segment::GetSize(v6);
    if ( !v5 && Size || v5 > (struct Path::Segment *)((char *)v5 + Size) )
LABEL_8:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(this, *((_QWORD *)this + 1), v5, Size);
  }
  v8 = Path::Segment::GetSize(1);
  memset_0(&v11, 0, v8);
  v11 = 1;
  v13 = 0;
  v12 = 0;
  v9 = (unsigned int)Path::Segment::GetSize(1);
  if ( &v11 > (__int16 *)((char *)&v11 + v9) )
    goto LABEL_8;
  std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(this, *((_QWORD *)this + 1), &v11, v9);
  v10 = *((_BYTE *)this + 396) == 0;
  ++*((_DWORD *)this + 8);
  *((_BYTE *)this + 396) = v10;
  *((_BYTE *)this + 397) = 0;
}
