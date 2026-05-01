/*
 * XREFs of ?GetTargetViewFromLayout@WindowArrangementView@@AEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180507164
 * Callers:
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180506864 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall WindowArrangementView::GetTargetViewFromLayout(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, GUID *, __int64 *); // rdi
  __int64 *v10; // rax
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v5 = a3 - 2;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_6;
    v6 = *(_QWORD *)(a1 + 120);
    v7 = *(void (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v8 = 1LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 120);
    v7 = *(void (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v8 = 0LL;
  }
  v7(v6, v8, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v12);
  v4 = v12;
LABEL_6:
  *a2 = 0LL;
  if ( v4 )
  {
    v9 = *(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 48LL);
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(a2);
    v9(v4, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v10);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  return a2;
}
