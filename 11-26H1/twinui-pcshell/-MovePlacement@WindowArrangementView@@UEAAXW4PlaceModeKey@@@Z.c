/*
 * XREFs of ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x18052A220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180528BD8 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x18052912C (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18052AF18 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x18052C250 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowArrangementView::MovePlacement(__int64 a1, int a2)
{
  WindowArrangementView *v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  int PlaceModePoint; // eax
  __int64 v10; // r8
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = (WindowArrangementView *)(a1 - 48);
  v5 = *(_QWORD *)(a1 - 48 + 104);
  if ( !v5 )
    return;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  WindowArrangementView::SetPlaceModeIdleAnimationEnabled(v4, 0);
  v7 = 6;
  if ( !a2 )
    goto LABEL_15;
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
    {
      if ( a2 != 3 )
        return;
      if ( v6 == 5 )
        goto LABEL_7;
      if ( v6 == 6 )
        return;
      v8 = 6;
      goto LABEL_13;
    }
LABEL_15:
    if ( v6 - 5 <= 1 )
      return;
    v8 = (a2 != 0) + 2;
    goto LABEL_17;
  }
  if ( v6 == 6 )
  {
LABEL_7:
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 88LL))(*(_QWORD *)(a1 + 56));
    goto LABEL_13;
  }
  if ( v6 == 5 )
    return;
  v8 = 5;
LABEL_13:
  if ( v8 == -1 )
    return;
LABEL_17:
  if ( v8 != v6 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 72LL))(*(_QWORD *)(a1 + 56), v8);
  if ( v8 == 5 )
  {
    v7 = 3;
  }
  else if ( v8 == 6 )
  {
    v7 = 2;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 80LL))(*(_QWORD *)(a1 + 32), v7);
  v14 = 0LL;
  PlaceModePoint = WindowArrangementView::GetPlaceModePoint((__int64)v4, v8, v6, &v14);
  if ( PlaceModePoint >= 0 )
  {
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 32) + 56LL))(*(_QWORD *)(a1 + 32), v14, v10);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1FA,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)PlaceModePoint);
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(*(_QWORD *)(a1 + 32));
  if ( v8 == 7 )
  {
    WindowArrangementView::EnablePlaceModeDropFeedback((__int64)v4, 0, 0LL, 0LL);
    v14 = 0LL;
    v11 = *(_QWORD *)(a1 + 32);
    v12 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    if ( v12(v11, &GUID_959cb746_add4_483a_8acd_059d06f3798a, &v14) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 128LL))(v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  else
  {
    WindowArrangementView::UpdateDropFeedback(v4, v8, v6);
  }
}
