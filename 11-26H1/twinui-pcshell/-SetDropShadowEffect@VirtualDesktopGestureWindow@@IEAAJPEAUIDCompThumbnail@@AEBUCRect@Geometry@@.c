/*
 * XREFs of ?SetDropShadowEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@@Z @ 0x18056291C
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x180262DFC (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E664 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall VirtualDesktopGestureWindow::SetDropShadowEffect(
        VirtualDesktopGestureWindow *this,
        struct IDCompThumbnail *a2,
        const struct Geometry::CRect *a3)
{
  int v4; // r15d
  int v5; // r12d
  __int64 v6; // rax
  __int64 *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64); // rsi
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v29; // [rsp+20h] [rbp-50h] BYREF
  __int64 v30; // [rsp+28h] [rbp-48h] BYREF
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 **); // [rsp+38h] [rbp-38h] BYREF
  __int64 v33; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v34; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v35[12]; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v36; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v37; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v39; // [rsp+C0h] [rbp+50h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+C8h] [rbp+58h] BYREF

  v4 = *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5));
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(&v37, v6);
  v36 = 0LL;
  v7 = v37;
  v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 **))*v37)(
         v37,
         &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0,
         &v36);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v39 = 0LL;
    v10 = *v36;
    v39 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 80))(v36, &v39);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 891LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v11);
LABEL_6:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
      goto LABEL_45;
    }
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 56LL))(v39);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 892LL;
      goto LABEL_5;
    }
    *(_DWORD *)v35 = 0;
    *(_QWORD *)&v35[4] = 1105199104LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v39 + 104LL))(v39, v35);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 893LL;
      goto LABEL_5;
    }
    v13 = v39;
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 120LL);
    ShouldSystemUseDarkMode();
    v11 = v14(v13);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 894LL;
      goto LABEL_5;
    }
    v29 = 0LL;
    v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v39)(
            v39,
            &GUID_329e52e2_4335_49cc_b14a_37782d10f0c4,
            &v29);
    v9 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x380,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v15);
LABEL_15:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
      goto LABEL_6;
    }
    v40 = 0LL;
    v16 = *v7;
    v40 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v16 + 176))(
            v7,
            &v40);
    v9 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x383,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v17);
LABEL_18:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v40);
      goto LABEL_15;
    }
    v31 = 0LL;
    v18 = (**v40)(v40, &GUID_588c9664_997a_4850_91fe_53cb58f81ce9, &v31);
    v9 = v18;
    if ( v18 < 0 )
    {
      v19 = 901LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v18);
LABEL_22:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
      goto LABEL_18;
    }
    v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 56LL))(v31, v29);
    v9 = v18;
    if ( v18 < 0 )
    {
      v19 = 902LL;
      goto LABEL_21;
    }
    v30 = 0LL;
    v20 = (**v40)(v40, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, &v30);
    v9 = v20;
    if ( v20 >= 0 )
    {
      *(_QWORD *)v35 = _mm_unpacklo_ps(
                         _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)(v4 / 2)), (__m128)_xmm),
                         _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)(v5 / 2)), (__m128)_xmm)).m128_u64[0];
      *(_DWORD *)&v35[8] = 0;
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 168LL))(v30, v35);
      v9 = v20;
      if ( v20 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 288LL))(
                v30,
                _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v4), (__m128)COERCE_UNSIGNED_INT((float)v5)).m128_u64[0]);
        v9 = v20;
        if ( v20 >= 0 )
        {
          v22 = *(_QWORD *)a2;
          v32 = 0LL;
          v23 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v22 + 104))(
                  a2,
                  &v32);
          v9 = v23;
          if ( v23 >= 0 )
          {
            v34 = 0LL;
            v24 = (**v32)(v32, &GUID_fe93b735_e574_4a5d_a21a_f705c21945fa, &v34);
            v9 = v24;
            if ( v24 >= 0 )
            {
              v33 = 0LL;
              v25 = *v34;
              v33 = 0LL;
              v26 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v25 + 360))(v34, &v33);
              v9 = v26;
              if ( v26 >= 0 )
              {
                v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 64LL))(v33, v30);
                v9 = v26;
                if ( v26 >= 0 )
                {
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v33);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v40);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
                  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
                  v9 = 0;
                  goto LABEL_45;
                }
                v27 = 917LL;
              }
              else
              {
                v27 = 916LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v27,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                (const char *)(unsigned int)v26);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v33);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x392,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                (const char *)(unsigned int)v24);
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x390,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              (const char *)(unsigned int)v23);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
          goto LABEL_28;
        }
        v21 = 908LL;
      }
      else
      {
        v21 = 907LL;
      }
    }
    else
    {
      v21 = 906LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v20);
LABEL_28:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x378,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v8);
LABEL_45:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v36);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
  return v9;
}
