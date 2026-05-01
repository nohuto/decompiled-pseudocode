/*
 * XREFs of ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x1803E5464
 * Callers:
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803E4A38 (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 *     ?Initialize@DDAScreenCapture@@AEAAJXZ @ 0x1803E5338 (-Initialize@DDAScreenCapture@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DDAScreenCapture::InitializeDuplication(DDAScreenCapture *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD); // rdi
  int v12; // eax
  _QWORD *v13; // r14
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, char *); // rdi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, DDAScreenCapture *); // rbx
  __int64 v20; // r9
  __int64 (__fastcall ***v21)(_QWORD, GUID *, char *); // [rsp+20h] [rbp-49h] BYREF
  __int64 v22; // [rsp+28h] [rbp-41h] BYREF
  __int64 v23[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v24[88]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v23[0] = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 13);
  v3 = **v2;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v23);
  v4 = v3(v2, &GUID_6007896c_3244_4afd_bf18_a6d3beda5023, v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v22 = 0LL;
    v6 = v23[0];
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23[0] + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v8 = v7(v6, &v22);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v21 = 0LL;
      v9 = 0;
      while ( 1 )
      {
        v10 = v22;
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 56LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
        v12 = v11(v10, v9, &v21);
        v5 = v12;
        if ( !++v9 )
          break;
        if ( v12 < 0 )
        {
          v16 = 91LL;
          goto LABEL_19;
        }
        memset_0(v24, 0, 0x60uLL);
        v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *), _BYTE *))(*v21)[7])(v21, v24);
        v5 = v12;
        if ( v12 < 0 )
        {
          v16 = 94LL;
LABEL_19:
          v20 = (unsigned int)v12;
          goto LABEL_21;
        }
        if ( v25 == *((_QWORD *)this + 16) )
        {
          v13 = (_QWORD *)((char *)this + 120);
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 15);
          v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
          v15 = **v21;
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 15);
          v12 = v15(v14, &GUID_00cddea8_939b_4b83_a340_a685226666cc, (char *)this + 120);
          v5 = v12;
          if ( v12 >= 0 )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v13 + 56LL))(*v13, (char *)this + 8);
            v5 = v12;
            if ( v12 >= 0 )
            {
              v17 = *v13;
              v18 = *(__int64 (__fastcall **)(__int64, _QWORD, DDAScreenCapture *))(*(_QWORD *)*v13 + 176LL);
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this);
              v12 = v18(v17, *((_QWORD *)this + 13), this);
              v5 = v12;
              if ( v12 >= 0 )
              {
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v23);
                return 0LL;
              }
              v16 = 111LL;
            }
            else
            {
              v16 = 110LL;
            }
          }
          else
          {
            v16 = 109LL;
          }
          goto LABEL_19;
        }
      }
      v5 = -2147418113;
      v20 = 2147549183LL;
      v16 = 105LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v23);
  return v5;
}
