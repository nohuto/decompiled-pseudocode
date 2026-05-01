/*
 * XREFs of ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803D0DA0
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D5B64 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801FF4F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18020D524 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18038988C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1803D1298 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1803D6720 (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegion(
        CortanaDesktopExperienceView *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        bool a6,
        bool a7,
        HMONITOR a8)
{
  bool v10; // r15
  LONG left; // edi
  LONG top; // r13d
  HRGN v13; // rbx
  HRGN RectRgnIndirect; // rax
  unsigned int v15; // edi
  __int64 v16; // r9
  __int64 v17; // rdx
  HRGN RectRgn; // rax
  CortanaDesktopExperienceView *v19; // rcx
  int v20; // eax
  HRGN v21; // rax
  HRGN v22; // rax
  LONG bottom; // r15d
  LONG v24; // r13d
  CortanaFlightingHelpers *v25; // rcx
  bool v26; // zf
  struct tagRECT *p_right; // rax
  LONG v28; // edi
  CortanaDesktopExperienceView *v29; // rcx
  int v30; // r8d
  HRGN v31; // rax
  int v32; // eax
  HRGN v34; // [rsp+30h] [rbp-38h] BYREF
  int y2; // [rsp+38h] [rbp-30h]
  int x2; // [rsp+3Ch] [rbp-2Ch]
  HMONITOR v37; // [rsp+40h] [rbp-28h]
  struct tagRECT *v38; // [rsp+48h] [rbp-20h]
  struct tagRECT v39; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]

  v38 = a4;
  v37 = a8;
  v10 = a3->left > 0 || a3->top > 0 || a3->right > 0 || a3->bottom > 0;
  left = a2->left;
  x2 = a2->right - a2->left;
  top = a2->top;
  y2 = a2->bottom - top;
  v13 = 0LL;
  v34 = 0LL;
  if ( v10 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v34,
      RectRgnIndirect);
    v13 = v34;
    if ( !v34 )
    {
      v15 = -2147467259;
      v16 = 2147500037LL;
      v17 = 1962LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)v16);
      goto LABEL_48;
    }
  }
  if ( !*((_BYTE *)this + 251) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(this) && *((_DWORD *)this + 36) == 4 )
  {
    RectRgn = CreateRectRgn(0, 0, x2, y2);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v34,
      RectRgn);
    v13 = v34;
    if ( !v34 )
    {
      v15 = -2147467259;
      v16 = 2147500037LL;
      v17 = 1971LL;
      goto LABEL_18;
    }
    v39 = *a2;
    v20 = CortanaDesktopExperienceView::ApplyCortiniWindowRegion(v19, v34, &v39, v37);
    v15 = v20;
    if ( v20 < 0 )
    {
      v17 = 1975LL;
LABEL_17:
      v16 = (unsigned int)v20;
      goto LABEL_18;
    }
    left = a2->left;
  }
  if ( a6 )
  {
    if ( a7 )
    {
      v21 = CreateRectRgn(a5->left - left, a5->top - top, a5->right - left, a5->bottom - top);
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        (void **)&v34,
        v21);
      v13 = v34;
      if ( !v34 )
      {
        v15 = -2147467259;
        v16 = 2147500037LL;
        v17 = 1988LL;
        goto LABEL_18;
      }
    }
    else
    {
      if ( !v10 && *((_DWORD *)this + 36) != 4 )
      {
        v22 = CreateRectRgn(0, 0, x2, y2);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&v34,
          v22);
        v13 = v34;
        if ( !v34 )
        {
          v15 = -2147467259;
          v16 = 2147500037LL;
          v17 = 1995LL;
          goto LABEL_18;
        }
      }
      bottom = v38->bottom;
      v24 = v38->top;
      v20 = CortanaDesktopExperienceView::RemoveRectFromRegion(
              (CortanaDesktopExperienceView *)(unsigned int)(bottom - a2->top),
              v13,
              v38->left - left,
              v24 - a2->top,
              v38->right - left,
              bottom - a2->top);
      v15 = v20;
      if ( v20 < 0 )
      {
        v17 = 2003LL;
        goto LABEL_17;
      }
      if ( (*((_DWORD *)this + 35) == 1
         || (*((_BYTE *)this + 251) || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v25)) && !*((_DWORD *)this + 35))
        && *((_DWORD *)this + 36) != 6 )
      {
        v26 = (unsigned int)Mirror_IsThreadRTL() == 0;
        p_right = a5;
        if ( v26 )
          p_right = (struct tagRECT *)&a2->right;
        v28 = p_right->left;
        v30 = (unsigned int)Mirror_IsThreadRTL() ? 0 : a5->right - a2->left;
        v20 = CortanaDesktopExperienceView::RemoveRectFromRegion(
                v29,
                v13,
                v30,
                v24 - a2->top,
                v28 - a2->left,
                bottom - a2->top);
        v15 = v20;
        if ( v20 < 0 )
        {
          v17 = 2014LL;
          goto LABEL_17;
        }
      }
    }
  }
  else if ( a7 )
  {
    v31 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v34,
      v31);
    v13 = v34;
    if ( !v34 )
    {
      v15 = -2147467259;
      v16 = 2147500037LL;
      v17 = 2025LL;
      goto LABEL_18;
    }
  }
  LOBYTE(a3) = 1;
  v32 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 21) + 144LL))(
          *((_QWORD *)this + 21),
          v13,
          a3);
  if ( v32 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7ED,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v32);
  v15 = 0;
LABEL_48:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&v34);
  return v15;
}
