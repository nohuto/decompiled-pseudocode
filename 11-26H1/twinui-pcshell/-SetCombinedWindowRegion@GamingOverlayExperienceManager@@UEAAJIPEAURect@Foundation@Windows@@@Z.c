/*
 * XREFs of ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x180353810
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
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180355DF4 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::SetCombinedWindowRegion(
        GamingOverlayExperienceManager *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  GamingOverlayExperienceManager *v8; // r14
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  HRGN RectRgn; // rax
  HRGN v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  unsigned int v18; // edi
  __m128 v19; // xmm2
  float v20; // xmm1_4
  HRGN v21; // rax
  __int64 v22; // rdx
  int updated; // eax
  HRGN hrgnDst; // [rsp+20h] [rbp-30h] BYREF
  HRGN hrgnSrc2; // [rsp+28h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+30h] [rbp-20h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-18h] BYREF
  __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v27 = 0LL;
  wil::EnterCriticalSection(&v27, (struct _RTL_CRITICAL_SECTION *)((char *)this + 448));
  if ( a3 )
  {
    v8 = (GamingOverlayExperienceManager *)((char *)this - 136);
    v9 = *((_QWORD *)this + 35);
    if ( !v9 )
    {
      v6 = -2147418113;
      v7 = 467LL;
      goto LABEL_5;
    }
    v29 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    v11 = v10(v9, &v29);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 471LL;
LABEL_8:
      v13 = (unsigned int)v11;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)v13);
LABEL_10:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
      goto LABEL_32;
    }
    hWnd = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v29 + 24LL))(v29, &hWnd);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 475LL;
      goto LABEL_8;
    }
    if ( !hWnd )
    {
      v6 = -2147418113;
      v12 = 476LL;
      v13 = 2147549183LL;
      goto LABEL_9;
    }
    hrgnDst = 0LL;
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hrgnDst,
      RectRgn);
    v15 = hrgnDst;
    if ( hrgnDst )
    {
      v18 = 0;
      if ( a2 )
      {
        while ( 1 )
        {
          v19 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          hrgnSrc2 = 0LL;
          v20 = _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
          v21 = CreateRectRgn(
                  (int)v19.m128_f32[0],
                  (int)v20,
                  (int)(float)(_mm_shuffle_ps(v19, v19, 170).m128_f32[0] + v19.m128_f32[0]),
                  (int)(float)(_mm_shuffle_ps(v19, v19, 255).m128_f32[0] + v20));
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
            (void **)&hrgnSrc2,
            v21);
          if ( !hrgnSrc2 )
            break;
          if ( !CombineRgn(v15, v15, hrgnSrc2, 2) )
          {
            v6 = -2147467259;
            v22 = 492LL;
            goto LABEL_28;
          }
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
          ++v18;
          a3 = (struct Windows::Foundation::Rect *)((char *)a3 + 16);
          if ( v18 >= a2 )
            goto LABEL_24;
        }
        v6 = -2147024882;
        v22 = 488LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)v6);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
        goto LABEL_19;
      }
LABEL_24:
      if ( SetWindowRgn(hWnd, v15, 1) )
      {
        hrgnDst = 0LL;
        updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(v8, 0);
        v6 = updated;
        if ( updated >= 0 )
        {
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
          v6 = 0;
          goto LABEL_32;
        }
        v17 = (unsigned int)updated;
        v16 = 500LL;
        goto LABEL_18;
      }
      v6 = -2147467259;
      v16 = 495LL;
    }
    else
    {
      v6 = -2147024882;
      v16 = 480LL;
    }
    v17 = v6;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v17);
LABEL_19:
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
    goto LABEL_10;
  }
  v6 = -2147467261;
  v7 = 466LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)v6);
LABEL_32:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v27);
  return v6;
}
