/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x18000C258
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000D0A0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8B8 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004D2AC (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x180114388 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DerivePeriodicityForStream(
        struct EndpointCharacteristicsDescriptor *a1,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct tWAVEFORMATEX *a7,
        struct _GUID *a8,
        struct _GUID *a9,
        struct _GUID *a10,
        bool a11,
        bool a12,
        __int64 a13,
        __int64 a14,
        struct IProcessSubmixProxy *a15,
        __int64 *a16,
        __int64 *a17,
        __int64 *a18)
{
  const struct tWAVEFORMATEX *v18; // r10
  int v19; // r9d
  _QWORD *v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  GUID v23; // xmm0
  __int64 v24; // r9
  __int64 v25; // r9
  int i; // r8d
  struct tWAVEFORMATEX **v27; // rcx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdi
  _QWORD *v30; // r14
  _QWORD *v31; // rcx
  unsigned __int64 v32; // rax
  const struct tWAVEFORMATEX ***v33; // rbx
  const struct tWAVEFORMATEX ***v34; // rsi
  const struct tWAVEFORMATEX **v35; // rcx
  signed int v36; // edi
  unsigned int v37; // r13d
  unsigned int v38; // esi
  unsigned int v39; // r14d
  double v40; // xmm4_8
  double v41; // xmm2_8
  struct tWAVEFORMATEX *v42; // rbx
  double v43; // xmm3_8
  struct tWAVEFORMATEX *v44; // rsi
  int MixFormat; // ebx
  __int64 v47; // rdx
  signed int nSamplesPerSec; // r10d
  unsigned int v49; // ebx
  unsigned int v50; // r9d
  unsigned int v51; // ebx
  unsigned int v52; // edx
  unsigned int v53; // r8d
  unsigned int v54; // r13d
  unsigned int v55; // edx
  unsigned int v56; // r8d
  unsigned int v57; // edx
  unsigned int v58; // r8d
  unsigned int v59; // eax
  unsigned int v60; // r11d
  double v61; // xmm4_8
  int v62; // r9d
  unsigned int v63; // ecx
  int j; // eax
  struct tWAVEFORMATEX **v65; // r8
  unsigned __int64 v66; // rcx
  void (__fastcall *v67)(struct IProcessSubmixProxy *, struct tWAVEFORMATEX **); // rbx
  struct EndpointCharacteristicsDescriptor *v68; // r13
  __int64 v69; // rdx
  struct _GUID *v70; // r15
  int SharedModeEnginePeriodicity; // eax
  unsigned __int64 v72; // r9
  __int64 v73; // rax
  int pdwType; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX *v75; // [rsp+70h] [rbp-90h] BYREF
  int pvData; // [rsp+78h] [rbp-88h] BYREF
  struct tWAVEFORMATEX *v77[2]; // [rsp+80h] [rbp-80h] BYREF
  DWORD pcbData[2]; // [rsp+90h] [rbp-70h] BYREF
  struct tWAVEFORMATEX *v79; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v80; // [rsp+A0h] [rbp-60h] BYREF
  struct tWAVEFORMATEX **v81; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v82; // [rsp+B0h] [rbp-50h] BYREF
  char v83; // [rsp+B8h] [rbp-48h]
  struct _GUID *v84; // [rsp+C0h] [rbp-40h]
  struct _GUID v85; // [rsp+D0h] [rbp-30h] BYREF
  char v86; // [rsp+E0h] [rbp-20h]
  struct _GUID v87; // [rsp+F0h] [rbp-10h] BYREF
  struct _GUID v88; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v89; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v90; // [rsp+120h] [rbp+20h]
  DWORD *v91; // [rsp+128h] [rbp+28h] BYREF
  struct tWAVEFORMATEX *v92; // [rsp+130h] [rbp+30h] BYREF
  char v93; // [rsp+138h] [rbp+38h]
  struct tWAVEFORMATEX **v94; // [rsp+140h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v95; // [rsp+148h] [rbp+48h] BYREF
  char v96; // [rsp+150h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  *(_QWORD *)&v85.Data1 = a3;
  v79 = a2;
  *(_QWORD *)&v88.Data1 = a1;
  v18 = a7;
  v75 = a7;
  *(_QWORD *)&v89.Data1 = a8;
  v84 = a9;
  *(_QWORD *)&v87.Data1 = a10;
  v80 = a17;
  v90 = a18;
  *a16 = a14;
  *a17 = a14;
  if ( a5 == AUDCLNT_SHAREMODE_SHARED && (a4 & 0x20000) != 0 && a15 )
  {
    v75 = 0LL;
    v67 = *(void (__fastcall **)(struct IProcessSubmixProxy *, struct tWAVEFORMATEX **))(*(_QWORD *)a15 + 64LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v75);
    v67(a15, &v75);
    *a16 = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v75->wFormatTag + 128LL))(v75);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v75);
    return 0LL;
  }
  v19 = a4 & 1;
  if ( a5 )
    return 0LL;
  if ( v19 )
  {
LABEL_92:
    if ( !a14 )
      *a16 = a13;
    return 0LL;
  }
  v20 = (_QWORD *)*((_QWORD *)a1 + 1);
  v21 = v20[236];
  if ( a6 == eKeywordDetectorConnector )
  {
    if ( v21 > 3 )
    {
      v22 = v20[237] + 72LL;
      goto LABEL_8;
    }
    goto LABEL_91;
  }
  if ( !v21 )
  {
LABEL_91:
    _o_terminate(v21, a18, a3);
    __debugbreak();
    goto LABEL_92;
  }
  v22 = v20[237];
LABEL_8:
  v23 = *a8;
  *(struct _GUID *)v77 = *a8;
  v24 = 296LL;
  if ( a6 != eKeywordDetectorConnector )
    v24 = 272LL;
  v25 = v20[198] + v24;
  for ( i = 0; i < *(_DWORD *)(v22 + 16); ++i )
  {
    v27 = (struct tWAVEFORMATEX **)(*(_QWORD *)v22 + 16LL * i);
    v28 = (char *)*v27 - (char *)v77[0];
    if ( *v27 == v77[0] )
      v28 = (char *)v27[1] - (char *)v77[1];
    if ( !v28 )
    {
      if ( i != -1 )
      {
        *(GUID *)v77 = v23;
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(v22 + 16) )
            goto LABEL_56;
          v65 = (struct tWAVEFORMATEX **)(*(_QWORD *)v22 + 16LL * j);
          v66 = (char *)*v65 - (char *)v77[0];
          if ( *v65 == v77[0] )
            v66 = (char *)v65[1] - (char *)v77[1];
          if ( !v66 )
            break;
        }
        if ( j == -1 )
        {
LABEL_56:
          v23 = GUID_00000000_0000_0000_0000_000000000000;
          break;
        }
        if ( j < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v22);
          __debugbreak();
        }
        v23 = *(GUID *)(*(_QWORD *)(v22 + 8) + 16LL * j);
      }
      break;
    }
  }
  *(GUID *)v77 = v23;
  v29 = *(_QWORD **)v25;
  v30 = *(_QWORD **)(v25 + 8);
  while ( 1 )
  {
    if ( v29 == v30 )
    {
      MixFormat = -2004287480;
      v47 = 1309LL;
      goto LABEL_31;
    }
    v31 = (_QWORD *)*v29;
    v32 = *(_QWORD *)*v29 - (unsigned __int64)v77[0];
    if ( !v32 )
      v32 = v31[1] - (unsigned __int64)v77[1];
    if ( !v32 )
      break;
LABEL_29:
    ++v29;
  }
  v33 = (const struct tWAVEFORMATEX ***)v31[2];
  v34 = (const struct tWAVEFORMATEX ***)v31[3];
  while ( 1 )
  {
    if ( v33 == v34 )
      goto LABEL_29;
    if ( (unsigned int)CompareWaveFormat(v18, **v33) )
      break;
    ++v33;
    v18 = v75;
  }
  v35 = *v33;
  v36 = *((_DWORD *)*v33 + 3);
  v37 = *((_DWORD *)*v33 + 2);
  LODWORD(v77[0]) = v37;
  v38 = *((_DWORD *)v35 + 4);
  v39 = *((_DWORD *)v35 + a11 + 5);
  v40 = DOUBLE_1_0e7;
  v41 = (double)v36 * 10000000.0;
  v42 = v75;
  v43 = DOUBLE_0_5;
  *v80 = (unsigned int)(int)(v41 / (double)(int)v75->nSamplesPerSec + 0.5);
  if ( !a14 )
  {
    *a16 = (unsigned int)(int)(v41 / (double)(int)v42->nSamplesPerSec + 0.5);
    v44 = v42;
    goto LABEL_26;
  }
  pvData = 0;
  pcbData[0] = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    pcbData);
  nSamplesPerSec = v42->nSamplesPerSec;
  v40 = DOUBLE_1_0e7;
  v43 = DOUBLE_0_5;
  v49 = (int)((double)nSamplesPerSec * (double)(int)a14 / 10000000.0 + 0.5);
  if ( pvData )
  {
    v44 = v75;
    goto LABEL_26;
  }
  if ( v49 >= v38 && v49 <= v39 && (!(v49 % v37) || v49 == v36 || v49 == v38 || v49 == v39) )
  {
    v44 = v75;
LABEL_57:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v85.Data1 + 152LL))(*(_QWORD *)&v85.Data1)
      && v49 < v36 )
    {
      MixFormat = -2004287456;
      v47 = 1379LL;
      goto LABEL_31;
    }
    v40 = DOUBLE_1_0e7;
    v43 = DOUBLE_0_5;
LABEL_26:
    if ( !a12 )
    {
LABEL_27:
      *v90 = (unsigned int)(int)((double)v36 * v40 / (double)(int)v44->nSamplesPerSec + v43);
      return 0LL;
    }
    v77[0] = 0LL;
    v75 = 0LL;
    v80 = 0LL;
    v79 = 0LL;
    *(_QWORD *)pcbData = 0LL;
    v81 = v77;
    v82 = 0LL;
    v83 = 1;
    v85 = *v84;
    v68 = *(struct EndpointCharacteristicsDescriptor **)&v88.Data1;
    MixFormat = EffectPack::GetMixFormat(*(EffectPack **)(*(_QWORD *)&v88.Data1 + 8LL), a6, &v85, &v82);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v81);
    if ( MixFormat >= 0 )
    {
      v94 = &v75;
      v95 = 0LL;
      v96 = 1;
      v91 = pcbData;
      v92 = 0LL;
      v93 = 1;
      *(_QWORD *)&v85.Data1 = &v79;
      *(_QWORD *)v85.Data4 = 0LL;
      v86 = 1;
      v81 = (struct tWAVEFORMATEX **)&v80;
      v82 = 0LL;
      v83 = 1;
      v70 = *(struct _GUID **)&v89.Data1;
      v89 = *(struct _GUID *)*(_QWORD *)&v89.Data1;
      v87 = *(struct _GUID *)*(_QWORD *)&v87.Data1;
      v88 = *v84;
      MixFormat = DeriveDeviceGraphFormatsForStream(
                    v68,
                    0,
                    a6,
                    AUDCLNT_SHAREMODE_SHARED,
                    0,
                    &v88,
                    &v87,
                    &v89,
                    v77[0],
                    &v82,
                    (struct tWAVEFORMATEX **)v85.Data4,
                    &v92,
                    &v95);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v81);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v85);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v91);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v94);
      if ( MixFormat >= 0 )
      {
        pvData = 0;
        v87 = *v70;
        pdwType = 0;
        SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                        *((_QWORD *)v68 + 1),
                                        (unsigned int)a6,
                                        v75,
                                        &v87);
        MixFormat = SharedModeEnginePeriodicity;
        if ( SharedModeEnginePeriodicity < 0 )
        {
          v72 = (unsigned int)SharedModeEnginePeriodicity;
          v69 = 1393LL;
LABEL_89:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v69,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v72,
            pdwType);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            pcbData,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v79,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v80,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v75,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            v77,
            0LL);
          return (unsigned int)MixFormat;
        }
        v73 = (unsigned int)(int)((double)pvData * 10000000.0 / (double)(int)v75->nSamplesPerSec + 0.5);
        if ( *a16 - v73 <= 5 * v73 / 100 )
        {
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            pcbData,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v79,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v80,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v75,
            0LL);
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            v77,
            0LL);
          v40 = DOUBLE_1_0e7;
          v43 = DOUBLE_0_5;
          goto LABEL_27;
        }
        MixFormat = -2004287448;
        v69 = 1396LL;
      }
      else
      {
        v69 = 1390LL;
      }
    }
    else
    {
      v69 = 1389LL;
    }
    v72 = (unsigned int)MixFormat;
    goto LABEL_89;
  }
  v50 = v79->nSamplesPerSec;
  if ( v50 == nSamplesPerSec )
  {
    MixFormat = -2004287456;
    v47 = 1343LL;
    goto LABEL_31;
  }
  v51 = TranslateFrameCountBetweenSamplingRates(v36, nSamplesPerSec, v50);
  v54 = TranslateFrameCountBetweenSamplingRates(v37, v52, v53);
  TranslateFrameCountBetweenSamplingRates(v38, v55, v56);
  v59 = TranslateFrameCountBetweenSamplingRates(v39, v57, v58);
  v63 = (int)((double)v62 * (double)(int)a14 / v61 + 0.5);
  if ( v63 >= v60 && v63 <= v59 )
  {
    if ( v63 % v54 )
    {
      if ( v63 != v51 )
      {
        if ( v63 != v60 )
        {
          if ( v63 != v59 )
            goto LABEL_46;
          goto LABEL_75;
        }
        goto LABEL_74;
      }
    }
    else if ( v63 != v51 )
    {
      if ( v63 == v60 )
      {
LABEL_74:
        v49 = v38;
        goto LABEL_76;
      }
      if ( v63 == v59 )
      {
LABEL_75:
        v49 = v39;
        goto LABEL_76;
      }
      v49 = LODWORD(v77[0]) * (v63 / v54);
LABEL_76:
      v44 = v75;
      *a16 = (unsigned int)(int)((double)(int)v49 * v61 / (double)(int)v75->nSamplesPerSec + 0.5);
      goto LABEL_57;
    }
    v49 = v36;
    goto LABEL_76;
  }
LABEL_46:
  MixFormat = -2004287456;
  v47 = 1363LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v47,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)MixFormat,
    pdwType);
  return (unsigned int)MixFormat;
}
