/*
 * XREFs of ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x18034F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017F43C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18018A2D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18020D2B4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18021B240 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180350FFC (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::SetCombinedWindowRegion(
        GamingOverlayExperienceManager *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  HRGN RectRgn; // rax
  HRGN v14; // rbx
  unsigned int v15; // edi
  __m128 v16; // xmm2
  float v17; // xmm1_4
  HRGN v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  int updated; // eax
  unsigned __int64 v22; // r9
  HWND hWnd; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+28h] [rbp-28h] BYREF
  HRGN hrgnDst; // [rsp+30h] [rbp-20h] BYREF
  HRGN hrgnSrc2; // [rsp+38h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v28 = 0LL;
  wil::EnterCriticalSection(&v28, (struct _RTL_CRITICAL_SECTION *)((char *)this + 392));
  if ( a3 )
  {
    v8 = *((_QWORD *)this + 30);
    if ( !v8 )
    {
      v6 = -2147418113;
      v7 = 463LL;
      goto LABEL_5;
    }
    v25 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    v10 = v9(v8, &v25);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 467LL;
LABEL_8:
      v12 = (unsigned int)v10;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)v12);
LABEL_31:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
      goto LABEL_32;
    }
    hWnd = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v25 + 24LL))(v25, &hWnd);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 471LL;
      goto LABEL_8;
    }
    if ( !hWnd )
    {
      v6 = -2147418113;
      v11 = 472LL;
      v12 = 2147549183LL;
      goto LABEL_9;
    }
    hrgnDst = 0LL;
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hrgnDst,
      RectRgn);
    v14 = hrgnDst;
    if ( hrgnDst )
    {
      v15 = 0;
      if ( a2 )
      {
        while ( 1 )
        {
          v16 = (__m128)_mm_loadu_si128((const __m128i *)a3);
          hrgnSrc2 = 0LL;
          v17 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
          v18 = CreateRectRgn(
                  (int)v16.m128_f32[0],
                  (int)v17,
                  (int)(float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] + v16.m128_f32[0]),
                  (int)(float)(_mm_shuffle_ps(v16, v16, 255).m128_f32[0] + v17));
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
            (void **)&hrgnSrc2,
            v18);
          if ( !hrgnSrc2 )
            break;
          if ( !CombineRgn(v14, v14, hrgnSrc2, 2) )
          {
            v6 = -2147467259;
            v20 = 488LL;
            goto LABEL_22;
          }
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
          ++v15;
          a3 = (struct Windows::Foundation::Rect *)((char *)a3 + 16);
          if ( v15 >= a2 )
            goto LABEL_19;
        }
        v6 = -2147024882;
        v20 = 484LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)v6);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
        goto LABEL_30;
      }
LABEL_19:
      if ( SetWindowRgn(hWnd, v14, 1) )
      {
        hrgnDst = 0LL;
        updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
                    (GamingOverlayExperienceManager *)((char *)this - 136),
                    0);
        v6 = updated;
        if ( updated >= 0 )
        {
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v28);
          return 0LL;
        }
        v22 = (unsigned int)updated;
        v19 = 496LL;
        goto LABEL_29;
      }
      v6 = -2147467259;
      v19 = 491LL;
    }
    else
    {
      v6 = -2147024882;
      v19 = 476LL;
    }
    v22 = v6;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v22);
LABEL_30:
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
    goto LABEL_31;
  }
  v6 = -2147467261;
  v7 = 462LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)v6);
LABEL_32:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v28);
  return v6;
}
