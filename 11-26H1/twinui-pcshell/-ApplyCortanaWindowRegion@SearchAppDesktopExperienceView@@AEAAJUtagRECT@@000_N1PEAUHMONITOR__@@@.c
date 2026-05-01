/*
 * XREFs of ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803C7490
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CB6B4 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801FF4F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18020D524 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18038988C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1803CC0B0 (-RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::ApplyCortanaWindowRegion(
        SearchAppDesktopExperienceView *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        bool a6,
        bool a7)
{
  char v9; // di
  LONG left; // r12d
  int v11; // eax
  LONG top; // r13d
  int v13; // ecx
  HRGN v14; // rbx
  HRGN RectRgnIndirect; // rax
  unsigned int v16; // edi
  __int64 v17; // r9
  __int64 v18; // rdx
  HRGN v19; // rax
  HRGN RectRgn; // rax
  int v21; // eax
  CortanaFlightingHelpers *v22; // rcx
  bool v23; // zf
  struct tagRECT *p_right; // rax
  LONG v25; // edi
  SearchAppDesktopExperienceView *v26; // rcx
  int v27; // r8d
  HRGN v28; // rax
  int v29; // eax
  HRGN v31; // [rsp+30h] [rbp-28h] BYREF
  int v32; // [rsp+38h] [rbp-20h]
  int v33; // [rsp+3Ch] [rbp-1Ch]
  struct tagRECT *v34; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]

  v34 = a4;
  if ( a3->left > 0 || a3->top > 0 || a3->right > 0 || (v9 = 0, a3->bottom > 0) )
    v9 = 1;
  left = a2->left;
  v11 = a2->right - a2->left;
  v32 = v11;
  top = a2->top;
  v13 = a2->bottom - top;
  v33 = v13;
  v14 = 0LL;
  v31 = 0LL;
  if ( v9 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v31,
      RectRgnIndirect);
    v14 = v31;
    if ( !v31 )
    {
      v16 = -2147467259;
      v17 = 2147500037LL;
      v18 = 1418LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)v17);
      goto LABEL_39;
    }
    v11 = v32;
    v13 = v33;
  }
  if ( a6 )
  {
    if ( !a7 )
    {
      if ( !v9 )
      {
        RectRgn = CreateRectRgn(0, 0, v11, v13);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&v31,
          RectRgn);
        v14 = v31;
        if ( !v31 )
        {
          v16 = -2147467259;
          v17 = 2147500037LL;
          v18 = 1438LL;
          goto LABEL_20;
        }
      }
      v21 = SearchAppDesktopExperienceView::RemoveRectFromRegion(
              (SearchAppDesktopExperienceView *)(unsigned int)(v34->bottom - top),
              v14,
              v34->left - left,
              v34->top - top,
              v34->right - left,
              v34->bottom - top);
      v16 = v21;
      if ( v21 >= 0 )
      {
        if ( *((_DWORD *)this + 29) != 1
          && (!*((_BYTE *)this + 204) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(v22) || *((_DWORD *)this + 29))
          || *((_DWORD *)this + 30) == 6 )
        {
          goto LABEL_36;
        }
        v23 = (unsigned int)Mirror_IsThreadRTL() == 0;
        p_right = a5;
        if ( v23 )
          p_right = (struct tagRECT *)&a2->right;
        v25 = p_right->left;
        v27 = (unsigned int)Mirror_IsThreadRTL() ? 0 : a5->right - left;
        v21 = SearchAppDesktopExperienceView::RemoveRectFromRegion(
                v26,
                v14,
                v27,
                v34->top - top,
                v25 - left,
                v34->bottom - top);
        v16 = v21;
        if ( v21 >= 0 )
          goto LABEL_36;
        v18 = 1457LL;
      }
      else
      {
        v18 = 1446LL;
      }
      v17 = (unsigned int)v21;
      goto LABEL_20;
    }
    v19 = CreateRectRgn(a5->left - left, a5->top - top, a5->right - left, a5->bottom - top);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v31,
      v19);
    v14 = v31;
    if ( !v31 )
    {
      v16 = -2147467259;
      v17 = 2147500037LL;
      v18 = 1431LL;
      goto LABEL_20;
    }
  }
  else if ( a7 )
  {
    v28 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v31,
      v28);
    v14 = v31;
    if ( !v31 )
    {
      v16 = -2147467259;
      v17 = 2147500037LL;
      v18 = 1468LL;
      goto LABEL_20;
    }
  }
LABEL_36:
  LOBYTE(a3) = 1;
  v29 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 18) + 144LL))(
          *((_QWORD *)this + 18),
          v14,
          a3);
  if ( v29 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5C0,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v29);
  v16 = 0;
LABEL_39:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&v31);
  return v16;
}
