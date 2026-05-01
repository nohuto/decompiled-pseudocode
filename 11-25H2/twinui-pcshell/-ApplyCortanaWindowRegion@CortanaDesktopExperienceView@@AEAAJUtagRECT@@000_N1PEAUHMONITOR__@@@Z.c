/*
 * XREFs of ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803C7360
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CC0D0 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18020D2B4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18021B240 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180382514 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1803C785C (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1803CCC70 (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v11; // edi
  LONG top; // r12d
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
  CortanaFlightingHelpers *v24; // rcx
  int v25; // r15d
  LONG v26; // edi
  int v27; // edi
  CortanaDesktopExperienceView *v28; // rcx
  int v29; // r8d
  HRGN v30; // rax
  int v31; // eax
  int y2; // [rsp+30h] [rbp-48h]
  int y2a; // [rsp+30h] [rbp-48h]
  int y2b; // [rsp+30h] [rbp-48h]
  HRGN v36; // [rsp+38h] [rbp-40h] BYREF
  int v37; // [rsp+40h] [rbp-38h]
  LONG left; // [rsp+44h] [rbp-34h]
  HMONITOR v39; // [rsp+48h] [rbp-30h]
  struct tagRECT *v40; // [rsp+50h] [rbp-28h]
  struct tagRECT v41; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v40 = a4;
  v39 = a8;
  v10 = a3->left > 0 || a3->top > 0 || a3->right > 0 || a3->bottom > 0;
  left = a2->left;
  v11 = a2->right - left;
  v37 = v11;
  top = a2->top;
  y2 = a2->bottom - top;
  v13 = 0LL;
  v36 = 0LL;
  if ( v10 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v36,
      RectRgnIndirect);
    v13 = v36;
    if ( !v36 )
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
      goto LABEL_49;
    }
  }
  if ( !*((_BYTE *)this + 251) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(this) && *((_DWORD *)this + 36) == 4 )
  {
    RectRgn = CreateRectRgn(0, 0, v11, y2);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v36,
      RectRgn);
    v13 = v36;
    if ( !v36 )
    {
      v15 = -2147467259;
      v16 = 2147500037LL;
      v17 = 1971LL;
      goto LABEL_18;
    }
    v41 = *a2;
    v20 = CortanaDesktopExperienceView::ApplyCortiniWindowRegion(v19, v36, &v41, v39);
    v15 = v20;
    if ( v20 < 0 )
    {
      v17 = 1975LL;
LABEL_17:
      v16 = (unsigned int)v20;
      goto LABEL_18;
    }
    v11 = v37;
  }
  if ( a6 )
  {
    if ( a7 )
    {
      v21 = CreateRectRgn(a5->left - left, a5->top - top, a5->right - left, a5->bottom - top);
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        (void **)&v36,
        v21);
      v13 = v36;
      if ( !v36 )
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
        v22 = CreateRectRgn(0, 0, v11, y2);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&v36,
          v22);
        v13 = v36;
        if ( !v36 )
        {
          v15 = -2147467259;
          v16 = 2147500037LL;
          v17 = 1995LL;
          goto LABEL_18;
        }
      }
      bottom = v40->bottom;
      y2a = v40->top;
      v20 = CortanaDesktopExperienceView::RemoveRectFromRegion(
              (CortanaDesktopExperienceView *)(unsigned int)(bottom - top),
              v13,
              v40->left - a2->left,
              y2a - top,
              v40->right - a2->left,
              bottom - top);
      v15 = v20;
      if ( v20 < 0 )
      {
        v17 = 2003LL;
        goto LABEL_17;
      }
      if ( (*((_DWORD *)this + 35) == 1
         || (*((_BYTE *)this + 251) || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v24)) && !*((_DWORD *)this + 35))
        && *((_DWORD *)this + 36) != 6 )
      {
        v25 = bottom - top;
        v26 = (unsigned int)Mirror_IsThreadRTL() ? a5->left : a2->right;
        v27 = v26 - a2->left;
        y2b = y2a - top;
        v29 = (unsigned int)Mirror_IsThreadRTL() ? 0 : a5->right - a2->left;
        v20 = CortanaDesktopExperienceView::RemoveRectFromRegion(v28, v13, v29, y2b, v27, v25);
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
    v30 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&v36,
      v30);
    v13 = v36;
    if ( !v36 )
    {
      v15 = -2147467259;
      v16 = 2147500037LL;
      v17 = 2025LL;
      goto LABEL_18;
    }
  }
  LOBYTE(a3) = 1;
  v31 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 21) + 144LL))(
          *((_QWORD *)this + 21),
          v13,
          a3);
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7ED,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v31);
  v15 = 0;
LABEL_49:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&v36);
  return v15;
}
