/*
 * XREFs of ?IsDesktopVisibleOnMonitor@DDAScreenCapture@@AEAAJPEA_N@Z @ 0x1803EEF24
 * Callers:
 *     ?IsScreenDRMProtected@DDAScreenCapture@@AEAAJPEA_N@Z @ 0x1803EF13C (-IsScreenDRMProtected@DDAScreenCapture@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DDAScreenCapture::IsDesktopVisibleOnMonitor(DDAScreenCapture *this, bool *a2)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  LPVOID v6; // rbx
  __int64 (__fastcall *v7)(LPVOID, SID *, GUID *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rdi
  int v11; // eax
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, GUID *, GUID *, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+88h] [rbp+38h] BYREF

  ppv[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppv);
  Instance = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, ppv);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    v22 = 0LL;
    v6 = ppv[0];
    v7 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv[0] + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v8 = v7(v6, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v22);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v17 = 0LL;
      v9 = v22;
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 48LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      v11 = v10(v9, *((_QWORD *)this + 16), &v17);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v18 = 0LL;
        v12 = ppv[0];
        v13 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv[0] + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        v14 = v13(v12, &IID_IImmersiveSystemMode, &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84, &v18);
        v5 = v14;
        if ( v14 >= 0 )
        {
          v21 = 0;
          v14 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v18 + 24LL))(v18, v17, &v21);
          v5 = v14;
          if ( v14 >= 0 )
          {
            *a2 = v21 != 0;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
            v5 = 0;
            goto LABEL_15;
          }
          v15 = 277LL;
        }
        else
        {
          v15 = 275LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x110,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
          (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10D,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x108,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)Instance);
  }
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppv);
  return v5;
}
