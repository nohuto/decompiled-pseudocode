/*
 * XREFs of ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180281B04
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?ProcessAppendShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x1802498D4 (-ProcessAppendShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTI.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801123BC (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x18026C368 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetShapes(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        const void *a4,
        unsigned int a5,
        char a6)
{
  int v8; // ebx
  __int64 v9; // rdx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CResource *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v8 = CShapeVisual::EnsureShapeTree(this, &v13);
  if ( v8 < 0 )
  {
    v9 = 40LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapevisual.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  gsl::details::extent_type<-1>::extent_type<-1>(v11, (unsigned __int64)a5 >> 2);
  if ( v11[0] == -1LL || !a4 && v11[0] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v11[1] = a4;
  v8 = CContainerVectorShape::SetShapes((char **)v13, (__int64)a2, (int *)v11, a6);
  if ( v8 < 0 )
  {
    v9 = 44LL;
    goto LABEL_3;
  }
  return 0LL;
}
