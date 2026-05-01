/*
 * XREFs of ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804C9258
 * Callers:
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x1804C8FCC (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragStarted @ 0x1804C9240 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___--ExternalD.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C9980 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801419D8 (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B8C98 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804C85CC (ElementDragData--HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___ @ 0x1804C89BC (ElementDragData--MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___.c)
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x1804C8E4C (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1804C941C (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ElementDragData::FinishDrag(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // r8
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-49h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-41h]
  __int128 v15; // [rsp+30h] [rbp-39h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v17[112]; // [rsp+50h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v19; // [rsp+D0h] [rbp+67h] BYREF
  int v20; // [rsp+E0h] [rbp+77h] BYREF
  int v21; // [rsp+E4h] [rbp+7Bh]
  __int64 v22; // [rsp+E8h] [rbp+7Fh] BYREF

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 184,
    (__int64)v17);
  v19 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v16, &v19, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  v4 = 0;
  if ( a2 != -1 )
    v4 = a2;
  v22 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
  *(_DWORD *)(a1 + 512) = 3;
  *(_DWORD *)(a1 + 88) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 440LL))(
    *(_QWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 24),
    v4);
  if ( v4 == 2 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 464LL))(*(_QWORD *)(a1 + 40));
  }
  else if ( *(_DWORD *)(a1 + 108) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 200LL))(*(_QWORD *)(a1 + 40), a1 + 92);
  }
  v13 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v14 = v4;
  if ( v4 - 1 <= 1 )
  {
    v12 = 4LL;
    if ( v4 != 1 )
      v12 = 0LL;
    v9 = ElementDragData::HideDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(a1, v12, (__int64)&v13);
    v10 = retaddr;
    if ( v9 < 0 )
    {
      v11 = 323LL;
      goto LABEL_14;
    }
  }
  else
  {
    v5 = *(__int64 **)(a1 + 48);
    v6 = *v5;
    v19 = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v6 + 48))(v5, &v19);
    v15 = 0LL;
    ElementDragData::GetDragSourceLocation((ElementDragData *)a1, (struct Geometry::CRect *)&v15);
    v7 = *(_DWORD *)(a1 + 60) + DWORD1(v15);
    v20 = v15 + *(_DWORD *)(a1 + 56);
    v21 = v7;
    v9 = ElementDragData::MoveDragVisualCallback__lambda_b0b710aa7dd78fb14938fbcb95e31413___(
           a1,
           (__int64)&v20,
           v8,
           (__int64)&v13);
    v10 = retaddr;
    if ( v9 < 0 )
    {
      v11 = 341LL;
LABEL_14:
      wil::details::in1diag3::_Log_Hr(
        v10,
        (void *)v11,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
        (const char *)(unsigned int)v9);
      lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()((unsigned int *)&v13);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v16);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v17);
}
