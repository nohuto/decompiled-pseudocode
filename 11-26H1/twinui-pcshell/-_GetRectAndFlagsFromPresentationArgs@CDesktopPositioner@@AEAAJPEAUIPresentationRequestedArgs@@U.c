/*
 * XREFs of ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18008C738
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18008E1BC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180510FD0 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800AF4A0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802A3984 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1802C3C54 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1804EA654 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     ?_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1805121A4 (-_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4.c)
 *     ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x180512DE4 (-_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x180513AB4 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
        CDesktopPositioner *this,
        struct IPresentationRequestedArgs *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        enum TRY_POSITION_VIEW_FLAGS *a5,
        struct IImmersiveMonitor **a6)
{
  CDesktopPositioner *v8; // r13
  int v10; // esi
  __m128i v11; // xmm6
  int MonitorFromRect; // eax
  unsigned int v13; // ebx
  int v14; // eax
  LONG v15; // ecx
  LONG v16; // edx
  int v17; // r15d
  int v18; // r12d
  int (__fastcall *v19)(struct IPresentationRequestedArgs *, struct IApplicationView **); // rbx
  __int64 v20; // rax
  struct IApplicationView *v21; // rbx
  int (__fastcall *v22)(struct IApplicationView *, struct IUnknown **); // rdi
  LONG left; // edi
  LONG top; // r13d
  int v25; // eax
  __int64 v26; // rdx
  BOOL v27; // ebx
  CDesktopPositioner *v28; // rcx
  CDesktopPositioner *v29; // rcx
  __int64 v30; // rbx
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // eax
  int (__fastcall *v32)(struct IPresentationRequestedArgs *, __int64 *); // rbx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, _QWORD, struct IUnknown **); // rdi
  int v42; // eax
  __int64 v43; // rdx
  BOOL v44; // edi
  CDesktopPositioner *v45; // rcx
  LONG cx; // r15d
  LONG cy; // r12d
  struct IUnknown *v48; // rcx
  CDesktopPositioner *v49; // rcx
  LONG v50; // edi
  LONG v51; // esi
  struct tagRECT *v52; // [rsp+20h] [rbp-E0h]
  struct tagRECT *v53; // [rsp+40h] [rbp-C0h] BYREF
  struct IApplicationView *v54; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v55; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v58[2]; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v60; // [rsp+90h] [rbp-70h] BYREF
  struct IUnknown *v61; // [rsp+98h] [rbp-68h] BYREF
  struct tagSIZE v62; // [rsp+A0h] [rbp-60h] BYREF
  struct tagSIZE v63; // [rsp+B0h] [rbp-50h] BYREF
  struct IUnknown *v64; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-38h] BYREF
  int v67; // [rsp+D0h] [rbp-30h] BYREF
  int v68; // [rsp+D4h] [rbp-2Ch] BYREF
  int v69; // [rsp+D8h] [rbp-28h] BYREF
  bool v70[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+E8h] [rbp-18h] BYREF
  struct IUnknown **v72; // [rsp+F0h] [rbp-10h]
  enum TRY_POSITION_VIEW_FLAGS *v73; // [rsp+F8h] [rbp-8h]
  struct tagRECT *v74; // [rsp+100h] [rbp+0h]
  struct tagRECT *v75[2]; // [rsp+108h] [rbp+8h] BYREF
  struct tagRECT v76; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v77; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v78; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v74 = a4;
  v75[0] = a3;
  v8 = this;
  *(_QWORD *)&v55.right = this;
  v73 = a5;
  v72 = (struct IUnknown **)a6;
  *a4 = 0LL;
  *(_DWORD *)a5 = 0;
  *a6 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v10 = 0;
  HIDWORD(v53) = 0;
  v11 = *(__m128i *)a3;
  v59 = *a3;
  v58[0] = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v58);
  MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(v8, a3, (struct IImmersiveMonitor **)v58);
  v13 = MonitorFromRect;
  if ( MonitorFromRect >= 0 )
  {
    v71 = 0LL;
    LOBYTE(v53) = 0;
    v14 = (*(__int64 (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v71);
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
    v63.cx = v15;
    v16 = _mm_cvtsi128_si32(v11);
    v62.cx = v16;
    if ( v14 < 0 )
    {
      v18 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12));
      v17 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
    }
    else
    {
      v17 = v16 + v71;
      v59.right = v16 + v71;
      v18 = v15 + HIDWORD(v71);
      v59.bottom = v15 + HIDWORD(v71);
      v10 = 15;
      HIDWORD(v53) = 15;
      LOBYTE(v53) = 1;
      v11 = (__m128i)v59;
    }
    v66 = 0LL;
    v54 = 0LL;
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v66) >= 0 )
    {
      v19 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, struct IApplicationView **))(*(_QWORD *)a2 + 64LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v54);
      if ( v19(a2, &v54) >= 0 )
      {
        v67 = 0;
        if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)a2 + 96LL))(a2, &v67) < 0
          || v67 )
        {
          v10 |= 2u;
          HIDWORD(v53) = v10;
        }
        v68 = 0;
        v65 = 0LL;
        v76 = 0LL;
        v61 = 0LL;
        v78 = 0LL;
        v20 = *(_QWORD *)v54;
        v65 = 0LL;
        if ( (*(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(v20 + 104))(
               v54,
               &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
               &v65) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v65 + 32LL))(v65, &v68) >= 0
          && v68 == 2
          && (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v65 + 24LL))(v65, &v76) >= 0 )
        {
          v21 = v54;
          v22 = *(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)v54 + 80LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v61);
          if ( v22(v21, &v61) >= 0
            && ((int (__fastcall *)(struct IUnknown *, struct tagRECT *))v61->lpVtbl[3].QueryInterface)(v61, &v78) >= 0 )
          {
            left = v17 - v62.cx;
            v55.left = v17 - v62.cx;
            top = v18 - v63.cx;
            v55.top = v18 - v63.cx;
            v69 = 0;
            v64 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v64);
            v25 = CDesktopPositioner::_GetMonitorFromRect(
                    *(CDesktopPositioner **)&v55.right,
                    v75[0],
                    (struct IImmersiveMonitor **)&v64);
            v13 = v25;
            if ( v25 < 0 )
            {
              v26 = 3018LL;
LABEL_21:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v26,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v25);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v64);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v61);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v65);
LABEL_22:
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v54);
              goto LABEL_86;
            }
            v27 = SHIsSameObject(v61, v64);
            wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
              (__int64 *)v58,
              (__int64)v61);
            if ( !v27 && !(_BYTE)v53 )
            {
              v25 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                      v28,
                      (struct IImmersiveMonitor *)v64,
                      (struct IImmersiveMonitor *)v61,
                      (struct tagSIZE *)&v55,
                      (enum TRY_POSITION_VIEW_FLAGS *)((char *)&v53 + 4));
              v13 = v25;
              if ( v25 < 0 )
              {
                v26 = 3027LL;
                goto LABEL_21;
              }
              v10 = HIDWORD(v53);
              top = v55.top;
              left = v55.left;
            }
            if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)a2 + 104LL))(a2, &v69) >= 0
              && v69 )
            {
              v60 = 0;
              *(_QWORD *)v70 = 0LL;
              v77 = 0LL;
              v56 = 0LL;
              if ( (*(int (__fastcall **)(struct IApplicationView *, unsigned int *))(*(_QWORD *)v54 + 392LL))(
                     v54,
                     &v60) >= 0 )
              {
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
                if ( CDesktopPositioner::_CreateTitlebarConfiguration(
                       v29,
                       v54,
                       (struct IApplicationViewTitlebarConfiguration **)&v56) >= 0 )
                {
                  v30 = *(_QWORD *)&v55.right;
                  if ( (*(int (__fastcall **)(_QWORD, struct IUnknown *, _QWORD, __int64, int, struct IUnknown *, struct tagRECT *))(**(_QWORD **)(*(_QWORD *)&v55.right + 288LL) + 72LL))(
                         *(_QWORD *)(*(_QWORD *)&v55.right + 288LL),
                         v61,
                         0LL,
                         1LL,
                         1,
                         v56,
                         &v77) >= 0
                    && (*(int (__fastcall **)(struct IApplicationView *, bool *))(*(_QWORD *)v54 + 136LL))(v54, v70) >= 0 )
                  {
                    LOBYTE(v52) = v60 != 0;
                    v11 = *(__m128i *)WindowRelativePositioning::GetAdjacentPosition(
                                        (WindowRelativePositioning *)&v59,
                                        &v76,
                                        &v55,
                                        (const struct tagSIZE *)&v77,
                                        v52,
                                        v70[0],
                                        *(const unsigned __int16 **)(v30 + 296),
                                        &v78,
                                        v53);
                    v59 = (struct tagRECT)v11;
                    v10 |= 1u;
                    HIDWORD(v53) = v10;
                    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12));
                    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
                    v63.cx = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
                    v62.cx = _mm_cvtsi128_si32(v11);
                  }
                }
              }
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
            }
            else
            {
              ScaleFactorForRect = GetScaleFactorForRect(&v78);
              v62.cx = v76.left - (int)(float)((float)(ScaleFactorForRect * v66) / -100.0);
              v59.left = v62.cx;
              v63.cx = v76.top - (int)(float)((float)(ScaleFactorForRect * HIDWORD(v66)) / -100.0);
              v59.top = v63.cx;
              v17 = v62.cx + left;
              v59.right = v62.cx + left;
              v18 = v63.cx + top;
              v59.bottom = v63.cx + top;
              v10 |= 1u;
              HIDWORD(v53) = v10;
              v11 = (__m128i)v59;
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v64);
            v8 = *(CDesktopPositioner **)&v55.right;
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v61);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v65);
      }
    }
    v57 = 0LL;
    v32 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
    if ( v32(a2, &v57) < 0 )
      goto LABEL_72;
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v55,
      v57);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
      &v55,
      &v55.right);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55.left);
    v60 = 0;
    v33 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v55.right + 56LL))(
            *(_QWORD *)&v55.right,
            &v60);
    v13 = v33;
    if ( v33 < 0 )
    {
      v34 = 3077LL;
LABEL_42:
      v35 = (unsigned int)v33;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v35);
LABEL_44:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55.right);
LABEL_45:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
      goto LABEL_22;
    }
    if ( !v60 )
    {
LABEL_71:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55.right);
LABEL_72:
      v48 = v58[0];
      if ( v58[0] )
      {
        *v72 = v58[0];
        ((void (__fastcall *)(struct IUnknown *))v48->lpVtbl->AddRef)(v48);
      }
      else
      {
        *v72 = 0LL;
      }
      *(_DWORD *)v73 = v10;
      *v74 = (struct tagRECT)v11;
      if ( v10 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v54);
        v13 = 0;
        goto LABEL_86;
      }
      v13 = -2147467260;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC50,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)0x80004004LL);
      goto LABEL_45;
    }
    if ( v60 > 1 )
    {
      v13 = -2147024809;
      v35 = 2147942487LL;
      v34 = 3081LL;
      goto LABEL_43;
    }
    *(_DWORD *)v70 = 0;
    v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool *))(**(_QWORD **)&v55.right + 48LL))(
            *(_QWORD *)&v55.right,
            0LL,
            v70);
    v13 = v33;
    if ( v33 < 0 )
    {
      v34 = 3084LL;
      goto LABEL_42;
    }
    *(_QWORD *)&v55.left = 0LL;
    v36 = (__int64 *)*((_QWORD *)v8 + 42);
    v37 = *v36;
    *(_QWORD *)&v55.left = 0LL;
    v38 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct tagRECT *))(v37 + 32))(v36, 1LL, &v55);
    v13 = v38;
    if ( v38 < 0 )
    {
      v39 = 3087LL;
LABEL_53:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v39,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v38);
LABEL_54:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55.left);
      goto LABEL_44;
    }
    v40 = *(_QWORD *)&v55.left;
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(**(_QWORD **)&v55.left + 88LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v58);
    v38 = v41(v40, *(unsigned int *)v70, v58);
    v13 = v38;
    if ( v38 < 0 )
    {
      v39 = 3088LL;
      goto LABEL_53;
    }
    v56 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
    v42 = CDesktopPositioner::_GetMonitorFromRect(v8, v75[0], (struct IImmersiveMonitor **)&v56);
    v13 = v42;
    if ( v42 < 0 )
    {
      v43 = 3091LL;
LABEL_59:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v43,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v42);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
      goto LABEL_54;
    }
    v44 = SHIsSameObject(v58[0], v56);
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v66) < 0 )
    {
      if ( v44 )
        goto LABEL_70;
      v77 = (struct tagRECT)v11;
      v42 = CDesktopPositioner::_MoveRectToMonitor(v8, (struct IImmersiveMonitor *)v58[0], &v77, &v59);
      v13 = v42;
      if ( v42 < 0 )
      {
        v43 = 3128LL;
        goto LABEL_59;
      }
      v10 |= 3u;
      HIDWORD(v53) = v10;
      if ( (_BYTE)v53 )
      {
        v11 = (__m128i)v59;
        goto LABEL_70;
      }
      v50 = v59.left;
      v63.cx = v59.right - v59.left;
      v51 = v59.top;
      v63.cy = v59.bottom - v59.top;
      v42 = CDesktopPositioner::_AdjustSizeForMonitorChange(
              v49,
              (struct IImmersiveMonitor *)v56,
              (struct IImmersiveMonitor *)v58[0],
              &v63,
              (enum TRY_POSITION_VIEW_FLAGS *)((char *)&v53 + 4));
      v13 = v42;
      if ( v42 < 0 )
      {
        v43 = 3136LL;
        goto LABEL_59;
      }
      v59.right = v50 + v63.cx;
      v59.bottom = v51 + v63.cy;
      v10 = HIDWORD(v53);
    }
    else
    {
      *(_OWORD *)v75 = 0LL;
      v42 = ((__int64 (__fastcall *)(struct IUnknown *, struct tagRECT **))v58[0]->lpVtbl[3].Release)(v58[0], v75);
      v13 = v42;
      if ( v42 < 0 )
      {
        v43 = 3098LL;
        goto LABEL_59;
      }
      cx = v17 - v62.cx;
      v62.cx = cx;
      cy = v18 - v63.cx;
      v62.cy = cy;
      if ( !v44 && !(_BYTE)v53 )
      {
        v42 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                v45,
                (struct IImmersiveMonitor *)v56,
                (struct IImmersiveMonitor *)v58[0],
                &v62,
                (enum TRY_POSITION_VIEW_FLAGS *)((char *)&v53 + 4));
        v13 = v42;
        if ( v42 < 0 )
        {
          v43 = 3111LL;
          goto LABEL_59;
        }
        v10 = HIDWORD(v53);
        cy = v62.cy;
        cx = v62.cx;
      }
      v59.left = v66 + LODWORD(v75[0]);
      v59.top = HIDWORD(v66) + HIDWORD(v75[0]);
      v59.right = cx + v66 + LODWORD(v75[0]);
      v59.bottom = cy + HIDWORD(v66) + HIDWORD(v75[0]);
      v10 |= 3u;
    }
    v11 = (__m128i)v59;
LABEL_70:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55.left);
    goto LABEL_71;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB91,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)MonitorFromRect);
LABEL_86:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v58);
  return v13;
}
