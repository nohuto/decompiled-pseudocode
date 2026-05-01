/*
 * XREFs of ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x180526BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180525C30 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z @ 0x1805266C8 (-FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F850 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C4C04 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C52EC (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1806C56C8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositionerOperation::ResizeView(
        TabletModePositionerOperation *this,
        struct IApplicationView *a2,
        int a3)
{
  TabletModePositionerOperation *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD); // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  const struct _GUID *v13; // r8
  int AdjacentItem; // eax
  __int64 v15; // rdx
  int v16; // esi
  int v17; // r14d
  int v18; // edi
  enum DEVICE_SCALE_FACTOR v19; // r8d
  int v20; // ebx
  int v21; // eax
  int v22; // edi
  struct IAppLayoutItem *v24; // [rsp+30h] [rbp-59h] BYREF
  void *v25; // [rsp+38h] [rbp-51h] BYREF
  __int64 v26; // [rsp+40h] [rbp-49h] BYREF
  int v27; // [rsp+48h] [rbp-41h]
  signed __int64 v28; // [rsp+50h] [rbp-39h] BYREF
  int v29; // [rsp+58h] [rbp-31h]
  ImmersiveApplicationLayout *v30[2]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v31; // [rsp+70h] [rbp-19h] BYREF
  struct tagSIZE v32[2]; // [rsp+80h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp+7h]
  __int128 v34; // [rsp+98h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v27 = a3;
  v5 = (TabletModePositionerOperation *)((char *)this - 176);
  v28 = ((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176);
  v29 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v28, 1);
  v6 = CAppLayoutOperation::_VerifyAndPrepareLayout((TabletModePositionerOperation *)((char *)this - 152), 0LL, 0);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v24 = 0LL;
    v8 = *((_QWORD *)v5 + 8);
    v9 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD))(*(_QWORD *)v8 + 152LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
    v10 = v9(v8, a2, &v24, 0LL);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = 264LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v10);
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      goto LABEL_22;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this - 14) + 48LL))(*((_QWORD *)this - 14)) )
    {
      v26 = 0LL;
      v12 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v24,
              &v26);
      v7 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x111,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)v12);
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
        goto LABEL_6;
      }
      v25 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      AdjacentItem = TabletModePositionerOperation::FindAdjacentItem(v5, v24, v13, &v25);
      v7 = AdjacentItem;
      if ( AdjacentItem < 0 )
      {
        v15 = 275LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)AdjacentItem);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
        goto LABEL_10;
      }
      v31 = 0LL;
      *(_OWORD *)&v32[0].cx = 0LL;
      v33 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this - 14) + 24LL))(*((_QWORD *)this - 14), &v31);
      v16 = v31;
      v17 = DWORD2(v31);
      v18 = DWORD2(v31) - v31;
      LODWORD(v30[0]) = DWORD2(v31) - v31;
      HIDWORD(v30[0]) = HIDWORD(v31) - DWORD1(v31);
      v20 = ImmersiveApplicationLayout::ComputeGutterWidth(v30[0], (struct tagSIZE)(unsigned int)v32[0].cx, v19);
      v21 = (*(__int64 (__fastcall **)(void *, __int128 *, _QWORD))(*(_QWORD *)v25 + 72LL))(
              v25,
              &v31,
              (unsigned int)(v18 - v20));
      v22 = v27;
      if ( v20 + v27 + v21 > v17 - v16 )
      {
        AdjacentItem = CAppLayoutOperation::_MakeViewFullScreen((char *)this - 152, a2, 5LL);
        v7 = AdjacentItem;
        if ( AdjacentItem < 0 )
        {
          v15 = 300LL;
          goto LABEL_13;
        }
      }
      else
      {
        *(_OWORD *)v30 = 0LL;
        (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, ImmersiveApplicationLayout **))(*(_QWORD *)v24 + 56LL))(
          v24,
          0LL,
          v30);
        LODWORD(v30[1]) = v22 + LODWORD(v30[0]);
        (*(void (__fastcall **)(__int64, _QWORD, ImmersiveApplicationLayout **))(*(_QWORD *)v26 + 104LL))(v26, 0LL, v30);
        v34 = 0LL;
        (*(void (__fastcall **)(void *, _QWORD, __int128 *))(*(_QWORD *)v25 + 104LL))(v25, 0LL, &v34);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    }
    *((_DWORD *)this - 18) = 1;
    v10 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, 0LL);
    v7 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      v7 = 0;
      goto LABEL_22;
    }
    v11 = 305LL;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x104,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v6);
LABEL_22:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v28);
  return v7;
}
