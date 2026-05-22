/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U3@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@533@Z @ 0x180007D90
 * Callers:
 *     ?LogSendEdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@AEAAXPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180159F24 (-LogSendEdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@AEAAXPEBGIAEBUD2D_VECTOR.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const WCHAR *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _BYTE v17[32]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v18; // [rsp+50h] [rbp-79h]
  __int64 v19; // [rsp+58h] [rbp-71h]
  __int64 v20; // [rsp+60h] [rbp-69h]
  __int64 v21; // [rsp+68h] [rbp-61h]
  const WCHAR *v22; // [rsp+70h] [rbp-59h]
  int v23; // [rsp+78h] [rbp-51h]
  int v24; // [rsp+7Ch] [rbp-4Dh]
  __int64 v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  __int64 v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  __int64 v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  __int64 v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  __int64 v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]

  v33 = a12;
  v31 = a11;
  v29 = a10;
  v27 = a9;
  v25 = a8;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 8LL;
  v13 = *a7;
  v28 = 8LL;
  v26 = 4LL;
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &WindowName;
    v15 = 2;
  }
  v23 = v15;
  v20 = a6;
  v18 = a5;
  v22 = v13;
  v24 = 0;
  v21 = 4LL;
  v19 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 10, v17);
}
