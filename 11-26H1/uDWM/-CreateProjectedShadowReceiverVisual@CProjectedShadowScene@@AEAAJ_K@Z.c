/*
 * XREFs of ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180033E4C
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x18003517C (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004AC10 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180062008 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180062A98 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180062DDC (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180066354 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProjectedShadowScene::CreateProjectedShadowReceiverVisual(CProjectedShadowScene *this, __int64 a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, GUID *, __int64); // rdi
  _QWORD *v6; // r15
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 (__fastcall *v10)(__int64, _QWORD, HANDLE *); // rdi
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, char *); // rdi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE hObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+60h] [rbp+18h]

  hObject = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v23 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v4 + 216LL);
  v6 = (_QWORD *)((char *)this + 48);
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((char *)this + 48);
  v8 = v5(v4, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)v4 + 224LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v11 = v10(v4, *v6, &hObject);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v12 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
      v13 = v12(v4, (char *)this + 40);
      v9 = v13;
      if ( v13 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
        v9 = v14;
        if ( v14 >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, *((_QWORD *)this + 5));
          v9 = v15;
          if ( v15 >= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
            v9 = v16;
            if ( v16 >= 0 )
            {
              v17 = CVisual::CreateFromSharedHandle(hObject, (struct CVisual **)this + 7);
              v9 = v17;
              if ( v17 >= 0 )
              {
                v18 = CProjectedShadowScene::PositionProjectedShadowReceiverVisual(this);
                v9 = v18;
                if ( v18 >= 0 )
                {
                  *((_QWORD *)this + 2) = a2;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
                  v9 = 0;
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x79,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
                    (const char *)(unsigned int)v18,
                    v20);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
                }
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x76,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
                  (const char *)(unsigned int)v17,
                  v20);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x73,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
                (const char *)(unsigned int)v16,
                v20);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x72,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
              (const char *)(unsigned int)v15,
              v20);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6F,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
            (const char *)(unsigned int)v14,
            v20);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6E,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
          (const char *)(unsigned int)v13,
          v20);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v11,
        v20);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v8,
      v20);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
  }
  return v9;
}
