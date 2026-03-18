/*
 * XREFs of ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x1800533A4
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x180053598 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x180052E34 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180052E94 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x180052FBC (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x180053574 (-ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ.c)
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18005399C (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180053E88 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CTrimPathOperation::ProcessSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  float v6; // xmm2_4
  __int64 v7; // rdx
  float v8; // xmm2_4
  bool v10; // zf
  size_t Size; // r9
  char *v12; // rax
  int v13; // xmm0_4
  int v14; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)a2 )
  {
    *((_QWORD *)this + 6) = *(_QWORD *)a2;
    *((_QWORD *)this + 7) = *((_QWORD *)a2 + 1);
  }
  v4 = *((unsigned int *)this + 8);
  v5 = 2LL;
  if ( (unsigned int)v4 < 2 )
  {
    v6 = *((float *)a2 + 1) + *((float *)this + 11);
    *((float *)this + 11) = v6;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + v4 + 6) - v6) & _xmm) <= 0.0000011920929 )
    {
      if ( !*(_BYTE *)a2 )
      {
        v10 = *((_BYTE *)this + 396) == 0;
        *((_BYTE *)this + 397) = 1;
        *((_BYTE *)this + 396) = v10;
        *((_DWORD *)this + 8) = v4 + 1;
      }
    }
    else if ( CTrimPathOperation::ShouldSplitCurrentSegment(this) )
    {
      do
      {
        v8 = fmaxf(0.0, (float)(*((float *)this + v7 + 6) - (float)(v6 - *((float *)a2 + 1))) / *((float *)a2 + 1));
        if ( *((_BYTE *)this + 396) )
          CTrimPathOperation::TrimToEndAt(this, a2, v8);
        else
          CTrimPathOperation::TrimToStartAt(this, a2, v8);
        v7 = *((unsigned int *)this + 8);
        if ( (unsigned int)v7 >= 2 )
          break;
        v6 = *((float *)this + 11);
      }
      while ( v6 > *((float *)this + v7 + 6) );
      CTrimPathOperation::UpdateCurrentEndPoint(this, a2);
      return 1;
    }
    if ( !*((_BYTE *)this + 396) )
      goto LABEL_19;
    goto LABEL_17;
  }
  if ( *((_BYTE *)this + 396) )
  {
LABEL_17:
    Size = (unsigned int)Path::Segment::GetSize(*(_BYTE *)a2);
    if ( a2 > (const struct Path::Segment *)((char *)a2 + Size) )
      goto LABEL_27;
    std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(
      (char **)this,
      *((char **)this + 1),
      a2,
      Size);
LABEL_19:
    if ( *(_BYTE *)a2 != 1 )
    {
      switch ( *(_BYTE *)a2 )
      {
        case 0:
          goto LABEL_29;
        case 1:
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        case 2:
        case 3:
LABEL_29:
          v12 = (char *)a2 + 8;
          if ( a2 == (const struct Path::Segment *)-8LL )
            goto LABEL_27;
          v5 = 0LL;
          break;
        case 4:
          v12 = (char *)a2 + 8;
          if ( a2 == (const struct Path::Segment *)-8LL )
            goto LABEL_27;
          v5 = 1LL;
          break;
        case 5:
          v12 = (char *)a2 + 8;
          if ( a2 == (const struct Path::Segment *)-8LL )
          {
LABEL_27:
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
          break;
        default:
          ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
      v13 = *(_DWORD *)&v12[8 * v5 + 4];
      v14 = *(_DWORD *)&v12[8 * v5];
      *((_DWORD *)this + 10) = v13;
      *((_DWORD *)this + 9) = v14;
    }
    return 1;
  }
  return 0;
}
