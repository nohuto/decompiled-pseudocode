/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032C6C
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x180031BB0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18000E2D8 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E90 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x180032BD0 (-RemoveAll@-$CSimpleArray@V-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V-$CSimpleArrayEqualHelper@V-$CCo.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x1800333A0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x1800348AC (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?GetProposedConnectorFormatForProcessingMode@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180034DAC (-GetProposedConnectorFormatForProcessingMode@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@W4.c)
 *     ?IsViableChannelCount@@YA_NIPEATKSDATAFORMAT@@IPEA_N@Z @ 0x1800AA658 (-IsViableChannelCount@@YA_NIPEATKSDATAFORMAT@@IPEA_N@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___(
        struct IPropertyStore **a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int a3,
        union KSDATAFORMAT *a4,
        struct _GUID *a5,
        __int128 *a6)
{
  size_t v6; // r12
  int v9; // r15d
  char *v10; // rdi
  int ProposedConnectorFormatForProcessingMode; // eax
  void *v12; // rbx
  __int128 *v13; // rsi
  unsigned __int64 v14; // r14
  signed int i; // esi
  __int64 v16; // rbx
  void *v17; // rcx
  char *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // eax
  size_t v22; // r14
  _DWORD *v23; // r10
  ULONG v24; // ebx
  union KSDATAFORMAT *v25; // rax
  char v26; // r9
  unsigned int v27; // eax
  int *m; // r13
  char *v29; // r14
  ULONG v30; // eax
  union KSDATAFORMAT *v31; // rcx
  char v32; // r10
  size_t v33; // r9
  union KSDATAFORMAT *v34; // r8
  LONGLONG v35; // rdx
  int v36; // edx
  int v37; // r8d
  LONGLONG v38; // rdx
  char *v39; // rcx
  union KSDATAFORMAT *v40; // r8
  LONGLONG v41; // rdx
  LONGLONG v42; // rdx
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  __int128 *v44; // [rsp+38h] [rbp-C8h]
  unsigned int v45; // [rsp+40h] [rbp-C0h]
  unsigned int v46; // [rsp+44h] [rbp-BCh]
  union KSDATAFORMAT *v47; // [rsp+48h] [rbp-B8h]
  _DWORD *k; // [rsp+50h] [rbp-B0h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v50; // [rsp+68h] [rbp-98h]
  struct _GUID v51; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v52[14]; // [rsp+80h] [rbp-80h] BYREF
  char *v53; // [rsp+B8h] [rbp-48h]
  void *Src; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v55; // [rsp+C8h] [rbp-38h]
  __int64 j; // [rsp+D0h] [rbp-30h]
  char *v57[2]; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v58[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v59; // [rsp+108h] [rbp+8h]
  int v60; // [rsp+10Ch] [rbp+Ch]
  _DWORD v61[2]; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  __int128 v63; // [rsp+120h] [rbp+20h]
  __int128 v64; // [rsp+130h] [rbp+30h]
  int v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  __int128 v67; // [rsp+150h] [rbp+50h]
  int v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  __int128 v70; // [rsp+170h] [rbp+70h]
  int v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]
  __int128 v73; // [rsp+190h] [rbp+90h]
  __int128 v74; // [rsp+1A0h] [rbp+A0h] BYREF
  __m256i v75; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v76; // [rsp+1D0h] [rbp+D0h]

  v47 = a4;
  v6 = a3;
  v44 = a6;
  v57[0] = 0LL;
  v57[1] = 0LL;
  v9 = 0;
  *(_OWORD *)pvar = 0LL;
  v50 = 0LL;
  v52[0] = 8000;
  v52[1] = 11025;
  v52[2] = 16000;
  v52[3] = 22050;
  v52[4] = 24000;
  v52[5] = 32000;
  v52[6] = 44100;
  v52[7] = 48000;
  v52[8] = 88200;
  v52[9] = 96000;
  v52[10] = 176400;
  v52[11] = 192000;
  v52[12] = 352800;
  v52[13] = 384000;
  v58[0] = _mm_load_si128((const __m128i *)&_xmm);
  v58[1] = _mm_load_si128((const __m128i *)&_xmm);
  v59 = 32;
  v60 = 32;
  v61[0] = 0;
  v62 = 0LL;
  v63 = unk_180170538;
  v64 = unk_180170558;
  v65 = 0;
  v66 = 0LL;
  v67 = unk_180170578;
  v68 = 0;
  v69 = 0LL;
  v70 = unk_180170548;
  v71 = 0;
  v72 = 0LL;
  v73 = unk_180170568;
  v10 = 0LL;
  v53 = 0LL;
  CEndpointCharacteristics::HasHardwareAudioEngine((CEndpointCharacteristics *)a1);
  pv = 0LL;
  v74 = *a6;
  v75 = *(__m256i *)(a6 + 1);
  v76 = a6[3];
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
    (CEndpointCharacteristics *)a1,
    (__int64)&v74,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v74 = *v44;
  v75 = *(__m256i *)(v44 + 1);
  v76 = v44[3];
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
    (CEndpointCharacteristics *)a1,
    (__int64)&v74,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v51 = *a5;
  ProposedConnectorFormatForProcessingMode = GetProposedConnectorFormatForProcessingMode(
                                               g_DeviceEnumerator,
                                               a1[9],
                                               a2,
                                               &v51,
                                               (struct tWAVEFORMATEX **)&pv);
  v12 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0
    && *((_WORD *)pv + 7)
    && *((_DWORD *)pv + 2)
    && *((_WORD *)pv + 6)
    && *((_WORD *)pv + 1) )
  {
    v13 = v44;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(v44, pv, 0LL);
      if ( v9 < 0 )
      {
        v17 = v12;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v13 = v44;
  }
  CoTaskMemFree(v12);
  *(_QWORD *)&v51.Data1 = 0LL;
  if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))a1[9]->lpVtbl->GetValue)(
         a1[9],
         &PKEY_AudioEngine_DeviceFormat,
         pvar) >= 0
    && LODWORD(pvar[1]) >= 0x12
    && LOWORD(pvar[0]) == 65
    && LODWORD(pvar[1]) == v50->cbSize + 18LL )
  {
    v9 = ValidateWaveFormatEx(v50);
    if ( v9 >= 0 )
    {
      v9 = lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(v13, v50, 0LL);
      if ( v9 < 0 )
      {
        v17 = 0LL;
LABEL_15:
        CoTaskMemFree(v17);
        goto LABEL_16;
      }
    }
  }
  PropVariantClear(pvar);
  CoTaskMemFree(0LL);
  v14 = (unsigned int)(3 * v6);
  *(_QWORD *)&v51.Data1 = v14;
  v10 = (char *)operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
  v53 = v10;
  if ( v10 )
  {
    for ( i = 0; (unsigned int)i < 9; ++i )
    {
      v55 = 16LL * i;
      v16 = (int)v61[v55 / 4];
      if ( (_DWORD)v16 )
      {
        memset_0(v10, 1, v14);
        if ( IsViableChannelCount(v6, v47, i, (bool *)v10) )
        {
          v19 = 0LL;
          v20 = v16;
          for ( j = v16; ; v20 = j )
          {
            pv = v19;
            if ( (__int64)v19 >= v20 )
              break;
            v21 = 0;
            for ( k = v52; ; k = v23 + 1 )
            {
              v46 = v21;
              if ( v21 >= 0xE )
                break;
              v22 = v6;
              Src = &v10[v6];
              memcpy_0(&v10[v6], v10, v6);
              v23 = k;
              v24 = *k;
              v25 = v47;
              v26 = 0;
              if ( !(_DWORD)v6 )
                goto LABEL_24;
              v39 = &v10[v6];
              do
              {
                v40 = (union KSDATAFORMAT *)((char *)v25 + v25->FormatSize);
                if ( *v39 )
                {
                  v41 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *(&v25->Alignment + 2);
                  if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *(&v25->Alignment + 2) )
                    v41 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *(&v25->Alignment + 3);
                  if ( v41 )
                    goto LABEL_51;
                  v42 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(&v25->Alignment + 4);
                  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(&v25->Alignment + 4) )
                    v42 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(&v25->Alignment + 5);
                  if ( v42 || v24 < v25[1].Reserved || v24 > v25[1].MajorFormat.Data1 )
                  {
LABEL_51:
                    *v39 = 0;
                  }
                  else
                  {
                    *v39 = 1;
                    v26 = 1;
                  }
                }
                ++v39;
                v25 = v40;
                --v22;
              }
              while ( v22 );
              if ( v26 )
              {
LABEL_24:
                v27 = 0;
                for ( m = (int *)v58 + 1; ; m += 2 )
                {
                  v45 = v27;
                  if ( v27 >= 5 )
                    break;
                  v29 = &v10[(unsigned int)(2 * v6)];
                  memcpy_0(v29, Src, v6);
                  v30 = *(m - 1);
                  v31 = v47;
                  v32 = 0;
                  if ( !(_DWORD)v6 )
                    goto LABEL_74;
                  v33 = v6;
                  do
                  {
                    v34 = (union KSDATAFORMAT *)((char *)v31 + v31->FormatSize);
                    if ( *v29 )
                    {
                      v35 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *(&v31->Alignment + 2);
                      if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *(&v31->Alignment + 2) )
                        v35 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *(&v31->Alignment + 3);
                      if ( v35 )
                        goto LABEL_32;
                      v38 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(&v31->Alignment + 4);
                      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(&v31->Alignment + 4) )
                        v38 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(&v31->Alignment + 5);
                      if ( v38 || v30 < v31[1].Flags || v30 > v31[1].SampleSize )
                      {
LABEL_32:
                        *v29 = 0;
                      }
                      else
                      {
                        *v29 = 1;
                        v32 = 1;
                      }
                    }
                    ++v29;
                    v31 = v34;
                    --v33;
                  }
                  while ( v33 );
                  if ( v32 )
                  {
LABEL_74:
                    v74 = 0LL;
                    memset(&v75, 0, 24);
                    v36 = *(_DWORD *)(*(__int64 *)((char *)&v62 + v55) + 4LL * (_QWORD)pv);
                    v37 = *m;
                    if ( !v36 && i <= 2 )
                      v36 = 4 - (i != 1);
                    v75.m256i_i16[1] = v30;
                    v75.m256i_i32[1] = v36;
                    *(GUID *)&v75.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
                    LOWORD(v74) = -2;
                    HIWORD(v74) = v37;
                    v75.m256i_i16[0] = 22;
                    WORD1(v74) = i;
                    DWORD1(v74) = v24;
                    WORD6(v74) = i * ((unsigned __int16)v37 >> 3);
                    DWORD2(v74) = v24 * WORD6(v74);
                    v9 = lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(v44, &v74, 0LL);
                    if ( v9 < 0 )
                      goto LABEL_16;
                  }
                  v27 = v45 + 1;
                }
                v23 = k;
              }
              v21 = v46 + 1;
            }
            v19 = (char *)pv + 1;
          }
          v14 = *(_QWORD *)&v51.Data1;
        }
      }
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_16:
  PropVariantClear(pvar);
  operator delete(v10, (const struct std::nothrow_t *)1);
  ATL::CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>::RemoveAll(v57);
  return (unsigned int)v9;
}
