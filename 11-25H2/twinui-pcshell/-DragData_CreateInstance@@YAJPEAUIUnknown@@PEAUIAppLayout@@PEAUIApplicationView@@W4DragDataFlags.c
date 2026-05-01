/*
 * XREFs of ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x18050F4AC
 * Callers:
 *     ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1805073C4 (-InitDragData@WindowArrangementView@@AEAAJXZ.c)
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x180507BB4 (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x180081D38 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$ChainInterfaces@UIPlaceModeData@@UIDragData@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$ChainInterfaces@UIPlaceModeData@@UIDragData@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18050F098 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCW_ea_18050F098.c)
 *     ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x18050F140 (--$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragData_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const struct _GUID *a5,
        DragData *a6)
{
  DragData *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v13 = a2;
  v12 = a1;
  v6 = a6;
  *(_QWORD *)a6 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<DragData,DragData,IUnknown * &,IAppLayout * &,IApplicationView * &,enum WindowArrangementViewDragData::DragDataFlags &>(
         &a6,
         &v12,
         &v13,
         &v14,
         &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 474LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_6;
  }
  v7 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,Microsoft::WRL::ChainInterfaces<IPlaceModeData,IDragData,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>>(
         (__int64)a6,
         a5,
         v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 475LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&a6);
  return v8;
}
