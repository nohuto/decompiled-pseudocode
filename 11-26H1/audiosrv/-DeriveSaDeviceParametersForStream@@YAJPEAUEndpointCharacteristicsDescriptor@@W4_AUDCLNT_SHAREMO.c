/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002F580
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800CB974 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E2C44 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E32D0 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 *     ?ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800E4E24 (-ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristi.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180014990 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002E644 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     WPP_SF_di @ 0x1800CCA88 (WPP_SF_di.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveSaDeviceParametersForStream(
        CEndpointCharacteristics ***a1,
        enum _AUDCLNT_SHAREMODE a2,
        unsigned __int32 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct tWAVEFORMATEX *a6,
        struct tWAVEFORMATEX *Src,
        __int64 a8,
        struct SaDeviceParams **a9)
{
  void *v12; // rbx
  int DeviceDefaults; // eax
  signed int v14; // r14d
  void *v15; // rax
  void *v16; // rsi
  void *v17; // rdi
  struct SaDeviceParams *v18; // rcx
  void *v20; // rax
  void *v21; // r14
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  void *v26; // [rsp+48h] [rbp-28h]
  size_t Size; // [rsp+50h] [rbp-20h]
  struct _GUID v28; // [rsp+60h] [rbp-10h] BYREF

  v12 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v28 = *a4;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v28, 0LL, 0LL, &a8, &v25);
  else
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v28, 0LL, 0LL, 0LL, &v25);
  v14 = DeviceDefaults;
  if ( DeviceDefaults >= 0 )
  {
    v15 = operator new[](0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v15;
    if ( v15 )
      memset_0(v15, 0, 0x70uLL);
    else
      v12 = 0LL;
    v26 = v12;
    v14 = v12 == 0LL ? 0x8007000E : 0;
    v16 = 0LL;
    v17 = 0LL;
    if ( v12 )
    {
      Size = Src->cbSize + 18LL;
      v20 = CoTaskMemAlloc(Size);
      v21 = v20;
      v17 = v20;
      if ( v20
        && (memcpy_0(v20, Src, Size),
            Size = a6->cbSize + 18LL,
            v22 = CoTaskMemAlloc(Size),
            *(_QWORD *)&v28.Data1 = v22,
            (v16 = v22) != 0LL) )
      {
        memcpy_0(v22, a6, Size);
        *((_DWORD *)v12 + 2) = a3;
        v16 = 0LL;
        Size = 0LL;
        CoTaskMemFree(*((LPVOID *)v12 + 2));
        *((_QWORD *)v12 + 2) = *(_QWORD *)&v28.Data1;
        v17 = 0LL;
        *(_QWORD *)&v28.Data1 = 0LL;
        CoTaskMemFree(*((LPVOID *)v12 + 3));
        *((_QWORD *)v12 + 3) = v21;
        *((_QWORD *)v12 + 4) = a8;
        *((_QWORD *)v12 + 5) = v25;
        *((struct _GUID *)v12 + 4) = *a5;
        *((struct _GUID *)v12 + 3) = *a4;
        v14 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *, void *))(*(_QWORD *)(*a1)[5] + 40LL))(
                (*a1)[5],
                v12);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_di(*((_QWORD *)WPP_GLOBAL_Control + 2), v23, v24, a3, a8);
        }
        CoCreateGuid((GUID *)v12 + 5);
      }
      else
      {
        v14 = -2147024882;
      }
    }
    CoTaskMemFree(v17);
    CoTaskMemFree(v16);
    if ( v14 >= 0 )
    {
      v18 = (struct SaDeviceParams *)v12;
      v12 = 0LL;
      *a9 = v18;
    }
  }
  if ( v12 )
    SaDeviceParams::`scalar deleting destructor'((SaDeviceParams *)v12);
  return (unsigned int)v14;
}
