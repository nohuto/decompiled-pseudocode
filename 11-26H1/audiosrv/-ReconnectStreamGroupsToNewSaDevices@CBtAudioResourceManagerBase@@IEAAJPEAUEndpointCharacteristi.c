/*
 * XREFs of ?ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800E4E24
 * Callers:
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800E53B0 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002DEE4 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002F580 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045598 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004D2AC (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800747EC (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180078BF0 (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800E43B8 (-GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEA.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800E8380 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CBtAudioResourceManagerBase::ReconnectStreamGroupsToNewSaDevices(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  _QWORD *i; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  struct tWAVEFORMATEX *v14; // rdi
  int SharedModeEnginePeriodicity; // eax
  int v16; // esi
  double v17; // xmm1_8
  __int64 v18; // r8
  struct tWAVEFORMATEX *v19; // rsi
  int SaDeviceWrapper; // r14d
  __int64 (__fastcall *v21)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD); // rdi
  char v22; // al
  __int64 v23; // rdx
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  struct tWAVEFORMATEX *v27; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h] BYREF
  int v29; // [rsp+90h] [rbp-70h] BYREF
  SaDeviceParams *v30; // [rsp+98h] [rbp-68h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *v32; // [rsp+A8h] [rbp-58h] BYREF
  int v33; // [rsp+B0h] [rbp-50h] BYREF
  int v34; // [rsp+B4h] [rbp-4Ch] BYREF
  int v35; // [rsp+B8h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v36; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v37; // [rsp+D0h] [rbp-30h] BYREF
  struct _GUID v38; // [rsp+E0h] [rbp-20h] BYREF
  char v39; // [rsp+F0h] [rbp-10h]
  struct _GUID v40; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v41[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v42; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  memset(v41, 0, sizeof(v41));
  v42 = 0LL;
  for ( i = (_QWORD *)*a3; i; i = (_QWORD *)*i )
  {
    v31 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(i + 1, (__int64 *)&v31) >= 0 && v31 )
    {
      v28 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v31, &v28) >= 0 )
      {
        v25 = 0LL;
        if ( a4 )
        {
          if ( a4 == 1 )
          {
            v36 = 0LL;
            v32 = 0LL;
            v27 = 0LL;
            pv = 0LL;
            v11 = i[2];
            v38 = *(struct _GUID *)(v11 + 48);
            v40 = v38;
            v37 = v38;
            v12 = DeriveDeviceGraphFormatsForStream(
                    (CEndpointCharacteristics **)a2,
                    0,
                    *(_DWORD *)(v11 + 8),
                    AUDCLNT_SHAREMODE_SHARED,
                    0,
                    (IAudioMediaType *)&v37,
                    &v40,
                    &v38,
                    0LL,
                    &v27,
                    (struct tWAVEFORMATEX **)&pv,
                    &v32,
                    &v36);
            v9 = v12;
            if ( v12 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x6DF,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                (const char *)(unsigned int)v12);
              CoTaskMemFree(pv);
              CoTaskMemFree(v27);
              CoTaskMemFree(v32);
              CoTaskMemFree(v36);
              goto LABEL_26;
            }
            v29 = 0;
            v34 = 0;
            v33 = 0;
            v35 = 0;
            v13 = i[2];
            v37 = *(struct _GUID *)(v13 + 48);
            v14 = v36;
            SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                            *(_QWORD **)(a2 + 8),
                                            *(unsigned int *)(v13 + 8),
                                            &v36->wFormatTag,
                                            &v37,
                                            0,
                                            &v29,
                                            &v35,
                                            &v34,
                                            &v33);
            v16 = SharedModeEnginePeriodicity;
            if ( SharedModeEnginePeriodicity < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x6EA,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                (const char *)(unsigned int)SharedModeEnginePeriodicity);
              CoTaskMemFree(pv);
              CoTaskMemFree(v27);
              CoTaskMemFree(v32);
              CoTaskMemFree(v14);
              v9 = v16;
              goto LABEL_26;
            }
            v17 = (double)v29 * 10000000.0 / (double)(int)v14->nSamplesPerSec + 0.5;
            v30 = 0LL;
            *(_QWORD *)&v38.Data1 = &v30;
            *(_QWORD *)v38.Data4 = 0LL;
            v39 = 1;
            v18 = i[2];
            v37 = *(struct _GUID *)(v18 + 48);
            v40 = v37;
            v19 = v32;
            SaDeviceWrapper = DeriveSaDeviceParametersForStream(
                                (CEndpointCharacteristics ***)a2,
                                AUDCLNT_SHAREMODE_SHARED,
                                *(_DWORD *)(v18 + 8),
                                &v40,
                                &v37,
                                v14,
                                v32,
                                (unsigned int)(int)v17,
                                (struct SaDeviceParams **)v38.Data4);
            wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v38);
            if ( SaDeviceWrapper < 0 )
            {
              v23 = 1783LL;
LABEL_21:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v23,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                (const char *)(unsigned int)SaDeviceWrapper);
              std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v30);
              CoTaskMemFree(pv);
              CoTaskMemFree(v27);
              CoTaskMemFree(v19);
              CoTaskMemFree(v14);
              v9 = SaDeviceWrapper;
LABEL_26:
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v31);
              return v9;
            }
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
            SaDeviceWrapper = CBtAudioResourceManagerBase::GetSaDeviceWrapper(
                                a1,
                                (_QWORD *)a2,
                                (__int64)v30,
                                0,
                                0,
                                (__int64)v41,
                                (__int64)(i + 3),
                                0LL,
                                0LL,
                                (__int64)&v25);
            if ( SaDeviceWrapper < 0 )
            {
              v23 = 1785LL;
              goto LABEL_21;
            }
            std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v30);
            CoTaskMemFree(pv);
            CoTaskMemFree(v27);
            CoTaskMemFree(v19);
            CoTaskMemFree(v14);
          }
        }
        else
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
          v8 = CBtAudioResourceManagerBase::GetSaDeviceWrapper(
                 a1,
                 (_QWORD *)a2,
                 i[2],
                 0,
                 0,
                 (__int64)v41,
                 (__int64)(i + 3),
                 0LL,
                 0LL,
                 (__int64)&v25);
          v9 = v8;
          if ( v8 < 0 )
          {
            v10 = 1739LL;
            goto LABEL_25;
          }
        }
        v21 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 240LL))(v28);
        v8 = v21(g_DeviceGraphManager, v28, v25, v22 == 0, 0LL);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 1791LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v8);
          goto LABEL_26;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v25);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v28);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v31);
  }
  std::forward_list<DisplacedStreamGroup>::clear(a1 + 104);
  return 0LL;
}
