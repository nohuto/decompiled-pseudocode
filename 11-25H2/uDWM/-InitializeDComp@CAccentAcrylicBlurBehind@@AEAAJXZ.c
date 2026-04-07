/*
 * XREFs of ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18003FE94
 * Callers:
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x180084130 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003D7C8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18003D7E8 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003E940 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003EA28 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18004059C (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800405E0 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040630 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180071818 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAccentAcrylicBlurBehind::InitializeDComp(CAccentAcrylicBlurBehind *this)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  CGraphicsDeviceManager *v6; // rbx
  __int64 v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, GUID *, __int64 *); // rbx
  _QWORD *v12; // r13
  __int64 *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, HANDLE *); // rbx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, char *); // rdi
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, char *); // rbx
  int v26; // eax
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, __int64 *); // rdi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  HANDLE v43; // rcx
  bool v44; // cc
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rdx
  HANDLE hObject[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  __int64 v62; // [rsp+80h] [rbp+48h] BYREF
  __int64 v63; // [rsp+88h] [rbp+50h] BYREF
  __int64 v64; // [rsp+90h] [rbp+58h] BYREF
  __int64 v65; // [rsp+98h] [rbp+60h] BYREF

  hObject[0] = 0LL;
  v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v3 = *(_QWORD *)(v2 + 32);
  v4 = (_QWORD *)((char *)this + 248);
  if ( *((_QWORD *)this + 31) != v3 )
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*(_QWORD *)(v2 + 32));
    v5 = *v4;
    *v4 = v3;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(v4) )
    goto LABEL_98;
  v6 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  if ( (int)CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v6) < 0 )
    v7 = 0LL;
  else
    v7 = *((_QWORD *)v6 + 4);
  v8 = (__int64 *)((char *)this + 256);
  if ( *((_QWORD *)this + 32) != v7 )
  {
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = *v8;
    *v8 = v7;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>((_QWORD *)this + 32) )
  {
LABEL_98:
    v15 = -2147467259;
    goto LABEL_99;
  }
  if ( !*((_QWORD *)this + 30) )
  {
    v10 = *v4;
    v11 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v4 + 216LL);
    v12 = (_QWORD *)((char *)this + 264);
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)this + 33);
    v14 = v11(v10, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, v13);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A9,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v14,
        (int)hObject[0]);
      v43 = hObject[0];
      v44 = (unsigned __int64)hObject[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL;
LABEL_50:
      if ( v44 )
        CloseHandle(v43);
      return v15;
    }
    v16 = *v4;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)*v4 + 224LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      hObject,
      0LL);
    v18 = v17(v16, *v12, hObject);
    v15 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4AC,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v18,
        (int)hObject[0]);
LABEL_99:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(hObject);
      return v15;
    }
    v62 = 0LL;
    v19 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(v4, &v62);
    v15 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B0,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v19,
        (int)hObject[0]);
LABEL_90:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v62);
      goto LABEL_99;
    }
    v20 = v62;
    v21 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v62 + 176LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
    v22 = v21(v20, (char *)this + 296);
    v15 = v22;
    if ( v22 >= 0 )
    {
      v63 = 0LL;
      v23 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 37,
              &v63);
      v15 = v23;
      if ( v23 < 0 )
      {
        v58 = 1206LL;
      }
      else
      {
        v24 = *v4;
        v25 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v4 + 48LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 34);
        v23 = v25(v24, (char *)this + 272);
        v15 = v23;
        if ( v23 < 0 )
        {
          v58 = 1209LL;
        }
        else
        {
          v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
          v15 = v23;
          if ( v23 >= 0 )
          {
            v65 = 0LL;
            v26 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 34,
                    &v65);
            v15 = v26;
            if ( v26 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4BE,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                (const char *)(unsigned int)v26,
                (int)hObject[0]);
LABEL_96:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
              goto LABEL_89;
            }
            v64 = 0LL;
            v27 = v65;
            v28 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v65 + 360LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v64);
            v29 = v28(v27, &v64);
            v15 = v29;
            if ( v29 < 0 )
            {
              v59 = 1216LL;
LABEL_95:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v59,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                (const char *)(unsigned int)v29,
                (int)hObject[0]);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v64);
              goto LABEL_96;
            }
            v30 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 72LL))(v64, v63);
            v15 = v30;
            if ( v30 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4C1,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                (const char *)(unsigned int)v30,
                (int)hObject[0]);
              v49 = v64;
              if ( v64 )
              {
                v64 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
              }
              v50 = v65;
              if ( v65 )
              {
                v65 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
              }
              v51 = v63;
              if ( v63 )
              {
                v63 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
              }
              v52 = v62;
              if ( v62 )
              {
                v62 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
              }
            }
            else
            {
              v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v12 + 24LL))(*v12, *((_QWORD *)this + 34));
              v15 = v31;
              if ( v31 >= 0 )
              {
                v29 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
                v15 = v29;
                if ( v29 >= 0 )
                {
                  v32 = CVisual::CreateFromSharedHandle(hObject[0], (struct CVisual **)this + 30);
                  v15 = v32;
                  if ( v32 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x4CC,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                      (const char *)(unsigned int)v32,
                      (int)hObject[0]);
                    v39 = v64;
                    if ( v64 )
                    {
                      v64 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
                    }
                    v40 = v65;
                    if ( v65 )
                    {
                      v65 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                    }
                    v41 = v63;
                    if ( v63 )
                    {
                      v63 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
                    }
                    v42 = v62;
                    if ( v62 )
                    {
                      v62 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
                    }
                  }
                  else
                  {
                    v33 = CContainerVisual::AddChild(this, *((struct CVisual **)this + 30));
                    v15 = v33;
                    if ( v33 >= 0 )
                    {
                      v34 = v64;
                      if ( v64 )
                      {
                        v64 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
                      }
                      v35 = v65;
                      if ( v65 )
                      {
                        v65 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                      }
                      v36 = v63;
                      if ( v63 )
                      {
                        v63 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
                      }
                      v37 = v62;
                      if ( v62 )
                      {
                        v62 = 0LL;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
                      }
                      goto LABEL_38;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x4CF,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                      (const char *)(unsigned int)v33,
                      (int)hObject[0]);
                    v45 = v64;
                    if ( v64 )
                    {
                      v64 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
                    }
                    v46 = v65;
                    if ( v65 )
                    {
                      v65 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                    }
                    v47 = v63;
                    if ( v63 )
                    {
                      v63 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
                    }
                    v48 = v62;
                    if ( v62 )
                    {
                      v62 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
                    }
                  }
                  goto LABEL_49;
                }
                v59 = 1222LL;
                goto LABEL_95;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4C4,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                (const char *)(unsigned int)v31,
                (int)hObject[0]);
              v53 = v64;
              if ( v64 )
              {
                v64 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
              }
              v54 = v65;
              if ( v65 )
              {
                v65 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
              }
              v55 = v63;
              if ( v63 )
              {
                v63 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
              }
              v56 = v62;
              if ( v62 )
              {
                v62 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
              }
            }
LABEL_49:
            v43 = hObject[0];
            v44 = (unsigned __int64)hObject[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL;
            goto LABEL_50;
          }
          v58 = 1210LL;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v58,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v23,
        (int)hObject[0]);
LABEL_89:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v63);
      goto LABEL_90;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v22,
      (int)hObject[0]);
    v57 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    goto LABEL_49;
  }
LABEL_38:
  if ( (unsigned __int64)hObject[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(hObject[0]);
  return 0LL;
}
