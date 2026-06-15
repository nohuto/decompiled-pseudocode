/*
 * XREFs of ?CreateStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800FC730
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800FDF30 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGrap.c)
 * Callees:
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x180009344 (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006E1BC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U1@U2@U?$_tlgWrapperByVal@$00@@U6@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@34AEBU?$_tlgWrapperByVal@$00@@88@Z @ 0x18007429C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByV.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x1800782B4 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F88E8 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteris.c)
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAudioModeEffectsWatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x1800F8AB0 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CDeviceGraphManager::CreateStreamGroup(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD *v3; // r13
  __int64 v4; // rsi
  va_list *v6; // r14
  va_list v7; // rdi
  unsigned int v8; // r15d
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rcx
  int v18; // eax
  va_list v19; // rax
  _DWORD *v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp-39h] BYREF
  _WORD v25[2]; // [rsp+90h] [rbp-31h] BYREF
  int v26; // [rsp+94h] [rbp-2Dh] BYREF
  int v27; // [rsp+98h] [rbp-29h] BYREF
  int v28; // [rsp+9Ch] [rbp-25h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-19h] BYREF
  const wchar_t *v31; // [rsp+B0h] [rbp-11h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v33[7]; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v34; // [rsp+110h] [rbp+4Fh] BYREF
  char v35; // [rsp+118h] [rbp+57h] BYREF
  __int64 v36; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va; // [rsp+120h] [rbp+5Fh]
  __int64 v38; // [rsp+128h] [rbp+67h] BYREF
  va_list va1; // [rsp+128h] [rbp+67h]
  __int64 v40; // [rsp+130h] [rbp+6Fh]
  va_list v41; // [rsp+138h] [rbp+77h] BYREF
  va_list va2; // [rsp+138h] [rbp+77h]
  _QWORD *v43; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va3; // [rsp+140h] [rbp+7Fh]
  va_list va4; // [rsp+148h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v36 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v38 = va_arg(va2, _QWORD);
  v40 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v41 = va_arg(va3, va_list);
  va_copy(va4, va3);
  v43 = va_arg(va4, _QWORD *);
  v34 = a2;
  v3 = v43;
  v4 = v36;
  *v43 = 0LL;
  (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)a3 + 80LL))(a3, v33);
  v6 = (va_list *)v41;
  v24 = 0LL;
  v7 = v41 + 8;
  if ( v41 )
    v8 = *(_DWORD *)(*(_QWORD *)v7 + 64LL);
  else
    v8 = 0;
  v9 = ATL::CComAllocator::Allocate(16LL * v8 + 88);
  v43 = v9;
  v10 = v9;
  if ( v9 )
  {
    *(_DWORD *)v9 = *(_DWORD *)(v4 + 8);
    *(_QWORD *)((char *)v9 + 4) = *(unsigned __int8 *)(v4 + 48);
    if ( v6 )
      v12 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v7 + 16LL) + 16LL) + 18;
    else
      v12 = 0;
    *((_DWORD *)v10 + 3) = v12;
    if ( v6 )
      v13 = *(_QWORD *)(*(_QWORD *)v7 + 16LL);
    else
      v13 = 0LL;
    v10[2] = v13;
    v10[3] = *(_QWORD *)v4;
    *((_DWORD *)v10 + 9) = *(unsigned __int16 *)(*(_QWORD *)(v4 + 16) + 16LL) + 18;
    v10[5] = *(_QWORD *)(v4 + 16);
    v10[6] = *(_QWORD *)(v4 + 24);
    if ( v6 )
      v14 = *(_DWORD *)(*(_QWORD *)v7 + 32LL);
    else
      v14 = 0;
    *((_DWORD *)v10 + 14) = v14;
    *(_OWORD *)((char *)v10 + 60) = *(_OWORD *)(v4 + 32);
    *((_DWORD *)v10 + 21) = v8;
    *((_DWORD *)v10 + 8) = *(unsigned __int8 *)(v4 + 50);
    if ( v6 )
      v15 = *(_DWORD *)(*(_QWORD *)v7 + 56LL);
    else
      v15 = 0;
    *((_DWORD *)v10 + 19) = v15;
    v16 = 0;
    *((_DWORD *)v10 + 20) = *(_BYTE *)(v4 + 49) != 0 ? 3 : 0;
    if ( v8 )
    {
      do
      {
        v17 = v16++;
        *(_OWORD *)&v10[2 * v17 + 11] = *(_OWORD *)(*(_QWORD *)v7 + 16 * v17 + 68);
      }
      while ( v16 < *((_DWORD *)v10 + 21) );
    }
    if ( *(_BYTE *)(v4 + 48) )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v24);
      v18 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> const &>(
              &v24,
              &v34,
              (__int64 *)va,
              (_QWORD **)va3,
              (__int64 *)va1,
              v40);
    }
    else
    {
      if ( v6 )
        v19 = *v6;
      else
        v19 = 0LL;
      v41 = v19;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v24);
      v18 = Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> const &,IAudioModeEffectsWatcher *>(
              &v24,
              (__int64)&v34,
              (__int64)va,
              (__int64)va3,
              (int *)va1,
              v40,
              (__int64 *)va2);
    }
    v11 = v18;
    v20 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v20 > 4u )
    {
      LOBYTE(v43) = *(_BYTE *)(v4 + 50);
      LOBYTE(v41) = *(_BYTE *)(v4 + 49);
      v35 = *(_BYTE *)(v4 + 48);
      v26 = *(_DWORD *)(v4 + 8);
      v29 = *(_QWORD *)(v4 + 24);
      v30 = v4 + 32;
      v25[0] = *(_WORD *)(*(_QWORD *)(v4 + 16) + 2LL);
      v27 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4LL);
      v31 = *(const wchar_t **)v4;
      v32 = v24;
      v28 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (__int64)v20,
        byte_1801A63F0,
        (__int64)v20,
        v21,
        (__int64)&v32,
        (__int64)&v28,
        &v31,
        (__int64)&v27,
        (__int64)v25,
        &v30,
        (__int64)&v29,
        (__int64)&v26,
        (__int64)&v35,
        (__int64)va2,
        (__int64)va3);
    }
    if ( v11 >= 0 )
    {
      v43 = 0LL;
      va_copy(v41, va3);
      v22 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)va2);
      v11 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v24, v22);
      if ( v11 >= 0 )
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)a3 + 48LL))(a3, (_QWORD **)va3);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)va3);
      if ( v11 >= 0 )
      {
        *v3 = v24;
        v24 = 0LL;
      }
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v24);
  CoTaskMemFree(v10);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v33);
  return (unsigned int)v11;
}
