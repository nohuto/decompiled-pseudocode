/*
 * XREFs of ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180352B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801FF4F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18020D524 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x1803486C0 (-GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180355DF4 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::ResetWindowRegion(GamingOverlayExperienceManager *this)
{
  GamingOverlayExperienceManager *v2; // r14
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r9
  int CurrentDisplayCoordinates; // eax
  HRGN RectRgn; // rax
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  int updated; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  HRGN hRgn; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+3Ch] [rbp-34h] BYREF
  int v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+44h] [rbp-2Ch] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+48h] [rbp-28h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v19 = 0LL;
  wil::EnterCriticalSection(&v19, (struct _RTL_CRITICAL_SECTION *)((char *)this + 448));
  v2 = (GamingOverlayExperienceManager *)((char *)this - 136);
  if ( *((_QWORD *)this + 35) )
  {
    v18 = 0;
    v16 = 0;
    v17 = 0;
    v15 = 0;
    CurrentDisplayCoordinates = GamingOverlayExperienceManager::GetCurrentDisplayCoordinates(
                                  this,
                                  &v18,
                                  &v16,
                                  &v17,
                                  &v15);
    v3 = CurrentDisplayCoordinates;
    if ( CurrentDisplayCoordinates < 0 )
    {
      v5 = (unsigned int)CurrentDisplayCoordinates;
      v4 = 514LL;
      goto LABEL_5;
    }
    hRgn = 0LL;
    RectRgn = CreateRectRgn(0, 0, v17 - v18, v15 - v16);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hRgn,
      RectRgn);
    if ( !hRgn )
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x208,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)0x8007000ELL);
LABEL_8:
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hRgn);
      goto LABEL_22;
    }
    v8 = *((_QWORD *)this + 35);
    v21 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    updated = v9(v8, &v21);
    v3 = updated;
    if ( updated >= 0 )
    {
      hWnd = 0LL;
      updated = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v21 + 24LL))(v21, &hWnd);
      v3 = updated;
      if ( updated >= 0 )
      {
        if ( !hWnd )
        {
          v3 = -2147418113;
          v11 = 529LL;
          v12 = 2147549183LL;
          goto LABEL_12;
        }
        if ( !SetWindowRgn(hWnd, hRgn, 1) )
        {
          v3 = -2147467259;
          v11 = 532LL;
          v12 = 2147500037LL;
          goto LABEL_12;
        }
        hRgn = 0LL;
        updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(v2, 1);
        v3 = updated;
        if ( updated >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hRgn);
          v3 = 0;
          goto LABEL_22;
        }
        v11 = 537LL;
      }
      else
      {
        v11 = 528LL;
      }
    }
    else
    {
      v11 = 524LL;
    }
    v12 = (unsigned int)updated;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    goto LABEL_8;
  }
  v3 = -2147418113;
  v4 = 510LL;
  v5 = 2147549183LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)v5);
LABEL_22:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return v3;
}
