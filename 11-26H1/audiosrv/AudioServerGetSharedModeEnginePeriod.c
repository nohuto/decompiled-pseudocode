/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x18002BD70
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000D0A0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18002C468 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002D7E0 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x180114388 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        struct tWAVEFORMATEX *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7,
        _DWORD *a8,
        unsigned int *a9)
{
  __int128 v9; // xmm0
  struct _FILETIME v14; // rbx
  __int64 v15; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v17; // eax
  int IsFormatSupported; // ebx
  void *v19; // rcx
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rax
  int v23; // eax
  struct _GUID v24; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // edx
  struct tWAVEFORMATEX *v26; // rdx
  struct tWAVEFORMATEX **v27; // r8
  struct tWAVEFORMATEX *v28; // rcx
  struct tWAVEFORMATEX *v29; // r15
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  bool v32; // zf
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // r9
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rdi
  _QWORD *v39; // r14
  _QWORD *v40; // rcx
  __int64 v41; // rax
  const struct tWAVEFORMATEX ***v42; // rbx
  const struct tWAVEFORMATEX ***v43; // rsi
  unsigned int *v44; // rdi
  struct tWAVEFORMATEX *v45; // r9
  unsigned int nSamplesPerSec; // r8d
  DWORD v47; // edx
  void *v48; // rcx
  __int64 v50; // rdx
  struct tWAVEFORMATEX *v51; // rcx
  __int64 v52; // rdx
  void *v53; // rcx
  int i; // eax
  _QWORD *v55; // r8
  __int64 v56; // rcx
  GUID v57; // xmm0
  unsigned int *v58; // r10
  __int64 v59; // r9
  unsigned int v60; // eax
  unsigned int *v61; // r10
  unsigned int *v62; // r11
  __int64 v63; // r9
  unsigned int v64; // eax
  unsigned int *v65; // r11
  __int64 v66; // r9
  int v67; // [rsp+38h] [rbp-D0h]
  LPVOID v68; // [rsp+88h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v69; // [rsp+90h] [rbp-78h] BYREF
  struct _GUID v70; // [rsp+98h] [rbp-70h] BYREF
  char v71; // [rsp+A8h] [rbp-60h]
  struct _FILETIME pftDueTime[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v73; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-30h]
  struct _GUID v75; // [rsp+E8h] [rbp-20h] BYREF
  struct tWAVEFORMATEX **v76; // [rsp+F8h] [rbp-10h]
  struct tWAVEFORMATEX *v77; // [rsp+100h] [rbp-8h] BYREF
  char v78; // [rsp+108h] [rbp+0h]
  _DWORD *v79; // [rsp+110h] [rbp+8h]
  _DWORD *v80; // [rsp+118h] [rbp+10h]
  unsigned int *v81; // [rsp+120h] [rbp+18h]
  _QWORD pv[2]; // [rsp+128h] [rbp+20h] BYREF
  DWORD CurrentThreadId; // [rsp+138h] [rbp+30h]
  const wchar_t *v84; // [rsp+140h] [rbp+38h]
  struct _FILETIME v85; // [rsp+148h] [rbp+40h]
  char v86; // [rsp+150h] [rbp+48h]
  __int64 v87; // [rsp+154h] [rbp+4Ch]
  __int128 v88; // [rsp+160h] [rbp+58h]
  __int128 v89; // [rsp+170h] [rbp+68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v9 = *a3;
  v79 = a7;
  v80 = a8;
  v81 = a9;
  v88 = v9;
  v89 = v9;
  EtwEventActivityIdControl(4LL, &v89);
  v14 = g_AudioHealthMonitor;
  v15 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v85 = v14;
  CurrentThreadId = GetCurrentThreadId();
  v84 = L"AudioServerGetSharedModeEnginePeriod";
  v86 = 0;
  v87 = 0LL;
  if ( (unsigned int)v15 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                                * v15
                                                                                * (__int128)0x5555555555555555LL) >> 64)
                                                           - 10000 * v15) >> 63)
                                       + ((__int64)(((unsigned __int128)(10000 * v15 * (__int128)0x5555555555555555LL) >> 64)
                                                  - 10000 * v15) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v15 / 3, 0);
    }
  }
  v17 = ValidateVadServerSettings((struct VadServerSettings *)a3);
  IsFormatSupported = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v17);
  }
  else
  {
    v68 = 0LL;
    *(_QWORD *)&v70.Data1 = &v68;
    *(_QWORD *)v70.Data4 = 0LL;
    v71 = 1;
    IsFormatSupported = AudioServerIsFormatSupported(a1, a2, 0LL, a3, a4, v70.Data4);
    if ( v71 )
    {
      v19 = **(void ***)&v70.Data1;
      **(_QWORD **)&v70.Data1 = *(_QWORD *)v70.Data4;
      if ( v19 )
        CoTaskMemFree(v19);
    }
    if ( IsFormatSupported >= 0 )
    {
      v74 = 0LL;
      v73 = 0LL;
      v20 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int128 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                  + 40LL))(
              g_pEndpointCharacteristicsCache,
              a2,
              0LL,
              0LL,
              &v73);
      IsFormatSupported = v20;
      if ( v20 < 0 )
      {
        v52 = 4080LL;
      }
      else
      {
        v21 = *((_DWORD *)a3 + 13);
        *(_OWORD *)&pftDueTime[0].dwLowDateTime = 0LL;
        v22 = *(_QWORD *)v73;
        v75 = 0LL;
        v70 = 0LL;
        v23 = (*(__int64 (__fastcall **)(_QWORD))(v22 + 56))(v73);
        v20 = DeriveAudioProcessingModeConfiguration(
                *((unsigned int *)a3 + 12),
                *((unsigned int *)a3 + 14),
                *((unsigned int *)a3 + 32),
                &v73,
                v23 == 1,
                0,
                v21,
                0LL,
                0,
                0,
                0LL,
                pftDueTime,
                &v75,
                &v70,
                0LL,
                0LL);
        IsFormatSupported = v20;
        if ( v20 >= 0 )
        {
          v24 = *(struct _GUID *)&pftDueTime[0].dwLowDateTime;
          v25 = *((_DWORD *)a3 + 13);
          v76 = &v69;
          v67 = *((_DWORD *)a3 + 17);
          v69 = 0LL;
          v77 = 0LL;
          v78 = 1;
          IsFormatSupported = DeriveConnectorFormatFromStreamFormat(
                                (struct EndpointCharacteristicsDescriptor *)&v73,
                                v25,
                                a4,
                                &v70,
                                &v75,
                                (struct _GUID *)pftDueTime,
                                v67,
                                &v77);
          if ( v78 )
          {
            v27 = v76;
            v26 = v77;
            v28 = *v76;
            *v76 = v77;
            if ( v28 )
              CoTaskMemFree(v28);
          }
          if ( IsFormatSupported < 0 )
          {
            v50 = 4112LL;
LABEL_53:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v50,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)IsFormatSupported);
            v51 = v69;
            v69 = 0LL;
            if ( v51 )
              CoTaskMemFree(v51);
            goto LABEL_57;
          }
          v29 = v69;
          v30 = *(_QWORD *)(*((_QWORD *)&v73 + 1) + 1888LL);
          if ( *((_DWORD *)a3 + 13) == 3 )
          {
            if ( v30 > 3 )
            {
              v31 = *(_QWORD *)(*((_QWORD *)&v73 + 1) + 1896LL) + 72LL;
LABEL_18:
              v32 = *((_DWORD *)a3 + 13) == 3;
              v70 = v24;
              v33 = 0;
              v34 = 296LL;
              if ( !v32 )
                v34 = 272LL;
              v35 = *(_QWORD *)(*((_QWORD *)&v73 + 1) + 1584LL) + v34;
              while ( 1 )
              {
                if ( v33 >= *(_DWORD *)(v31 + 16) )
                  goto LABEL_26;
                v36 = (_QWORD *)(*(_QWORD *)v31 + 16LL * v33);
                v37 = *v36 - *(_QWORD *)&v70.Data1;
                if ( *v36 == *(_QWORD *)&v70.Data1 )
                  v37 = v36[1] - *(_QWORD *)v70.Data4;
                if ( !v37 )
                  break;
                ++v33;
              }
              if ( v33 == -1 )
              {
LABEL_26:
                v70 = v24;
                goto LABEL_27;
              }
              v70 = v24;
              for ( i = 0; ; ++i )
              {
                if ( i >= *(_DWORD *)(v31 + 16) )
                  goto LABEL_76;
                v55 = (_QWORD *)(*(_QWORD *)v31 + 16LL * i);
                v56 = *v55 - *(_QWORD *)&v70.Data1;
                if ( *v55 == *(_QWORD *)&v70.Data1 )
                  v56 = v55[1] - *(_QWORD *)v70.Data4;
                if ( !v56 )
                  break;
              }
              if ( i == -1 )
              {
LABEL_76:
                v57 = GUID_00000000_0000_0000_0000_000000000000;
                goto LABEL_71;
              }
              if ( i < 0 )
              {
                ATL::_AtlRaiseException(0xC000008C, v31);
                __debugbreak();
              }
              v57 = *(GUID *)(*(_QWORD *)(v31 + 8) + 16LL * i);
LABEL_71:
              v70 = v57;
LABEL_27:
              v38 = *(_QWORD **)v35;
              v39 = *(_QWORD **)(v35 + 8);
              while ( v38 != v39 )
              {
                v40 = (_QWORD *)*v38;
                v41 = *(_QWORD *)*v38 - *(_QWORD *)&v70.Data1;
                if ( !v41 )
                  v41 = v40[1] - *(_QWORD *)v70.Data4;
                if ( !v41 )
                {
                  v42 = (const struct tWAVEFORMATEX ***)v40[2];
                  v43 = (const struct tWAVEFORMATEX ***)v40[3];
                  while ( v42 != v43 )
                  {
                    if ( (unsigned int)CompareWaveFormat(v29, **v42) )
                    {
                      if ( a6 )
                        *a6 = *((_DWORD *)*v42 + 3);
                      if ( v79 )
                        *v79 = *((_DWORD *)*v42 + 2);
                      if ( v80 )
                        *v80 = *((_DWORD *)*v42 + 4);
                      v44 = v81;
                      if ( v81 )
                        *v81 = *(_DWORD *)((char *)*v42 + (a5 != 0 ? 4 : 0) + 20);
                      v45 = v69;
                      nSamplesPerSec = a4->nSamplesPerSec;
                      v47 = v69->nSamplesPerSec;
                      if ( nSamplesPerSec != v47 )
                      {
                        *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v47, nSamplesPerSec);
                        v60 = TranslateFrameCountBetweenSamplingRates(*v58, *(_DWORD *)(v59 + 4), a4->nSamplesPerSec);
                        *v61 = v60;
                        v64 = TranslateFrameCountBetweenSamplingRates(*v62, *(_DWORD *)(v63 + 4), a4->nSamplesPerSec);
                        *v65 = v64;
                        *v44 = TranslateFrameCountBetweenSamplingRates(*v44, *(_DWORD *)(v66 + 4), a4->nSamplesPerSec);
                      }
                      v69 = 0LL;
                      if ( v45 )
                        CoTaskMemFree(v45);
                      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v73);
                      v48 = v68;
                      v68 = 0LL;
                      if ( v48 )
                        CoTaskMemFree(v48);
                      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
                      EtwEventActivityIdControl(4LL, &v89);
                      return 0LL;
                    }
                    ++v42;
                  }
                }
                ++v38;
              }
              IsFormatSupported = -2004287480;
              v50 = 4114LL;
              goto LABEL_53;
            }
          }
          else if ( v30 )
          {
            v31 = *(_QWORD *)(*((_QWORD *)&v73 + 1) + 1896LL);
            goto LABEL_18;
          }
          _o_terminate(v30, v26, v27);
          __debugbreak();
          JUMPOUT(0x18002C461LL);
        }
        v52 = 4102LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v52,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v20);
LABEL_57:
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v73);
      v53 = v68;
      v68 = 0LL;
      if ( v53 )
        CoTaskMemFree(v53);
      goto LABEL_59;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFED,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)IsFormatSupported);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v68,
      0LL);
  }
LABEL_59:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v89);
  return (unsigned int)IsFormatSupported;
}
