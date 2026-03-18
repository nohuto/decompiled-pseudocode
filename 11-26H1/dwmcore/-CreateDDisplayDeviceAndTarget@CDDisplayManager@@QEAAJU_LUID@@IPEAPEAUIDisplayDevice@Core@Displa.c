/*
 * XREFs of ?CreateDDisplayDeviceAndTarget@CDDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDisplayDevice@Core@Display@Devices@Windows@@PEAPEAUIDisplayTarget@4567@@Z @ 0x18029DA24
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z @ 0x18025CCFC (-Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::CreateDDisplayDeviceAndTarget(
        CDDisplayManager *this,
        struct _LUID a2,
        int a3,
        struct Windows::Devices::Display::Core::IDisplayDevice **a4,
        struct Windows::Devices::Display::Core::IDisplayTarget **a5)
{
  int v5; // esi
  DWORD LowPart; // edi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int ActivationFactory; // eax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r13d
  __int64 v18; // rbx
  char v19; // r15
  unsigned int i; // r14d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  int v31[2]; // [rsp+20h] [rbp-81h] BYREF
  __int64 *v32; // [rsp+28h] [rbp-79h] BYREF
  __int64 *v33; // [rsp+30h] [rbp-71h] BYREF
  __int64 v34; // [rsp+38h] [rbp-69h] BYREF
  __int64 *v35; // [rsp+40h] [rbp-61h] BYREF
  __int64 v36; // [rsp+48h] [rbp-59h] BYREF
  __int64 v37; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-49h] BYREF
  int v39; // [rsp+5Ch] [rbp-45h] BYREF
  __int64 v40; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-39h]
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 **); // [rsp+70h] [rbp-31h] BYREF
  HSTRING string; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v44[2]; // [rsp+80h] [rbp-21h] BYREF
  struct Windows::Devices::Display::Core::IDisplayDevice **v45; // [rsp+90h] [rbp-11h]
  struct Windows::Devices::Display::Core::IDisplayTarget **v46; // [rsp+98h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = 0;
  *a4 = 0LL;
  v45 = a4;
  LowPart = a2.LowPart;
  v41 = (unsigned __int64)a2;
  *a5 = 0LL;
  v46 = a5;
  if ( a3 != -1 )
  {
    string = 0LL;
    memset(&hstringHeader, 0, sizeof(hstringHeader));
    v8 = WindowsCreateStringReference(L"Windows.Devices.Display.Core.DisplayManager", 0x2Bu, &hstringHeader, &string);
    if ( (v8 & 0x80000000) != 0 )
    {
      v9 = 151LL;
      goto LABEL_3;
    }
    v42 = 0LL;
    ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, &v42);
    v8 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v32 = 0LL;
      v11 = (**v42)(v42, &GUID_2b6b9446_b999_5535_9d69_53f092c780a1, &v32);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v12 = *v32;
        *(_QWORD *)v31 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, int *))(v12 + 48))(v32, 0LL, v31);
        v8 = v13;
        if ( v13 >= 0 )
        {
          v14 = **(_QWORD **)v31;
          v33 = 0LL;
          v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(v14 + 48))(*(_QWORD *)v31, &v33);
          v8 = v15;
          if ( v15 >= 0 )
          {
            v38 = 0;
            v15 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v33 + 56))(v33, &v38);
            v8 = v15;
            if ( v15 >= 0 )
            {
              v17 = HIDWORD(v41);
              v18 = 0LL;
              v36 = 0LL;
              v19 = 0;
              v34 = 0LL;
              for ( i = 0; ; ++i )
              {
                if ( i >= v38 )
                {
                  if ( v19 )
                  {
LABEL_46:
                    v26 = **(_QWORD **)v31;
                    v40 = 0LL;
                    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(v26 + 112))(*(_QWORD *)v31, v18, &v40);
                    v8 = v27;
                    if ( v27 >= 0 )
                    {
                      v28 = v40;
                      v40 = 0LL;
                      *v45 = (struct Windows::Devices::Display::Core::IDisplayDevice *)v28;
                      v29 = v34;
                      v34 = 0LL;
                      *v46 = (struct Windows::Devices::Display::Core::IDisplayTarget *)v29;
                      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v40);
                      goto LABEL_49;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0xCE,
                      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
                      (const char *)(unsigned int)v27);
                    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v40);
                  }
                  else
                  {
                    v8 = -2147024809;
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0xC9,
                      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
                      (const char *)0x80070057LL);
                  }
                  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
                  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
                  goto LABEL_17;
                }
                if ( v19 )
                  goto LABEL_46;
                v21 = *v33;
                v35 = 0LL;
                v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v21 + 48))(v33, i, &v35);
                if ( v5 < 0 )
                  break;
                v39 = 0;
                v5 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v35 + 64))(v35, &v39);
                if ( v5 < 0 )
                {
                  v25 = 179LL;
                  goto LABEL_41;
                }
                if ( v39 == a3 )
                {
                  v22 = *v35;
                  v37 = 0LL;
                  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v22 + 48))(v35, &v37);
                  if ( v5 < 0 )
                  {
                    v24 = 184LL;
                    goto LABEL_37;
                  }
                  v44[0] = 0LL;
                  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v37 + 48LL))(v37, v44);
                  if ( v5 < 0 )
                  {
                    v24 = 187LL;
LABEL_37:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v24,
                      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
                      (const char *)(unsigned int)v5);
                    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
                    goto LABEL_38;
                  }
                  v44[1] = v44[0];
                  v41 = __PAIR64__(v17, LowPart);
                  if ( __PAIR64__(v17, LowPart) == v44[0] )
                  {
                    v23 = v18;
                    v19 = 1;
                    v18 = v37;
                    v36 = v37;
                    if ( v37 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
                    if ( v23 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
                    wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
                      &v34,
                      (__int64 *)&v35);
                  }
                  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
                }
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
                v5 = 0;
              }
              v25 = 176LL;
LABEL_41:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v25,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
                (const char *)(unsigned int)v5);
LABEL_38:
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_49:
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v31);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
              v8 = v5;
              goto LABEL_50;
            }
            v16 = 167LL;
          }
          else
          {
            v16 = 164LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
            (const char *)(unsigned int)v15);
LABEL_17:
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA1,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
            (const char *)(unsigned int)v13);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v31);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9D,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
          (const char *)(unsigned int)v11);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
LABEL_50:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v42);
    return v8;
  }
  v8 = -2147024809;
  v9 = 143LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
    (const char *)v8);
  return v8;
}
