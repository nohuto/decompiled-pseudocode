/*
 * XREFs of ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180034B94
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x180034928 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003D7C8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18003D7E8 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040630 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180071818 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x18008B2E8 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, char *); // rdi
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE hObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  hObject = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL);
  v18 = v4;
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
      v13 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
      v11 = v13(v4, (char *)this + 40);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
        v9 = v11;
        if ( v11 >= 0 )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, *((_QWORD *)this + 5));
          v9 = v11;
          if ( v11 >= 0 )
          {
            v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
            v9 = v11;
            if ( v11 >= 0 )
            {
              v11 = CVisual::CreateFromSharedHandle(hObject, (struct CVisual **)this + 7);
              v9 = v11;
              if ( v11 >= 0 )
              {
                v11 = CProjectedShadowScene::PositionProjectedShadowReceiverVisual(this);
                v9 = v11;
                if ( v11 >= 0 )
                {
                  *((_QWORD *)this + 2) = a2;
                  v9 = 0;
                  goto LABEL_24;
                }
                v12 = 121LL;
              }
              else
              {
                v12 = 118LL;
              }
            }
            else
            {
              v12 = 115LL;
            }
          }
          else
          {
            v12 = 114LL;
          }
        }
        else
        {
          v12 = 111LL;
        }
      }
      else
      {
        v12 = 110LL;
      }
    }
    else
    {
      v12 = 107LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v11,
      v15);
LABEL_24:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)v8,
    v15);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v9;
}
