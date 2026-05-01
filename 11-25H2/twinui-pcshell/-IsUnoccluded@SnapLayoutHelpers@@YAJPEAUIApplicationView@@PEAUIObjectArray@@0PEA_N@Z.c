/*
 * XREFs of ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x18012CAC8
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800560EC (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x18057BDE0 (-GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ComputeOcclusionErrorThresholdForView@SnapRectHelpers@@YAHPEAUIApplicationView@@@Z @ 0x18012D4B8 (-ComputeOcclusionErrorThresholdForView@SnapRectHelpers@@YAHPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapLayoutHelpers::IsUnoccluded(
        struct IUnknown *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IApplicationView *a4)
{
  int v8; // ebx
  bool v9; // di
  unsigned int i; // esi
  bool v11; // zf
  __int64 (__fastcall *v12)(struct IApplicationView *, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v13; // rax
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  struct IApplicationView *v17; // rdx
  int v18; // ebx
  struct IUnknown *v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  struct IUnknown *v23; // rcx
  struct IUnknown *v24; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-31h] BYREF
  int v26; // [rsp+3Ch] [rbp-2Dh] BYREF
  RECT rcSrc1; // [rsp+40h] [rbp-29h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-19h] BYREF
  RECT rcSrc2; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_BYTE *)a4 = 0;
  rcSrc2 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, RECT *))this->lpVtbl[5].AddRef)(this, &rcSrc2);
  if ( v8 < 0 )
  {
    v21 = 237LL;
  }
  else
  {
    v25 = 0;
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v25);
    if ( v8 >= 0 )
    {
      v9 = 0;
      for ( i = 0; ; ++i )
      {
        if ( i >= v25 )
          goto LABEL_19;
        v11 = !v9;
        if ( v9 )
          goto LABEL_20;
        v24 = 0LL;
        v12 = *(__int64 (__fastcall **)(struct IApplicationView *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
        v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v24);
        v14 = v12(a2, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v13);
        v8 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF6,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
            (const char *)(unsigned int)v14);
          v23 = v24;
          if ( v24 )
          {
            v24 = 0LL;
            ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
          }
          return (unsigned int)v8;
        }
        if ( SHIsSameObject(v24, this) )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
LABEL_19:
          v11 = !v9;
LABEL_20:
          *(_BYTE *)a4 = v11;
          return 0LL;
        }
        if ( !SHIsSameObject(v24, a3) )
        {
          rcSrc1 = 0LL;
          v26 = 0;
          v15 = ((__int64 (__fastcall *)(struct IUnknown *, RECT *))v24->lpVtbl[5].AddRef)(v24, &rcSrc1);
          v16 = retaddr;
          if ( v15 < 0 )
          {
            v22 = 261LL;
LABEL_25:
            wil::details::in1diag3::_Log_Hr(
              v16,
              (void *)v22,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
              (const char *)(unsigned int)v15);
            goto LABEL_16;
          }
          v15 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v24->lpVtbl[3].Release)(v24, &v26);
          v16 = retaddr;
          if ( v15 < 0 )
          {
            v22 = 262LL;
            goto LABEL_25;
          }
          v9 = 0;
          if ( v26 )
          {
            if ( rcSrc1.left < rcSrc1.right && rcSrc1.top < rcSrc1.bottom )
            {
              v18 = SnapRectHelpers::ComputeOcclusionErrorThresholdForView((SnapRectHelpers *)v24, v17);
              rcDst = 0LL;
              if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
              {
                if ( rcDst.right - rcDst.left > v18 && rcDst.bottom - rcDst.top > v18 )
                  v9 = 1;
              }
            }
          }
        }
LABEL_16:
        v19 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
        }
      }
    }
    v21 = 241LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
