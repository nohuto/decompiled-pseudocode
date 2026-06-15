/*
 * XREFs of AudioServerGetDevicePeriod @ 0x18002B820
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000D0A0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D8C0 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000DA5C (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18002C468 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        __int64 a2,
        struct VadServerSettings *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  struct _FILETIME v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  int v12; // eax
  int ConnectorFormatForProcessingMode; // ebx
  int MinProcessingPeriodForExclusiveMode; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // edx
  int v16; // eax
  struct _GUID v17; // xmm6
  struct tWAVEFORMATEX *v18; // rdx
  void *v19; // rcx
  struct _FILETIME *v20; // r8
  const struct tWAVEFORMATEX *v21; // r12
  __int64 v22; // r8
  __int64 v23; // r9
  int i; // ecx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rdi
  _QWORD *v28; // r14
  _QWORD *v29; // rcx
  __int64 v30; // rax
  const struct tWAVEFORMATEX ***v31; // rbx
  const struct tWAVEFORMATEX ***v32; // rsi
  void *v33; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  int j; // eax
  _QWORD *v38; // rdx
  __int64 v39; // rcx
  GUID v40; // xmm0
  struct _FILETIME pftDueTime; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v42; // [rsp+98h] [rbp-70h] BYREF
  EffectPack *v43[2]; // [rsp+A8h] [rbp-60h] BYREF
  std::_Ref_count_base *v44; // [rsp+B8h] [rbp-50h]
  struct _FILETIME *p_pftDueTime; // [rsp+C0h] [rbp-48h]
  struct tWAVEFORMATEX *v46; // [rsp+C8h] [rbp-40h] BYREF
  char v47; // [rsp+D0h] [rbp-38h]
  _QWORD pv[2]; // [rsp+D8h] [rbp-30h] BYREF
  DWORD CurrentThreadId; // [rsp+E8h] [rbp-20h]
  const wchar_t *v50; // [rsp+F0h] [rbp-18h]
  struct _FILETIME v51; // [rsp+F8h] [rbp-10h]
  char v52; // [rsp+100h] [rbp-8h]
  __int64 v53; // [rsp+104h] [rbp-4h]
  __int128 v54; // [rsp+110h] [rbp+8h]
  __int128 v55; // [rsp+120h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v54 = *(_OWORD *)a3;
  v55 = v54;
  EtwEventActivityIdControl(4LL, &v55);
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  CurrentThreadId = GetCurrentThreadId();
  v50 = L"AudioServerGetDevicePeriod";
  v51 = v8;
  v52 = 0;
  v53 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v9
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v9) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v9 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v9) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  v12 = ValidateVadServerSettings(a3);
  ConnectorFormatForProcessingMode = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFA0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_42;
  }
  *(_OWORD *)v43 = 0LL;
  v44 = 0LL;
  MinProcessingPeriodForExclusiveMode = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
                                          g_pEndpointCharacteristicsCache,
                                          a2,
                                          0LL,
                                          0LL,
                                          v43);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v36 = 4003LL;
    goto LABEL_45;
  }
  if ( a5 )
  {
    v42 = 0LL;
    v16 = (*(__int64 (__fastcall **)(EffectPack *))(*(_QWORD *)v43[0] + 56LL))(v43[0]);
    MinProcessingPeriodForExclusiveMode = DeriveAudioProcessingModeConfiguration(
                                            *((unsigned int *)a3 + 12),
                                            *((unsigned int *)a3 + 14),
                                            *((unsigned int *)a3 + 32),
                                            v43,
                                            v16 == 1,
                                            0,
                                            0,
                                            0LL,
                                            0,
                                            0,
                                            0LL,
                                            &v42,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0LL);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode >= 0 )
    {
      pftDueTime = 0LL;
      p_pftDueTime = &pftDueTime;
      v46 = 0LL;
      v47 = 1;
      v17 = v42;
      ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(
                                           (CEndpointCharacteristics **)v43[1],
                                           eHostProcessConnector,
                                           &v42,
                                           &v46);
      if ( v47 )
      {
        v20 = p_pftDueTime;
        v19 = (void *)*p_pftDueTime;
        v18 = v46;
        *p_pftDueTime = (struct _FILETIME)v46;
        if ( v19 )
          CoTaskMemFree(v19);
      }
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        v35 = 4031LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v35,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)ConnectorFormatForProcessingMode);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&pftDueTime,
          0LL);
LABEL_41:
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v43);
LABEL_42:
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        EtwEventActivityIdControl(4LL, &v55);
        return (unsigned int)ConnectorFormatForProcessingMode;
      }
      v21 = (const struct tWAVEFORMATEX *)pftDueTime;
      if ( *((_QWORD *)v43[1] + 236) )
      {
        v22 = *((_QWORD *)v43[1] + 237);
        v42 = v17;
        v23 = *((_QWORD *)v43[1] + 198);
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_DWORD *)(v22 + 16) )
            goto LABEL_19;
          v25 = (_QWORD *)(*(_QWORD *)v22 + 16LL * i);
          v26 = *v25 - *(_QWORD *)&v42.Data1;
          if ( *v25 == *(_QWORD *)&v42.Data1 )
            v26 = v25[1] - *(_QWORD *)v42.Data4;
          if ( !v26 )
            break;
        }
        if ( i == -1 )
        {
LABEL_19:
          v42 = v17;
          goto LABEL_20;
        }
        v42 = v17;
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(v22 + 16) )
            goto LABEL_56;
          v38 = (_QWORD *)(*(_QWORD *)v22 + 16LL * j);
          v39 = *v38 - *(_QWORD *)&v42.Data1;
          if ( *v38 == *(_QWORD *)&v42.Data1 )
            v39 = v38[1] - *(_QWORD *)v42.Data4;
          if ( !v39 )
            break;
        }
        if ( j == -1 )
        {
LABEL_56:
          v40 = GUID_00000000_0000_0000_0000_000000000000;
          goto LABEL_54;
        }
        if ( j < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v38);
          __debugbreak();
        }
        v40 = *(GUID *)(*(_QWORD *)(v22 + 8) + 16LL * j);
LABEL_54:
        v42 = v40;
LABEL_20:
        v27 = *(_QWORD **)(v23 + 272);
        v28 = *(_QWORD **)(v23 + 280);
        while ( v27 != v28 )
        {
          v29 = (_QWORD *)*v27;
          v30 = *(_QWORD *)*v27 - *(_QWORD *)&v42.Data1;
          if ( !v30 )
            v30 = v29[1] - *(_QWORD *)v42.Data4;
          if ( !v30 )
          {
            v31 = (const struct tWAVEFORMATEX ***)v29[2];
            v32 = (const struct tWAVEFORMATEX ***)v29[3];
            while ( v31 != v32 )
            {
              if ( (unsigned int)CompareWaveFormat(v21, **v31) )
              {
                v33 = (void *)pftDueTime;
                *a5 = (unsigned int)(int)((double)*((int *)*v31 + 3)
                                        * 10000000.0
                                        / (double)*(int *)(*(_QWORD *)&pftDueTime + 4LL)
                                        + 0.5);
                pftDueTime = 0LL;
                if ( v33 )
                  CoTaskMemFree(v33);
                goto LABEL_30;
              }
              ++v31;
            }
          }
          ++v27;
        }
        ConnectorFormatForProcessingMode = -2004287480;
        v35 = 4035LL;
        goto LABEL_40;
      }
      MinProcessingPeriodForExclusiveMode = _o_terminate(v19, v18, v20);
      __debugbreak();
      goto LABEL_62;
    }
    v36 = 4027LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MinProcessingPeriodForExclusiveMode);
    goto LABEL_41;
  }
LABEL_30:
  if ( a6 )
  {
    MinProcessingPeriodForExclusiveMode = EffectPack::GetMinProcessingPeriodForExclusiveMode(
                                            (CEndpointCharacteristics **)v43[1],
                                            v15,
                                            a6);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode < 0 )
    {
LABEL_62:
      v36 = 4043LL;
      goto LABEL_45;
    }
  }
  if ( v44 )
    std::_Ref_count_base::_Decref(v44);
  if ( v43[0] )
    (*(void (__fastcall **)(EffectPack *))(*(_QWORD *)v43[0] + 16LL))(v43[0]);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v55);
  return 0LL;
}
