/*
 * XREFs of ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180031F7C
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x180031BB0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@QEAA@XZ @ 0x180031B80 (--1-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConnectorProcessin.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180032964 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x180033C30 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     ?push_back@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@2@@Z @ 0x1800AF1C4 (-push_back@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VC.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98C4 (--0-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@_K@wil@@QEAA@XZ @ 0x180135414 (--1-$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 *     ?end@?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@_K@wil@@QEAAPEAPEAUtWAVEFORMATEX@@XZ @ 0x18013FF10 (-end@-$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ?GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@_K@wil@@@Z @ 0x180160AE8 (-GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver(
        __int64 a1,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7)
{
  __int128 *v9; // rdx
  int v10; // r8d
  int ConnectorProcessingModeDataFormatsFromDriver; // eax
  unsigned int v12; // ebx
  CConnectorProcessingModeCharacteristics *v13; // rax
  CConnectorProcessingModeCharacteristics *v14; // rbx
  __int64 v15; // rsi
  const struct tWAVEFORMATEX **v16; // rdi
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  __int64 v19; // r15
  __int64 v20; // r13
  int v21; // eax
  unsigned int v23; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v24; // [rsp+74h] [rbp-3Dh] BYREF
  unsigned int v25; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v26; // [rsp+7Ch] [rbp-35h]
  __int128 v27; // [rsp+80h] [rbp-31h] BYREF
  int v28[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v29; // [rsp+98h] [rbp-19h]
  _OWORD v30[5]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]
  CConnectorProcessingModeCharacteristics *v32; // [rsp+100h] [rbp+4Fh] BYREF
  unsigned int v33; // [rsp+108h] [rbp+57h] BYREF
  unsigned int v34; // [rsp+110h] [rbp+5Fh]
  __int64 v35; // [rsp+118h] [rbp+67h]

  v35 = a4;
  v34 = a3;
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v28);
  v27 = *v9;
  ConnectorProcessingModeDataFormatsFromDriver = GetConnectorProcessingModeDataFormatsFromDriver(
                                                   (_DWORD)g_DeviceEnumerator,
                                                   *(_QWORD *)(a1 + 72),
                                                   (unsigned int)&v27,
                                                   v10,
                                                   (__int64)v28);
  v12 = ConnectorProcessingModeDataFormatsFromDriver;
  if ( ConnectorProcessingModeDataFormatsFromDriver < 0 )
  {
    if ( ConnectorProcessingModeDataFormatsFromDriver != -2147467262
      && ConnectorProcessingModeDataFormatsFromDriver != -2147023728
      && ConnectorProcessingModeDataFormatsFromDriver != -2147024846 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1147,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)ConnectorProcessingModeDataFormatsFromDriver);
    }
    goto LABEL_21;
  }
  v13 = (CConnectorProcessingModeCharacteristics *)operator new[](0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  v32 = v13;
  if ( v13 )
  {
    *(_OWORD *)v13 = *a2;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    *((_QWORD *)v13 + 4) = 0LL;
    *((_QWORD *)v13 + 5) = 0LL;
    *((_QWORD *)v13 + 6) = 0LL;
    *((_QWORD *)v13 + 7) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  *(_QWORD *)&v27 = v14;
  if ( !v14 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x114A,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>((CConnectorProcessingModeCharacteristics **)&v27);
LABEL_21:
    wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::~unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>(v28);
    return v12;
  }
  v26 = a5 + 2;
  v15 = 0LL;
  v16 = *(const struct tWAVEFORMATEX ***)v28;
  v19 = wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::end(v28);
  if ( v16 != (const struct tWAVEFORMATEX **)v19 )
  {
    v20 = a6;
    do
    {
      v25 = v18;
      v23 = v18;
      v33 = v18;
      v24 = v18;
      LODWORD(v32) = v18;
      v30[0] = *a2;
      v21 = DiscoverPeriodicityCharacteristicsForFormat(
              *(_QWORD *)(a1 + 40),
              *(unsigned int *)(a1 + 236),
              v34,
              v30,
              *v16,
              v35,
              v17,
              v20,
              &v25,
              &v24,
              &v23,
              &v33,
              &v32);
      v18 = 0;
      if ( v21 >= 0 )
      {
        CConnectorProcessingModeCharacteristics::AddConnectorFormat(v14, *v16, v25, v24, v23, v33, (unsigned int)v32);
        ++v15;
        v18 = 0;
      }
      ++v16;
      v17 = v26;
    }
    while ( v16 != (const struct tWAVEFORMATEX **)v19 );
    if ( v15 )
      std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::push_back(a7, &v27, v26, 0LL);
  }
  if ( v15 != v29 )
    *(_DWORD *)(a1 + 260) = 1;
  std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>((CConnectorProcessingModeCharacteristics **)&v27);
  wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>::~unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,unsigned __int64>(v28);
  return 0LL;
}
