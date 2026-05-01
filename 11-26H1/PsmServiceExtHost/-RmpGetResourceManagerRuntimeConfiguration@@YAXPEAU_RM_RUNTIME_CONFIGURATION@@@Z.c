/*
 * XREFs of ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180080BD4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180080968 (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     ?RmpSystemIsSdBusBased@@YAKXZ @ 0x18008C49C (-RmpSystemIsSdBusBased@@YAKXZ.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall RmpGetResourceManagerRuntimeConfiguration(struct _RM_RUNTIME_CONFIGURATION *a1)
{
  int v2; // ebx
  _OWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm2
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // rdi
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v20[3]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v21[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+8Ch] [rbp-74h]
  int v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+94h] [rbp-6Ch]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  int v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A4h] [rbp-5Ch]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  int v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B4h] [rbp-4Ch]
  int v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+ECh] [rbp-14h]
  int v37; // [rsp+F4h] [rbp-Ch]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  int v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+104h] [rbp+4h]
  int v42; // [rsp+108h] [rbp+8h]
  int v43; // [rsp+10Ch] [rbp+Ch]
  int v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+114h] [rbp+14h]
  char v46; // [rsp+118h] [rbp+18h]
  _BYTE v47[176]; // [rsp+120h] [rbp+20h] BYREF

  memset_0(v21, 0, 0xB0uLL);
  memset_0(v47, 0, sizeof(v47));
  if ( (unsigned int)MemUtilIsLowMemPolicyActive() )
  {
    v2 = 7;
    if ( RmpSystemIsSdBusBased() )
      v2 = 15;
    v21[0] = v2;
  }
  else
  {
    LOBYTE(v2) = v21[0];
  }
  v35 = 35;
  v26 = 90;
  v29 = 90;
  v22 = 52428800LL;
  v23 = 50;
  v28 = 85;
  v34 = 85;
  v36 = 5000LL;
  v37 = 5000;
  v38 = 5000;
  v43 = 5000;
  v44 = 5000;
  v24 = 70;
  v25 = 170;
  v27 = 75;
  v30 = 95;
  v33 = 89;
  v31 = 10;
  v32 = 65;
  v39 = 60000;
  v42 = 60000;
  v40 = 0x200000;
  v41 = 2;
  v45 = 1000;
  v46 = 30;
  if ( (int)RmpGetResourceManagerRegistryOverrides(
              (struct _RM_RUNTIME_CONFIGURATION *)v21,
              (struct _RM_RUNTIME_CONFIGURATION *)v47) < 0 )
  {
    if ( (unsigned int)dword_1800E1278 > 2 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
    {
      v19 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v4,
        byte_1800D10A9,
        v5,
        v6,
        (__int64)&v19);
    }
    v3 = v21;
  }
  else
  {
    LOBYTE(v2) = v47[0];
    v3 = v47;
  }
  v7 = 0LL;
  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 32);
  *(__m128i *)((char *)v20 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  if ( (v2 & 4) == 0 )
  {
    *(__m128i *)((char *)&v20[1] + 8) = _mm_load_si128((const __m128i *)&_xmm);
    HIDWORD(v20[2]) = 1;
    v7 = v20[2];
  }
  v8 = v20[1];
  *(_OWORD *)((char *)v3 + 72) = v20[0];
  *(_OWORD *)((char *)v3 + 88) = v8;
  *(_OWORD *)((char *)v3 + 104) = v7;
  v9 = v3[1];
  *(_OWORD *)a1 = *v3;
  v10 = v3[2];
  *((_OWORD *)a1 + 1) = v9;
  v11 = v3[3];
  *((_OWORD *)a1 + 2) = v10;
  v12 = v3[4];
  *((_OWORD *)a1 + 3) = v11;
  v13 = v3[5];
  *((_OWORD *)a1 + 4) = v12;
  v14 = v3[6];
  *((_OWORD *)a1 + 5) = v13;
  v15 = v3[8];
  *((_OWORD *)a1 + 6) = v14;
  v16 = (_OWORD *)((char *)a1 + 128);
  *(v16 - 1) = v3[7];
  v17 = v3[9];
  *v16 = v15;
  v18 = v3[10];
  v16[1] = v17;
  v16[2] = v18;
}
