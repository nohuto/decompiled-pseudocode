/*
 * XREFs of ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x180507500
 * Callers:
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805090CC (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x180506484 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18051DE74 (-CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall WindowArrangementView::InitDragVisual(
        WindowArrangementView *this,
        struct IUnknown *a2,
        struct tagRECT *a3,
        const struct tagPOINT *a4,
        struct tagRECT *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v14; // eax
  int v15; // eax
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 *v17; // rax
  HRESULT Service; // eax
  struct IAppLayout **v19; // r8
  int v20; // eax
  int v21; // eax
  IUnknown *v22; // rbx
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h] BYREF
  IUnknown **p_punk; // [rsp+38h] [rbp-28h] BYREF
  char v28; // [rsp+40h] [rbp-20h]
  __int128 v29; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  IUnknown *punk; // [rsp+90h] [rbp+30h] BYREF

  v9 = *((_DWORD *)this + 72);
  if ( v9 == 2 )
  {
    v10 = 6;
  }
  else if ( v9 == 3 )
  {
    v10 = 5;
  }
  else
  {
    v10 = *((_DWORD *)this + 73) != 0 ? 1 : 4;
  }
  punk = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  v11 = CDragVisual::CreateInstance(
          v10,
          ((unsigned __int64)this + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          (char *)this + 48,
          &punk);
  v12 = v11;
  if ( v11 >= 0 )
  {
    IUnknown_SetSite(punk, a2);
    p_punk = &punk;
    v28 = 1;
    v24 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    v14 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
            a2,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &v24);
    v12 = v14;
    if ( v14 >= 0 )
    {
      ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[5].Release)(punk, v24);
      ((void (__fastcall *)(IUnknown *))punk->lpVtbl[6].QueryInterface)(punk);
      v15 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[7].Release)(punk);
      v12 = v15;
      if ( v15 >= 0 )
      {
        if ( a3 )
        {
          lpVtbl = punk->lpVtbl;
          v29 = (__int128)*a3;
          ((void (__fastcall *)(IUnknown *, __int128 *))lpVtbl[2].QueryInterface)(punk, &v29);
        }
        ((void (__fastcall *)(IUnknown *, _QWORD))punk->lpVtbl[1].Release)(punk, *a4);
        v26 = 0LL;
        v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v26);
        Service = IUnknown_QueryService(
                    *((IUnknown **)this + 2),
                    &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                    &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                    (void **)v17);
        v12 = Service;
        if ( Service >= 0 )
        {
          v25 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
          v20 = AppLayoutHelpers::BuildSingleViewLayout(
                  *((AppLayoutHelpers **)this + 11),
                  (struct IApplicationView *)&v25,
                  v19);
          v12 = v20;
          if ( v20 >= 0 )
          {
            v21 = ((__int64 (__fastcall *)(IUnknown *, __int64, struct tagRECT *))punk->lpVtbl[3].QueryInterface)(
                    punk,
                    v25,
                    a5);
            v12 = v21;
            if ( v21 >= 0 )
            {
              if ( *((_DWORD *)this + 72) != 2 )
                ((void (__fastcall *)(IUnknown *, _QWORD, _QWORD))punk->lpVtbl[2].AddRef)(punk, *a4, 0LL);
              v22 = punk;
              if ( *((IUnknown **)this + 10) != punk )
              {
                if ( punk )
                  ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
                p_punk = (IUnknown **)*((_QWORD *)this + 10);
                *((_QWORD *)this + 10) = v22;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&p_punk);
              }
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
              v12 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x45D,
                (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
                (const char *)(unsigned int)v21);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
              ((void (__fastcall *)(IUnknown *, __int64, _QWORD))punk->lpVtbl[1].AddRef)(punk, 4LL, 0LL);
              IUnknown_SetSite(punk, 0LL);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x45B,
              (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
              (const char *)(unsigned int)v20);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
            ((void (__fastcall *)(IUnknown *, __int64, _QWORD))punk->lpVtbl[1].AddRef)(punk, 4LL, 0LL);
            IUnknown_SetSite(punk, 0LL);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x458,
            (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
            (const char *)(unsigned int)Service);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
          ((void (__fastcall *)(IUnknown *, __int64, _QWORD))punk->lpVtbl[1].AddRef)(punk, 4LL, 0LL);
          IUnknown_SetSite(punk, 0LL);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44F,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        ((void (__fastcall *)(IUnknown *, __int64, _QWORD))punk->lpVtbl[1].AddRef)(punk, 4LL, 0LL);
        IUnknown_SetSite(punk, 0LL);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44B,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      ((void (__fastcall *)(IUnknown *, __int64, _QWORD))punk->lpVtbl[1].AddRef)(punk, 4LL, 0LL);
      IUnknown_SetSite(punk, 0LL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x440,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  return v12;
}
