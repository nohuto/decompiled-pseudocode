/*
 * XREFs of ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x180140E68
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18014152C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18014207C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x180144460 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180145064 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800021D4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x180006AC4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlgWrite.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180047620 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U4@U2@U4@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@44464645@Z @ 0x180067164 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapp.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180071FC8 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     IsHrtfEncoder @ 0x1800AC998 (IsHrtfEncoder.c)
 *     GetPreferredSpatialAudioEncoderId @ 0x1800AF880 (GetPreferredSpatialAudioEncoderId.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpatialProperties::EnumerateSpatialEncoders(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9,
        unsigned __int8 *a10)
{
  __int64 v11; // r14
  unsigned __int8 v13; // si
  __int128 *PreferredSpatialAudioEncoderId; // rax
  unsigned __int8 v15; // r13
  unsigned int v16; // r10d
  unsigned __int8 v17; // r15
  __int128 v18; // xmm1
  __int64 v19; // r11
  __int64 v20; // r12
  char v21; // al
  int v22; // eax
  char v23; // cl
  _DWORD *v24; // rcx
  int v25; // ecx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // r13
  _QWORD *v29; // r14
  int v30; // eax
  __int128 v31; // xmm0
  char *v32; // rax
  char *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // r8d
  unsigned int v41; // r12d
  _DWORD *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _DWORD *v46; // rcx
  int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // r9
  char v50; // [rsp+90h] [rbp-80h]
  unsigned __int8 v51; // [rsp+91h] [rbp-7Fh] BYREF
  unsigned __int8 v52; // [rsp+92h] [rbp-7Eh] BYREF
  char v53; // [rsp+93h] [rbp-7Dh] BYREF
  unsigned __int8 v54; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v55; // [rsp+95h] [rbp-7Bh] BYREF
  unsigned __int8 v56; // [rsp+96h] [rbp-7Ah] BYREF
  unsigned __int8 v57; // [rsp+97h] [rbp-79h] BYREF
  char v58[4]; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v59; // [rsp+9Ch] [rbp-74h]
  unsigned int v60; // [rsp+A0h] [rbp-70h]
  int v61; // [rsp+A4h] [rbp-6Ch] BYREF
  unsigned int v62; // [rsp+A8h] [rbp-68h] BYREF
  const wchar_t *v63; // [rsp+B0h] [rbp-60h]
  unsigned int v64; // [rsp+B8h] [rbp-58h] BYREF
  unsigned int v65; // [rsp+BCh] [rbp-54h] BYREF
  const wchar_t *v66; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-48h] BYREF
  const wchar_t *v68; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+D8h] [rbp-38h]
  __int64 v70; // [rsp+E0h] [rbp-30h]
  __int64 v71; // [rsp+E8h] [rbp-28h]
  __int64 v72; // [rsp+F0h] [rbp-20h]
  __int128 *v73; // [rsp+F8h] [rbp-18h] BYREF
  __int128 v74; // [rsp+100h] [rbp-10h] BYREF
  _BYTE v75[40]; // [rsp+110h] [rbp+0h] BYREF
  __int128 v76; // [rsp+138h] [rbp+28h] BYREF
  char v77[16]; // [rsp+148h] [rbp+38h] BYREF

  v11 = a5;
  v70 = a6;
  *(_DWORD *)(a10 + 1) = 151587081;
  *a10 = 9;
  v72 = a3;
  v69 = a5;
  v71 = a9;
  if ( !CSpatialProperties::s_isSpatialAudioAllowedOnPlatform )
  {
    *(_DWORD *)(a1 + 7700) = 3;
    return 0LL;
  }
  v50 = g_ListOfSpatialTech[0];
  v13 = 0;
  v63 = *(const wchar_t **)(*(_QWORD *)(a1 + 40) + 48LL);
  v60 = -1;
  v59 = -1;
  PreferredSpatialAudioEncoderId = GetPreferredSpatialAudioEncoderId(&v74, a4, a3);
  v15 = v50;
  v16 = 0;
  v17 = 0;
  v18 = *PreferredSpatialAudioEncoderId;
  *((_QWORD *)&v74 + 1) = v19;
  *(_QWORD *)&v74 = &AudioEndpointInfo::`vftable';
  v76 = v18;
  if ( v50 )
  {
    while ( 1 )
    {
      v53 = v16;
      v62 = v16;
      memset(v75, 0, sizeof(v75));
      if ( v17 >= (unsigned int)g_ListOfSpatialTech[0] )
        goto LABEL_57;
      v20 = qword_1801D66F8[v17];
      if ( !v20 )
        goto LABEL_57;
      v21 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64, int, unsigned int *, char *, _BYTE *))(*(_QWORD *)v20 + 40LL))(
              v20,
              &v74,
              v11,
              v70,
              a8,
              &v62,
              &v53,
              v75);
      v16 = 0;
      if ( !v21 )
        goto LABEL_57;
      v22 = *(_DWORD *)(a1 + 7700);
      if ( v22 != 2 )
        break;
      if ( *(_WORD *)&v75[2] != 2 )
        goto LABEL_19;
      v23 = dword_1801D7940++;
      if ( (v23 & 0xF) != 0 )
        goto LABEL_57;
      v24 = *(_DWORD **)(a1 + 48);
      if ( *v24 <= 4u || !tlgKeywordOn((__int64)v24, 16LL) )
        goto LABEL_57;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v25,
        (int)&unk_1801ADEB2);
LABEL_56:
      v16 = 0;
LABEL_57:
      if ( ++v17 >= v15 )
        goto LABEL_58;
    }
    if ( !v22
      && v11
      && *(_WORD *)(v11 + 2) == 8
      && *(_WORD *)&v75[2] == 2
      && (unsigned int)CEndpointCharacteristics::FormFactor(*(CEndpointCharacteristics **)(a1 + 40)) != 9 )
    {
      v26 = *(_OWORD *)v75;
      *(_DWORD *)(a1 + 7700) = 1;
      v27 = *(_OWORD *)&v75[16];
      *(_OWORD *)(a1 + 7704) = v26;
      *(_QWORD *)&v26 = *(_QWORD *)&v75[32];
      *(_OWORD *)(a1 + 7720) = v27;
      *(_QWORD *)(a1 + 7736) = v26;
    }
LABEL_19:
    v61 = (*(__int64 (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)v20 + 32LL))(v20, v63);
    v28 = v71 + 834LL * v13;
    *(_DWORD *)(v28 + 784) = v61 >= 0;
    v29 = (_QWORD *)(v28 + 768);
    *(_OWORD *)(v28 + 768) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 16LL))(v20, v77);
    *(_DWORD *)(v28 + 788) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20);
    *(_DWORD *)(v28 + 792) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
    *(_DWORD *)(v28 + 796) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 64LL))(v20);
    v31 = *(_OWORD *)&v75[24];
    *(_DWORD *)(v28 + 800) = v30;
    *(_DWORD *)(v28 + 804) = *(_DWORD *)&v75[4];
    *(_DWORD *)(v28 + 808) = *(_DWORD *)&v75[20];
    *(_WORD *)(v28 + 828) = *(_WORD *)&v75[2];
    *(_WORD *)(v28 + 830) = *(_WORD *)&v75[14];
    *(_WORD *)(v28 + 832) = *(_WORD *)&v75[18];
    *(_OWORD *)(v28 + 812) = v31;
    v32 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    StringCchCopyW((char *)v28, 256LL, v32);
    v33 = (char *)(*(__int64 (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)v20 + 24LL))(v20, v63);
    StringCchCopyW((char *)(v28 + 512), 128LL, v33);
    v34 = *(_QWORD *)(v28 + 768) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)(v28 + 768) == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v34 = *(_QWORD *)(v28 + 776) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    v16 = 0;
    if ( v34 )
    {
      v35 = -1LL;
      do
        ++v35;
      while ( *(_WORD *)(v28 + 2 * v35) );
      if ( v35 )
      {
        v36 = *v29 - v76;
        if ( *v29 == (_QWORD)v76 )
          v36 = *(_QWORD *)(v28 + 776) - *((_QWORD *)&v76 + 1);
        if ( !v36 )
          *a10 = v13;
        v37 = v72;
        v38 = *v29 - *(_QWORD *)(v72 + 12);
        if ( *v29 == *(_QWORD *)(v72 + 12) )
          v38 = *(_QWORD *)(v28 + 776) - *(_QWORD *)(v72 + 20);
        if ( !v38 )
          a10[1] = v13;
        v39 = *v29 - *(_QWORD *)(v37 + 28);
        if ( *v29 == *(_QWORD *)(v37 + 28) )
          v39 = *(_QWORD *)(v28 + 776) - *(_QWORD *)(v37 + 36);
        if ( !v39 )
          a10[2] = v13;
        if ( *(_DWORD *)(v28 + 784) && (v40 = v62) != 0 )
        {
          if ( v53 && v62 < v60 && (!IsHrtfEncoder((_QWORD *)(v28 + 768)) || (a7 & 8) != 0) )
          {
            v60 = v40;
            a10[3] = v13;
          }
          v41 = v59;
          if ( v40 < v59 && a10[3] != v13 )
          {
            v41 = v40;
            v59 = v40;
            a10[4] = v13;
          }
        }
        else
        {
          v41 = v59;
        }
        v42 = *(_DWORD **)(a1 + 48);
        if ( *v42 > 4u && tlgKeywordOn((__int64)v42, 16LL) )
        {
          v64 = v41;
          v73 = &v76;
          v54 = a10[4];
          v55 = a10[3];
          v65 = v60;
          v56 = a10[1];
          v57 = *a10;
          v58[0] = a10[2];
          v68 = v63;
          v66 = (const wchar_t *)v28;
          v67 = v28 + 768;
          v51 = v13;
          v52 = v17;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>>(
            v43,
            byte_1801ADD98,
            v44,
            v45,
            &v68,
            (__int64)&v52,
            (__int64)&v51,
            &v67,
            &v66,
            (__int64)&v61,
            (__int64)v58,
            (__int64)&v57,
            (__int64)&v56,
            (__int64)&v65,
            (__int64)&v55,
            (__int64)&v64,
            (__int64)&v54,
            (__int64 *)&v73);
          v16 = 0;
        }
        v11 = v69;
        ++v13;
        v15 = v50;
        goto LABEL_57;
      }
    }
    v46 = *(_DWORD **)(a1 + 48);
    if ( *v46 > 2u && tlgKeywordOn((__int64)v46, 16LL) )
    {
      v66 = v63;
      v68 = (const wchar_t *)v28;
      v67 = v28 + 768;
      v52 = v13;
      v51 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v47,
        (int)&unk_1801ADD38,
        v48,
        v49,
        &v66,
        (__int64)&v51,
        (__int64)&v52,
        &v67,
        &v68);
    }
    memset_0((void *)v28, 0, 0x342uLL);
    v11 = v69;
    v15 = v50;
    goto LABEL_56;
  }
LABEL_58:
  if ( *(_DWORD *)(a1 + 7700) == v16 )
    *(_DWORD *)(a1 + 7700) = 3;
  return v13;
}
