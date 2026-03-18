/*
 * XREFs of ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18026C368
 * Callers:
 *     ?ProcessAppendShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x180249854 (-ProcessAppendShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SE.c)
 *     ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x180249960 (-ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCO.c)
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180281B04 (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONP.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x18019DEE0 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 *     ??$_Insert_counted_range@PEAPEAVCVectorShape@@@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCVectorShape@@@std@@@std@@@1@PEAPEAVCVectorShape@@_K@Z @ 0x1801C6474 (--$_Insert_counted_range@PEAPEAVCVectorShape@@@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVect.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@@Z @ 0x1802054D0 (-UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV-$vect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVectorShape::SetShapes(char **this, __int64 a2, int *a3, char a4)
{
  int v7; // edx
  unsigned int *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  char *v12; // r12
  struct CResource **v13; // rdi
  __int64 v14; // rsi
  struct CResource **v15; // r15
  struct CResource **i; // rbx
  __int128 *v17; // rbx
  __int64 v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  char *v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v21 = 0LL;
  v7 = *a3;
  v8 = (unsigned int *)*((_QWORD *)a3 + 1);
  v20 = 0LL;
  v9 = CResource::UnmarshalResourceArray(v8, 4 * v7, 0x9Au, a2, v18, (__int64)&v20);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = (char *)*((_QWORD *)&v20 + 1);
    v13 = (struct CResource **)v20;
    v14 = (__int64)(*((_QWORD *)&v20 + 1) - v20) >> 3;
    gsl::details::extent_type<-1>::extent_type<-1>(&v19, v14);
    if ( v19 == -1 || !v13 && v19 )
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    v15 = &v13[v19];
    for ( i = v13; i != v15; ++i )
      CResource::RegisterNotifier((CResource *)this, *i);
    v17 = (__int128 *)(this + 13);
    if ( a4 )
    {
      std::vector<CVectorShape *>::_Insert_counted_range<CVectorShape * *>((__int64)(this + 13), this[14], v13, v14);
    }
    else
    {
      CResource::UnRegisterNotifiers<CTransform,1>((CResource *)this, (struct CResource ***)this + 13);
      if ( v17 != &v20 )
      {
        std::vector<CDataSourceReader *>::_Tidy((__int64)(this + 13));
        this[15] = v21;
        v20 = 0LL;
        *(_QWORD *)v17 = v13;
        this[14] = v12;
        v21 = 0LL;
      }
    }
    (*((void (__fastcall **)(char **, _QWORD, _QWORD))*this + 10))(this, 0LL, 0LL);
    std::vector<CDataSourceReader *>::_Tidy((__int64)&v20);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\containervectorshape.cpp",
      (const char *)(unsigned int)v9);
    std::vector<CDataSourceReader *>::_Tidy((__int64)&v20);
    return v10;
  }
}
