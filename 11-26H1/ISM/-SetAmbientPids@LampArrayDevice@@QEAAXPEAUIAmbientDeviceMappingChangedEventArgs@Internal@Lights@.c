/*
 * XREFs of ?SetAmbientPids@LampArrayDevice@@QEAAXPEAUIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@@Z @ 0x1800E707C
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E3D7C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E4590 (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180004424 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTempl.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$BY0A@IU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800E66E0 (--1-$out_param_t@V-$unique_ptr@$$BY0A@IU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LampArrayDevice::SetAmbientPids(
        LampArrayDevice *this,
        struct Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rcx
  unsigned int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-50h]
  int v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+44h] [rbp-2Ch] BYREF
  LPVOID pv; // [rsp+48h] [rbp-28h] BYREF
  const char *v18; // [rsp+50h] [rbp-20h] BYREF
  LPVOID *p_pv; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  char v21; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  char v23; // [rsp+98h] [rbp+28h] BYREF
  char v24; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+38h] BYREF

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2CA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      a4);
  v23 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs *, char *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v23);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2CD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v6,
      v14);
  *((_BYTE *)this + 224) = v23 != 0;
  v25 = 0;
  pv = 0LL;
  p_pv = &pv;
  v20 = 0LL;
  v21 = 1;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs *, unsigned int *, __int64 *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v25,
         &v20);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2D3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v7,
      v14);
  wil::details::out_param_t<wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pv);
  v10 = pv;
  v11 = v25;
  if ( v25 )
    v12 = *(_DWORD *)pv;
  else
    v12 = 0;
  *((_DWORD *)this + 54) = v12;
  if ( v11 <= 1 )
    v13 = 0;
  else
    v13 = v10[1];
  *((_DWORD *)this + 55) = v13;
  if ( (unsigned int)dword_180251248 > 5 )
  {
    v24 = *((_BYTE *)this + 224);
    v15 = *((_DWORD *)this + 55);
    v16 = *((_DWORD *)this + 54);
    v18 = "SetAmbientPids";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)v10,
      (__int64)&unk_180216426,
      v8,
      v9,
      (const unsigned __int16 **)&v18,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v24);
    v10 = pv;
  }
  pv = 0LL;
  if ( v10 )
    CoTaskMemFree(v10);
}
