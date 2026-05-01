/*
 * XREFs of ?GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplicationViewTitlebarConfiguration@@PEAUtagRECT@@@Z @ 0x1804E9890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x180297BA4 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802BB7F0 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAH_ea_1802BB7F0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowSizeConverter::GetPhysicalNonClientAreaOffsets(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        int a3,
        int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagRECT *a7)
{
  int v8; // eax
  unsigned int LastError; // ebx
  int FrameForMonitor; // eax
  __int64 v11; // rdx
  struct IApplicationFrame *v12; // rbx
  __int64 (__fastcall *v13)(struct IApplicationFrame *, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rdx
  const char *v16; // r9
  __int64 v17; // rdx
  LONG v18; // r8d
  LONG v19; // edx
  LONG v20; // ecx
  struct IApplicationFrame *v22; // [rsp+30h] [rbp-61h] BYREF
  __int64 v23; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-4Dh] BYREF
  HWND hWnd; // [rsp+48h] [rbp-49h] BYREF
  int v27; // [rsp+50h] [rbp-41h] BYREF
  int v28; // [rsp+58h] [rbp-39h] BYREF
  __int64 v29; // [rsp+60h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v30; // [rsp+68h] [rbp-29h] BYREF
  int v31[2]; // [rsp+70h] [rbp-21h] BYREF
  struct tagRECT Rect; // [rsp+78h] [rbp-19h] BYREF
  __int128 v33; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT v34; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+47h]

  v30 = a2;
  v28 = a3;
  v27 = a4;
  *(_QWORD *)v31 = a6;
  *a7 = 0LL;
  v29 = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
         &v29,
         &v30,
         &v28,
         &v27,
         (struct IApplicationViewTitlebarConfiguration **)v31);
  LastError = v8;
  if ( v8 >= 0 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    FrameForMonitor = WindowSizeConverter::GetFrameForMonitor((WindowSizeConverter *)((char *)this - 88), v30, &v22);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v11 = 378LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)FrameForMonitor);
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      goto LABEL_33;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, _QWORD))(*(_QWORD *)v22 + 112LL))(
                        v22,
                        255LL,
                        *(_DWORD *)(v29 + 24) & 1);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v11 = 379LL;
      goto LABEL_5;
    }
    v25 = 0;
    v24 = 0;
    FrameForMonitor = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**(_QWORD **)v31 + 48LL))(
                        *(_QWORD *)v31,
                        &v25,
                        &v24);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v11 = 383LL;
      goto LABEL_5;
    }
    v23 = 0LL;
    v12 = v22;
    v13 = *(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v22 + 144LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v14 = v13(v12, &v23);
    LastError = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v23 + 48LL))(v23, v25, v24);
      LastError = v14;
      if ( v14 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v23 + 32LL))(v23, (v24 & 1) == 0);
        LastError = v14;
        if ( v14 >= 0 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 120LL))(v23, a5 != 0 ? 8 : 0);
          LastError = v14;
          if ( v14 >= 0 )
          {
            hWnd = 0LL;
            v14 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v22 + 24LL))(v22, &hWnd);
            LastError = v14;
            if ( v14 >= 0 )
            {
              Rect = 0LL;
              if ( GetClientRect(hWnd, &Rect) )
              {
                if ( MapWindowPoints(hWnd, 0LL, (LPPOINT)&Rect, 2u) )
                {
                  v33 = 0LL;
                  v14 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)v22 + 120LL))(
                          v22,
                          &v33);
                  LastError = v14;
                  if ( v14 < 0 )
                  {
                    v15 = 403LL;
                    goto LABEL_13;
                  }
                  Rect.top += DWORD1(v33);
                  Rect.bottom += HIDWORD(v33);
                  Rect.left += v33;
                  Rect.right += DWORD2(v33);
                  v34 = 0LL;
                  if ( GetWindowRect(hWnd, &v34) )
                  {
                    v18 = Rect.top - v34.top;
                    v19 = v34.right - Rect.right;
                    v20 = v34.bottom - Rect.bottom;
                    a7->left = Rect.left - v34.left;
                    a7->top = v18;
                    a7->right = v19;
                    a7->bottom = v20;
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
                    LastError = 0;
                    goto LABEL_33;
                  }
                  v17 = 411LL;
                }
                else
                {
                  v17 = 400LL;
                }
              }
              else
              {
                v17 = 396LL;
              }
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)v17,
                            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
                            v16);
              goto LABEL_14;
            }
            v15 = 393LL;
          }
          else
          {
            v15 = 389LL;
          }
        }
        else
        {
          v15 = 388LL;
        }
      }
      else
      {
        v15 = 387LL;
      }
    }
    else
    {
      v15 = 386LL;
    }
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v14);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x177,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v8);
LABEL_33:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  return LastError;
}
