/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U1@U1@U1@U2@U?$_tlgWrapperByVal@$01@@U4@U4@U?$_tlgWrapSz@G@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@5553334AEBU?$_tlgWrapperByVal@$01@@66AEBU?$_tlgWrapSz@G@@7@Z @ 0x180076110
 * Callers:
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18014207C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180145064 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        const wchar_t **a18,
        const wchar_t **a19)
{
  __int64 v20; // rcx
  const wchar_t *v22; // r8
  __int64 v23; // rax
  int v24; // eax
  const wchar_t *v25; // rdx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v30; // [rsp+30h] [rbp-D0h]
  _DWORD v31[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  unsigned __int8 *v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h]
  int v38; // [rsp+6Ch] [rbp-94h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  __int64 v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  __int64 v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int64 v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  const wchar_t *v65; // [rsp+140h] [rbp+40h]
  int v66; // [rsp+148h] [rbp+48h]
  int v67; // [rsp+14Ch] [rbp+4Ch]
  const wchar_t *v68; // [rsp+150h] [rbp+50h]
  int v69; // [rsp+158h] [rbp+58h]
  int v70; // [rsp+15Ch] [rbp+5Ch]

  v20 = -1LL;
  v22 = *a19;
  if ( *a19 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = &LocaleName;
    v24 = 2;
  }
  v69 = v24;
  v68 = v22;
  v70 = 0;
  v25 = *a18;
  if ( *a18 )
  {
    do
      ++v20;
    while ( v25[v20] );
    v26 = 2 * v20 + 2;
  }
  else
  {
    v25 = &LocaleName;
    v26 = 2;
  }
  v63 = a17;
  v61 = a16;
  v59 = a15;
  v66 = v26;
  v65 = v25;
  v67 = 0;
  v27 = *a14;
  v55 = a13;
  v53 = a12;
  v51 = a11;
  v49 = a10;
  v47 = a9;
  v45 = a8;
  v43 = a7;
  v57 = v27;
  v64 = 2LL;
  v62 = 2LL;
  v28 = *a6;
  v39 = a5;
  v31[0] = *a2 << 24;
  v31[1] = *(unsigned __int16 *)(a2 + 1);
  v32 = *(_QWORD *)(a2 + 3);
  v33 = *(unsigned __int16 **)(a1 + 8);
  v41 = v28;
  v60 = 2LL;
  v58 = 16LL;
  v56 = 4LL;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 1LL;
  v48 = 1LL;
  v46 = 1LL;
  v44 = 1LL;
  v42 = 16LL;
  v40 = 4LL;
  v34 = *v33;
  v37 = *(unsigned __int16 *)(a2 + 11);
  v36 = a2 + 11;
  v35 = 2;
  v38 = 1;
  LODWORD(v30) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v31, 0LL, 0LL, 17, &v33, v30);
}
