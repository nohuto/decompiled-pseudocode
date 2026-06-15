/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U1@U4@U?$_tlgWrapperByVal@$03@@U5@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@36AEBU?$_tlgWrapperByVal@$03@@75@Z @ 0x18000529C
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18013D040 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004EB10 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        const wchar_t **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  const wchar_t *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  const wchar_t *v22; // rcx
  _BYTE v24[32]; // [rsp+30h] [rbp-B1h] BYREF
  const wchar_t *v25; // [rsp+50h] [rbp-91h]
  int v26; // [rsp+58h] [rbp-89h]
  int v27; // [rsp+5Ch] [rbp-85h]
  __int64 v28; // [rsp+60h] [rbp-81h]
  __int64 v29; // [rsp+68h] [rbp-79h]
  __int64 v30; // [rsp+70h] [rbp-71h]
  __int64 v31; // [rsp+78h] [rbp-69h]
  __int64 v32; // [rsp+80h] [rbp-61h]
  __int64 v33; // [rsp+88h] [rbp-59h]
  const wchar_t *v34; // [rsp+90h] [rbp-51h]
  int v35; // [rsp+98h] [rbp-49h]
  int v36; // [rsp+9Ch] [rbp-45h]
  __int64 v37; // [rsp+A0h] [rbp-41h]
  __int64 v38; // [rsp+A8h] [rbp-39h]
  __int64 v39; // [rsp+B0h] [rbp-31h]
  __int64 v40; // [rsp+B8h] [rbp-29h]
  __int64 v41; // [rsp+C0h] [rbp-21h]
  __int64 v42; // [rsp+C8h] [rbp-19h]
  __int64 v43; // [rsp+D0h] [rbp-11h]
  __int64 v44; // [rsp+D8h] [rbp-9h]

  v44 = 16LL;
  v42 = 4LL;
  v15 = -1LL;
  v40 = 4LL;
  v16 = *a13;
  v17 = 2;
  v41 = a12;
  v39 = a11;
  v37 = a10;
  v43 = v16;
  v38 = 2LL;
  v18 = *a9;
  if ( *a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &LocaleName;
    v20 = 2;
  }
  v35 = v20;
  v32 = a8;
  v34 = v18;
  v36 = 0;
  v33 = 2LL;
  v21 = *a7;
  v28 = a6;
  v30 = v21;
  v31 = 16LL;
  v29 = 1LL;
  v22 = *a5;
  if ( *a5 )
  {
    do
      ++v15;
    while ( v22[v15] );
    v17 = 2 * v15 + 2;
  }
  else
  {
    v22 = &LocaleName;
  }
  v25 = v22;
  v26 = v17;
  v27 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 11, (__int64)v24);
}
