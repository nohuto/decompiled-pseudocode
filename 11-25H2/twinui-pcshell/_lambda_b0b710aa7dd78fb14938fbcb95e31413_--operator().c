/*
 * XREFs of _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x1804C8E4C
 * Callers:
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804C85CC (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804C9258 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::OnStoryboardStatusChanged @ 0x1804C97A0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864_ea_1804C97A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801419D8 (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B8C98 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x1804CA170 (-Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()(unsigned int *a1)
{
  __int64 v2[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v3[88]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v4; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    *(_QWORD *)a1 + 184LL,
    (__int64)v3);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v4);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v2, &v4, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v4);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 40LL) + 448LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 40LL),
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    a1[2]);
  MultitaskingViewTelemetry::DragSwitchItem::Stop(
    (MultitaskingViewTelemetry::DragSwitchItem *)(*(_QWORD *)a1 + 184LL),
    a1[2]);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v2);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v3);
}
