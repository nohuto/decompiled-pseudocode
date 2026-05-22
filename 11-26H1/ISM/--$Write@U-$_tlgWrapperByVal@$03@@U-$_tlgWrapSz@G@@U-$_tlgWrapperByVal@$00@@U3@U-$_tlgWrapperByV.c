/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$01@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$01@@3333@Z @ 0x1800040C0
 * Callers:
 *     ?DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z @ 0x1800DCDA0 (-DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v15; // edx
  const WCHAR *v16; // rcx
  __int64 v17; // rax
  _BYTE v19[32]; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v20; // [rsp+50h] [rbp-91h]
  __int64 v21; // [rsp+58h] [rbp-89h]
  const WCHAR *v22; // [rsp+60h] [rbp-81h]
  int v23; // [rsp+68h] [rbp-79h]
  int v24; // [rsp+6Ch] [rbp-75h]
  __int64 v25; // [rsp+70h] [rbp-71h]
  __int64 v26; // [rsp+78h] [rbp-69h]
  __int64 v27; // [rsp+80h] [rbp-61h]
  __int64 v28; // [rsp+88h] [rbp-59h]
  __int64 v29; // [rsp+90h] [rbp-51h]
  __int64 v30; // [rsp+98h] [rbp-49h]
  __int64 v31; // [rsp+A0h] [rbp-41h]
  __int64 v32; // [rsp+A8h] [rbp-39h]
  __int64 v33; // [rsp+B0h] [rbp-31h]
  __int64 v34; // [rsp+B8h] [rbp-29h]
  __int64 v35; // [rsp+C0h] [rbp-21h]
  __int64 v36; // [rsp+C8h] [rbp-19h]
  __int64 v37; // [rsp+D0h] [rbp-11h]
  __int64 v38; // [rsp+D8h] [rbp-9h]

  v37 = a13;
  v35 = a12;
  v15 = 2;
  v33 = a11;
  v31 = a10;
  v29 = a9;
  v27 = a8;
  v25 = a7;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 4LL;
  v16 = *a6;
  v32 = 4LL;
  v30 = 2LL;
  v28 = 1LL;
  v26 = 1LL;
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v15 = 2 * v17 + 2;
  }
  else
  {
    v16 = &WindowName;
  }
  v20 = a5;
  v22 = v16;
  v23 = v15;
  v24 = 0;
  v21 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 11, v19);
}
