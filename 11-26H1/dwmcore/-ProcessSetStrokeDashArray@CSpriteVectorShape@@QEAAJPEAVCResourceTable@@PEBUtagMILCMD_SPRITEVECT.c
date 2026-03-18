/*
 * XREFs of ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x180282B08
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801CD860 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ??$insert@V?$span_iterator@$$CBM@details@gsl@@$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@$$CBM@details@gsl@@1@Z @ 0x18028283C (--$insert@V-$span_iterator@$$CBM@details@gsl@@$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashArray(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY *a3,
        __int64 a4,
        unsigned int a5)
{
  char *v5; // rbx
  unsigned __int64 v6; // rdi
  char *v9; // r8
  __m128i v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  _QWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF
  struct CResourceTable *v14; // [rsp+88h] [rbp+10h] BYREF

  v14 = a2;
  v5 = (char *)this + 168;
  v6 = (unsigned __int64)a5 >> 2;
  if ( !*((_BYTE *)a3 + 8) )
  {
    if ( *((_QWORD *)this + 21) != *((_QWORD *)this + 22) )
      *((_QWORD *)this + 22) = *(_QWORD *)v5;
    std::vector<float>::reserve((_QWORD *)this + 21, v6);
  }
  gsl::details::extent_type<-1>::extent_type<-1>(&v11, v6);
  if ( v11.m128i_i64[0] == -1 || !a4 && v11.m128i_i64[0] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v9 = (char *)*((_QWORD *)v5 + 1);
  v11.m128i_i64[1] = a4 + 4 * v11.m128i_i64[0];
  v12 = v11.m128i_i64[1];
  v13[1] = v11.m128i_i64[1];
  v11.m128i_i64[0] = a4;
  v13[0] = a4;
  v13[2] = a4;
  std::vector<float>::insert<gsl::details::span_iterator<float const>,0>((char **)v5, &v14, v9, (__int64)v13, &v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  return 0LL;
}
