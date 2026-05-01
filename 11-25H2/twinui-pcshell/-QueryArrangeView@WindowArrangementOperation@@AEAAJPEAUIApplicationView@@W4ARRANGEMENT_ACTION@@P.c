/*
 * XREFs of ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1805021EC
 * Callers:
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x180502020 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180502474 (-QueryReplaceView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1805025E0 (-QuerySnapView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW.c)
 *     ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18069CE98 (-_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18069D52C (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementOperation::QueryArrangeView(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v7; // esi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *, _QWORD); // rbx
  int v10; // eax
  int ViewFullScreen; // ebx
  __int64 v12; // rdx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  *a4 = 0;
  v16 = 0;
  switch ( (_DWORD)a3 )
  {
    case 1:
    case 2:
      ViewFullScreen = WindowArrangementOperation::QuerySnapView(a1, a2, a3, &v16);
      if ( ViewFullScreen < 0 )
      {
        v14 = 108LL;
        goto LABEL_19;
      }
      goto LABEL_25;
    case 3:
    case 4:
      ViewFullScreen = WindowArrangementOperation::QueryReplaceView(a1, a2, a3, &v16);
      if ( ViewFullScreen < 0 )
      {
        v14 = 113LL;
        goto LABEL_19;
      }
LABEL_25:
      v7 = v16;
      goto LABEL_26;
    case 5:
      ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
      if ( ViewFullScreen >= 0 )
      {
        v7 = 2;
        goto LABEL_26;
      }
      v14 = 101LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
        (const char *)(unsigned int)ViewFullScreen);
      return (unsigned int)ViewFullScreen;
  }
  if ( (_DWORD)a3 == 6
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 184LL))(*(_QWORD *)(a1 + 64)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 264LL))(*(_QWORD *)(a1 + 64), 4LL);
    v17 = 0LL;
    v8 = *(_QWORD *)(a1 + 64);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v10 = v9(v8, a2, &v17, 0LL);
    ViewFullScreen = v10;
    if ( v10 < 0 )
    {
      v12 = 93LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      return (unsigned int)ViewFullScreen;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 64) + 240LL))(
            *(_QWORD *)(a1 + 64),
            2LL,
            v17);
    ViewFullScreen = v10;
    if ( v10 < 0 )
    {
      v12 = 94LL;
      goto LABEL_14;
    }
    v10 = CAppLayoutOperation::_EvictView(a1 + 24, a2, 2LL);
    ViewFullScreen = v10;
    if ( v10 < 0 )
    {
      v12 = 95LL;
      goto LABEL_14;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  }
LABEL_26:
  *a4 = v7;
  return 0LL;
}
