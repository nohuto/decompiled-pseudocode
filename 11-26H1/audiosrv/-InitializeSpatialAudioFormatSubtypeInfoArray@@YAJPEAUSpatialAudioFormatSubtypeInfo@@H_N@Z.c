/*
 * XREFs of ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x18002A560
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x1800923C8 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002A460 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x18002B5C0 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E8C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$?0$0CO@@StringReference@Internal@Windows@@QEAA@AEAY0CO@$$CBG@Z @ 0x1800AE124 (--$-0$0CO@@StringReference@Internal@Windows@@QEAA@AEAY0CO@$$CBG@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800AFFE8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall InitializeSpatialAudioFormatSubtypeInfoArray(
        struct SpatialAudioFormatSubtypeInfo *a1,
        const unsigned __int16 *a2)
{
  _QWORD *v3; // rax
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  const unsigned __int16 *StringRawBuffer; // rax
  struct SpatialAudioFormatSubtypeInfo *cotaskmem_string_nothrow; // rax
  struct SpatialAudioFormatSubtypeInfo *v10; // rdi
  HSTRING v11; // rdi
  DWORD LastError; // ebx
  __int64 v13; // rax
  int v14; // eax
  const unsigned __int16 *v15; // rax
  struct SpatialAudioFormatSubtypeInfo *v16; // rax
  struct SpatialAudioFormatSubtypeInfo *v17; // rdi
  HSTRING v18; // rdi
  DWORD v19; // ebx
  __int64 v20; // rax
  int v21; // eax
  const unsigned __int16 *v22; // rax
  __int64 v23; // rax
  HSTRING v24; // rdi
  DWORD v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, HSTRING *); // r15
  HSTRING v29; // r14
  DWORD v30; // edi
  const unsigned __int16 *v31; // rax
  __int64 v32; // rax
  HSTRING v33; // rdi
  DWORD v34; // ebx
  __int64 v35; // rax
  const unsigned __int16 *v36; // rax
  __int64 v37; // rax
  HSTRING v38; // rdi
  DWORD v39; // ebx
  int v40; // eax
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, HSTRING *); // r15
  HSTRING v43; // r14
  DWORD v44; // edi
  int v45; // eax
  __int64 v46; // r9
  __int64 v47; // rdx
  void (*v49)(void); // rax
  __int64 v50; // r9
  __int64 v51; // rdx
  char *v52; // rax
  const char *v53; // r9
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-48h] BYREF
  __int64 *v56; // [rsp+30h] [rbp-40h] BYREF
  __int64 v57; // [rsp+38h] [rbp-38h] BYREF
  HSTRING v58; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v56 = 0LL;
  v3 = (_QWORD *)Windows::Internal::StringReference::StringReference(&v58, (const unsigned __int16 (*)[46])a2);
  ActivationFactory = RoGetActivationFactory(*v3, &GUID_b3de8a47_83ee_4266_a945_bedf507afeed, &v56);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_60;
  }
  string = 0LL;
  v6 = *v56;
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v6 + 64))(v56, &string);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v7);
    if ( string )
      WindowsDeleteString(string);
    if ( v56 )
      (*(void (__fastcall **)(__int64 *))(*v56 + 16))(v56);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    cotaskmem_string_nothrow = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                                         (wil *)&pv,
                                                                         StringRawBuffer,
                                                                         0xFFFFFFFFFFFFFFFFuLL);
    v10 = cotaskmem_string_nothrow;
    if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 48) != cotaskmem_string_nothrow )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (char *)a1 + 48,
        *(_QWORD *)cotaskmem_string_nothrow);
      *(_QWORD *)v10 = 0LL;
    }
    if ( pv )
      CoTaskMemFree(pv);
    if ( *((_QWORD *)a1 + 6) )
    {
      *((_BYTE *)a1 + 41) = 1;
      v11 = string;
      if ( string )
      {
        LastError = GetLastError();
        WindowsDeleteString(v11);
        SetLastError(LastError);
      }
      string = 0LL;
      v13 = *v56;
      string = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v13 + 72))(v56, &string);
      v5 = v14;
      if ( v14 < 0 )
      {
        v47 = 97LL;
        goto LABEL_83;
      }
      v15 = WindowsGetStringRawBuffer(string, 0LL);
      v16 = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                      (wil *)&pv,
                                                      v15,
                                                      0xFFFFFFFFFFFFFFFFuLL);
      v17 = v16;
      if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 128) != v16 )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (char *)a1 + 128,
          *(_QWORD *)v16);
        *(_QWORD *)v17 = 0LL;
      }
      if ( pv )
        CoTaskMemFree(pv);
      if ( !*((_QWORD *)a1 + 16) )
      {
        v5 = -2147024882;
        v46 = 2147942414LL;
        v47 = 99LL;
        goto LABEL_58;
      }
      *((_BYTE *)a1 + 121) = 1;
      v18 = string;
      if ( string )
      {
        v19 = GetLastError();
        WindowsDeleteString(v18);
        SetLastError(v19);
      }
      string = 0LL;
      v20 = *v56;
      string = 0LL;
      v21 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v20 + 56))(v56, &string);
      v5 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68,
          (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
          (const char *)(unsigned int)v21);
        if ( string )
          WindowsDeleteString(string);
        if ( v56 )
          (*(void (__fastcall **)(__int64 *))(*v56 + 16))(v56);
      }
      else
      {
        v22 = WindowsGetStringRawBuffer(string, 0LL);
        v23 = wil::make_cotaskmem_string_nothrow((wil *)&pv, v22, 0xFFFFFFFFFFFFFFFFuLL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          (char *)a1 + 88,
          v23);
        if ( pv )
          CoTaskMemFree(pv);
        if ( !*((_QWORD *)a1 + 11) )
        {
          v5 = -2147024882;
          v46 = 2147942414LL;
          v47 = 106LL;
          goto LABEL_58;
        }
        *((_BYTE *)a1 + 81) = 1;
        v24 = string;
        if ( string )
        {
          v25 = GetLastError();
          WindowsDeleteString(v24);
          SetLastError(v25);
        }
        string = 0LL;
        v26 = wil::make_cotaskmem_string_nothrow(
                (wil *)&pv,
                L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}",
                0xFFFFFFFFFFFFFFFFuLL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          (char *)a1 + 8,
          v26);
        if ( pv )
          CoTaskMemFree(pv);
        if ( !*((_QWORD *)a1 + 1) )
        {
          v5 = -2147024882;
          v46 = 2147942414LL;
          v47 = 113LL;
          goto LABEL_58;
        }
        *((_BYTE *)a1 + 1) = 1;
        v27 = (__int64)v56;
        v28 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*v56 + 80);
        v29 = string;
        if ( string )
        {
          v30 = GetLastError();
          WindowsDeleteString(v29);
          SetLastError(v30);
        }
        string = 0LL;
        v14 = v28(v27, &string);
        v5 = v14;
        if ( v14 < 0 )
        {
          v47 = 117LL;
          goto LABEL_83;
        }
        v31 = WindowsGetStringRawBuffer(string, 0LL);
        v32 = wil::make_cotaskmem_string_nothrow((wil *)&pv, v31, 0xFFFFFFFFFFFFFFFFuLL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          (char *)a1 + 168,
          v32);
        if ( pv )
          CoTaskMemFree(pv);
        if ( *((_QWORD *)a1 + 21) )
        {
          *((_BYTE *)a1 + 161) = 1;
          v33 = string;
          if ( string )
          {
            v34 = GetLastError();
            WindowsDeleteString(v33);
            SetLastError(v34);
          }
          string = 0LL;
          v35 = *v56;
          string = 0LL;
          v14 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v35 + 88))(v56, &string);
          v5 = v14;
          if ( v14 >= 0 )
          {
            v36 = WindowsGetStringRawBuffer(string, 0LL);
            v37 = wil::make_cotaskmem_string_nothrow((wil *)&pv, v36, 0xFFFFFFFFFFFFFFFFuLL);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
              (char *)a1 + 208,
              v37);
            if ( pv )
              CoTaskMemFree(pv);
            if ( *((_QWORD *)a1 + 26) )
            {
              *((_BYTE *)a1 + 201) = 1;
              v38 = string;
              if ( string )
              {
                v39 = GetLastError();
                WindowsDeleteString(v38);
                SetLastError(v39);
              }
              string = 0LL;
              v57 = 0LL;
              v40 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*v56)(
                      v56,
                      &GUID_4565e6cb_d95b_5621_b6af_0e8849c57c80,
                      &v57);
              v5 = v40;
              if ( v40 < 0 )
              {
                v50 = (unsigned int)v40;
                v51 = 132LL;
              }
              else
              {
                v41 = v57;
                v42 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v57 + 48LL);
                v43 = string;
                if ( string )
                {
                  v44 = GetLastError();
                  WindowsDeleteString(v43);
                  SetLastError(v44);
                }
                string = 0LL;
                v45 = v42(v41, &string);
                v5 = v45;
                if ( v45 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x85,
                    (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
                    (const char *)(unsigned int)v45);
                  if ( v57 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
                  if ( string )
                    WindowsDeleteString(string);
                  if ( v56 )
                    (*(void (__fastcall **)(__int64 *))(*v56 + 16))(v56);
                  return v5;
                }
                v52 = (char *)WindowsGetStringRawBuffer(string, 0LL);
                wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                  &pv,
                  v52,
                  0xFFFFFFFFFFFFFFFFuLL,
                  v53);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
                  (char *)a1 + 248,
                  &pv);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
                if ( *((_QWORD *)a1 + 31) )
                {
                  *((_BYTE *)a1 + 241) = 1;
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v57);
                  Windows::Internal::String::~String((Windows::Internal::String *)&string);
                  v5 = 0;
                  goto LABEL_60;
                }
                v5 = -2147024882;
                v50 = 2147942414LL;
                v51 = 135LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v51,
                (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
                (const char *)v50);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v57);
              goto LABEL_59;
            }
            v5 = -2147024882;
            v46 = 2147942414LL;
            v47 = 126LL;
LABEL_58:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v47,
              (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
              (const char *)v46);
LABEL_59:
            Windows::Internal::String::~String((Windows::Internal::String *)&string);
LABEL_60:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v56);
            return v5;
          }
          v47 = 124LL;
LABEL_83:
          v46 = (unsigned int)v14;
          goto LABEL_58;
        }
        v5 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x77,
          (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
          (const char *)0x8007000ELL);
        if ( string )
          WindowsDeleteString(string);
        if ( v56 )
        {
          v49 = *(void (**)(void))(*v56 + 16);
          goto LABEL_66;
        }
      }
    }
    else
    {
      v5 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
        (const char *)0x8007000ELL);
      if ( string )
        WindowsDeleteString(string);
      if ( v56 )
      {
        v49 = *(void (**)(void))(*v56 + 16);
LABEL_66:
        v49();
      }
    }
  }
  return v5;
}
