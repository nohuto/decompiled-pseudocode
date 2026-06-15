/*
 * XREFs of _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x1800333A0
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032C6C (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x1800348AC (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180035858 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x18013275C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda__.c)
 *     _lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator() @ 0x180137350 (_lambda_c7c9c295e9eb20a9e0b33ea00abada77_--operator().c)
 * Callees:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180032964 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x180033C30 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1801603EC (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(
        CConnectorProcessingModeCharacteristics ***a1,
        unsigned __int16 *a2,
        bool *a3)
{
  bool *v3; // r13
  CConnectorProcessingModeCharacteristics ***v5; // r12
  unsigned int v6; // r14d
  CConnectorProcessingModeCharacteristics *v7; // r9
  unsigned __int16 ***v8; // rbx
  unsigned __int16 ***v9; // r15
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int16 *v13; // rcx
  int v14; // edx
  __m128i v15; // xmm2
  __int64 v16; // xmm1_8
  int v17; // r8d
  __int16 v18; // r11
  int v19; // edx
  __m128i v20; // xmm2
  __int64 v21; // xmm1_8
  int v22; // ecx
  __int16 v23; // di
  __int16 v24; // r9
  int v25; // edx
  __int16 v26; // ax
  __int64 v27; // rax
  CConnectorProcessingModeCharacteristics **v28; // r9
  CConnectorProcessingModeCharacteristics **v29; // rdx
  CConnectorProcessingModeCharacteristics **v30; // rcx
  __int128 v31; // xmm0
  CConnectorProcessingModeCharacteristics **v32; // rax
  CConnectorProcessingModeCharacteristics **v33; // r8
  __int64 v34; // r8
  BOOL v35; // r10d
  CConnectorProcessingModeCharacteristics *v36; // rax
  __int64 v37; // rdx
  CConnectorProcessingModeCharacteristics *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int16 v41; // r8
  int v42; // r9d
  __int64 v43; // rcx
  __m128i v44; // xmm1
  unsigned __int16 v45; // r9
  unsigned __int16 v46; // r8
  unsigned __int16 v47; // r10
  unsigned __int16 v48; // r9
  __int128 v49; // xmm0
  __int128 v50; // xmm0
  bool v51; // zf
  unsigned __int16 *v52; // rcx
  __int16 v53; // r9
  int v54; // r10d
  __int64 v55; // rcx
  int v56; // r10d
  int v57; // r11d
  __int64 v58; // r10
  __int16 i; // cx
  __int64 v60; // r11
  __int16 j; // r10
  __int16 v62; // r8
  unsigned __int64 v63; // rax
  __int64 v64; // r9
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  CConnectorProcessingModeCharacteristics *v73; // [rsp+38h] [rbp-81h]
  unsigned int v74; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v75; // [rsp+74h] [rbp-45h] BYREF
  _BYTE Buf2[40]; // [rsp+78h] [rbp-41h] BYREF
  _OWORD Buf1[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v78[4]; // [rsp+D0h] [rbp+17h] BYREF
  CConnectorProcessingModeCharacteristics ***v79; // [rsp+120h] [rbp+67h] BYREF
  bool *v80; // [rsp+130h] [rbp+77h] BYREF
  unsigned int v81; // [rsp+138h] [rbp+7Fh] BYREF

  v80 = a3;
  v79 = a1;
  v3 = a3;
  v5 = a1;
  if ( a3 )
    *a3 = 0;
  v6 = 0;
  v7 = **a1;
  v8 = (unsigned __int16 ***)*((_QWORD *)v7 + 2);
  v9 = (unsigned __int16 ***)*((_QWORD *)v7 + 3);
  if ( v8 != v9 )
  {
    v10 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    v11 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    v12 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    while ( 1 )
    {
      v13 = **v8;
      if ( a2 )
      {
        if ( v13 )
        {
          v14 = *a2;
          memset(Buf1, 0, 40);
          memset(Buf2, 0, sizeof(Buf2));
          if ( (_WORD)v14 == 0xFFFE )
          {
            if ( a2[8] != 22 )
            {
              v67 = *((_QWORD *)a2 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( !v67 )
                v67 = *((_QWORD *)a2 + 4) - v10;
              if ( v67 )
              {
                v68 = *((_QWORD *)a2 + 3) - v12;
                if ( !v68 )
                  v68 = *((_QWORD *)a2 + 4) - v11;
                if ( v68 )
                  goto LABEL_41;
              }
            }
            v15 = *(__m128i *)a2;
            v16 = *((_QWORD *)a2 + 4);
            Buf1[1] = *((_OWORD *)a2 + 1);
            v17 = DWORD1(Buf1[1]);
            Buf1[0] = v15;
            *(_QWORD *)&Buf1[2] = v16;
            v18 = _mm_cvtsi128_si32(v15);
          }
          else
          {
            if ( a2[8] && (((_WORD)v14 - 1) & 0xFFFD) != 0 )
              goto LABEL_41;
            v45 = a2[1];
            if ( v45 != 2 && v45 != 1 )
              goto LABEL_41;
            v46 = a2[7];
            if ( v46 != 8 && (((v46 - 16) & 0xFFE7) != 0 || v46 == 40) )
              goto LABEL_41;
            v50 = *(_OWORD *)a2;
            WORD1(Buf1[1]) = a2[7];
            v51 = v45 == 1;
            v11 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            Buf1[0] = v50;
            v18 = -2;
            LOWORD(Buf1[0]) = -2;
            v17 = v51 + 3;
            *(GUID *)((char *)&Buf1[1] + 8) = GUID_00000000_0000_0010_8000_00aa00389b71;
            DWORD2(Buf1[1]) = v14;
          }
          v19 = *v13;
          LOWORD(Buf1[1]) = 22;
          if ( (_WORD)v19 == 0xFFFE )
          {
            if ( v13[8] != 22 )
            {
              v69 = *((_QWORD *)v13 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( !v69 )
                v69 = *((_QWORD *)v13 + 4) - v10;
              if ( v69 )
              {
                v70 = *((_QWORD *)v13 + 3) - v12;
                if ( !v70 )
                  v70 = *((_QWORD *)v13 + 4) - v11;
                if ( v70 )
                  goto LABEL_41;
              }
            }
            v20 = *(__m128i *)v13;
            v21 = *((_QWORD *)v13 + 4);
            *(_OWORD *)&Buf2[16] = *((_OWORD *)v13 + 1);
            v22 = *(_DWORD *)&Buf2[20];
            *(__m128i *)Buf2 = v20;
            *(_QWORD *)&Buf2[32] = v21;
            v23 = _mm_cvtsi128_si32(v20);
          }
          else
          {
            if ( v13[8] && (((_WORD)v19 - 1) & 0xFFFD) != 0 )
              goto LABEL_41;
            v47 = v13[1];
            if ( v47 != 2 && v47 != 1 )
              goto LABEL_41;
            v48 = v13[7];
            if ( v48 != 8 && (((v48 - 16) & 0xFFE7) != 0 || v48 == 40) )
              goto LABEL_41;
            v49 = *(_OWORD *)v13;
            *(_WORD *)&Buf2[18] = v13[7];
            v23 = -2;
            *(_OWORD *)Buf2 = v49;
            *(_WORD *)Buf2 = -2;
            v22 = (v47 == 1) + 3;
            *(GUID *)&Buf2[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
            *(_DWORD *)&Buf2[24] = v19;
          }
          *(_WORD *)&Buf2[16] = 22;
          if ( WORD1(Buf1[0]) )
          {
            v24 = *(_WORD *)&Buf2[2];
          }
          else
          {
            v24 = 0;
            *(_WORD *)&Buf2[2] = 0;
            *(_DWORD *)&Buf2[8] = 0;
            *(_WORD *)&Buf2[12] = 0;
          }
          if ( DWORD1(Buf1[0]) )
          {
            v25 = *(_DWORD *)&Buf2[4];
          }
          else
          {
            v25 = 0;
            *(_QWORD *)&Buf2[4] = 0LL;
          }
          if ( HIWORD(*((_QWORD *)&Buf1[0] + 1)) )
          {
            v26 = *(_WORD *)&Buf2[14];
          }
          else
          {
            v26 = 0;
            *(_DWORD *)&Buf2[12] = 0;
          }
          if ( !v17 )
            v22 = 0;
          *(_DWORD *)&Buf2[20] = v22;
          if ( !v18 )
          {
            v23 = 0;
            *(_WORD *)Buf2 = 0;
          }
          if ( !v24 )
          {
            WORD1(Buf1[0]) = 0;
            DWORD2(Buf1[0]) = 0;
            WORD6(Buf1[0]) = 0;
          }
          if ( !v25 )
            *(_QWORD *)((char *)Buf1 + 4) = 0LL;
          if ( !v26 )
            HIDWORD(Buf1[0]) = 0;
          if ( !v22 )
            v17 = 0;
          DWORD1(Buf1[1]) = v17;
          if ( !v23 )
            LOWORD(Buf1[0]) = 0;
          v27 = *((_QWORD *)&Buf1[1] + 1) - *(_QWORD *)&Buf2[24];
          if ( *((_QWORD *)&Buf1[1] + 1) == *(_QWORD *)&Buf2[24] )
            v27 = *(_QWORD *)&Buf1[2] - *(_QWORD *)&Buf2[32];
          if ( !v27 && !memcmp_0(Buf1, Buf2, 0x28uLL) )
          {
LABEL_42:
            v5 = v79;
            v3 = v80;
            break;
          }
          v12 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        }
      }
      else if ( !v13 )
      {
        goto LABEL_42;
      }
LABEL_41:
      v11 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      ++v8;
      v10 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( v8 == v9 )
        goto LABEL_42;
    }
  }
  if ( v8 == *((unsigned __int16 ****)**v5 + 3) )
  {
    v28 = v5[6];
    v29 = v5[5];
    v30 = v5[2];
    v31 = *(_OWORD *)v5[4];
    v32 = v5[1];
    v33 = v5[3];
    v75 = 0;
    v81 = 0;
    v34 = *(unsigned int *)v33;
    v35 = *(_BYTE *)v32 != 0;
    LODWORD(v80) = 0;
    v73 = *v28;
    v36 = *v29;
    v37 = *((unsigned int *)v30 + 59);
    v38 = v30[5];
    v74 = 0;
    LODWORD(v79) = 0;
    v78[0] = v31;
    v39 = DiscoverPeriodicityCharacteristicsForFormat(
            v38,
            v37,
            v34,
            v78,
            a2,
            v36,
            v35,
            v73,
            &v75,
            &v74,
            &v81,
            &v80,
            &v79);
    if ( v39 >= 0 )
    {
      v66 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
              **v5,
              (const struct tWAVEFORMATEX *)a2,
              v75,
              v74,
              v81,
              (unsigned int)v80,
              (unsigned int)v79);
      v6 = v66;
      if ( v3 )
        *v3 = v66 >= 0;
    }
    else
    {
      switch ( v39 )
      {
        case -2005139389:
        case -2005139364:
        case -2005139363:
        case -2005139362:
        case -2005139361:
        case -2005139360:
          CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(**v5, (const struct tWAVEFORMATEX *)a2);
          *((_DWORD *)v5[2] + 65) = 1;
          break;
        default:
          v40 = (__int64)*v5[7];
          if ( v40 )
          {
            v41 = 0;
            v42 = *((_DWORD *)a2 + 1);
            v43 = *(__int16 *)(v40 + 228);
            v44 = *(__m128i *)v5[4];
            while ( v41 < (__int16)v43 )
            {
              if ( *(_DWORD *)(v40 + 4LL * v41 + 4) == v42 )
                goto LABEL_65;
              ++v41;
            }
            if ( (int)v43 < 15 )
            {
              *(_DWORD *)(v40 + 4 * v43 + 4) = v42;
              v41 = *(_WORD *)(v40 + 228);
              *(_WORD *)(v40 + 228) = v41 + 1;
            }
            else
            {
              v41 = *(_WORD *)(v40 + 228);
            }
LABEL_65:
            v52 = a2 + 9;
            v53 = 0;
            if ( *a2 != 0xFFFE )
              v52 = a2 + 7;
            v54 = *v52;
            v55 = *(__int16 *)(v40 + 230);
            v56 = a2[7] | (v54 << 8);
            while ( v53 < (__int16)v55 )
            {
              if ( *(_DWORD *)(v40 + 4LL * v53 + 68) == v56 )
                goto LABEL_71;
              ++v53;
            }
            if ( (int)v55 >= 7 )
            {
              v53 = *(_WORD *)(v40 + 230);
            }
            else
            {
              *(_DWORD *)(v40 + 4 * v55 + 68) = v56;
              v53 = *(_WORD *)(v40 + 230);
              *(_WORD *)(v40 + 230) = v53 + 1;
            }
LABEL_71:
            if ( *a2 == 0xFFFE )
              v57 = *((_DWORD *)a2 + 5);
            else
              v57 = 0;
            v58 = *(__int16 *)(v40 + 232);
            for ( i = 0; i < (__int16)v58; ++i )
            {
              if ( *(_DWORD *)(v40 + 4LL * i + 100) == v57 )
                goto LABEL_78;
            }
            if ( (int)v58 < 15 )
            {
              *(_DWORD *)(v40 + 4 * v58 + 100) = v57;
              i = *(_WORD *)(v40 + 232);
              *(_WORD *)(v40 + 232) = i + 1;
            }
            else
            {
              i = *(_WORD *)(v40 + 232);
            }
LABEL_78:
            v60 = *(__int16 *)(v40 + 234);
            for ( j = 0; j < (__int16)v60; ++j )
            {
              if ( *(_DWORD *)(v40 + 4LL * j + 164) == v39 )
                goto LABEL_81;
            }
            if ( (int)v60 >= 15 )
            {
              j = *(_WORD *)(v40 + 234);
            }
            else
            {
              *(_DWORD *)(v40 + 4 * v60 + 164) = v39;
              j = *(_WORD *)(v40 + 234);
              *(_WORD *)(v40 + 234) = j + 1;
            }
LABEL_81:
            v62 = j | (16 * (i | (16 * (v53 | (8 * v41)))));
            v63 = v44.m128i_i64[0] - *(_QWORD *)(v40 + 4336);
            if ( v44.m128i_i64[0] == *(_QWORD *)(v40 + 4336) )
              v63 = _mm_srli_si128(v44, 8).m128i_u64[0] - *(_QWORD *)(v40 + 4344);
            if ( v63 )
            {
              v71 = *(unsigned int *)(v40 + 4332);
              if ( (unsigned int)(v71 + 1) < 0x1000 )
                *(_WORD *)(v71 + v40 + 236) = -1;
              *(_DWORD *)(v40 + 4332) += 2;
              v72 = *(unsigned int *)(v40 + 4332);
              if ( (unsigned __int64)(v72 + 16) < 0x1000 )
                *(__m128i *)(v72 + v40 + 236) = v44;
              *(_DWORD *)(v40 + 4332) += 16;
              *(__m128i *)(v40 + 4336) = v44;
            }
            v64 = *(unsigned int *)(v40 + 4332);
            if ( (unsigned __int64)(v64 + 2) < 0x1000 )
            {
              *(_WORD *)(v64 + v40 + 236) = v62;
              *(_DWORD *)(v40 + 4332) += 2;
            }
          }
          break;
      }
    }
    return v6;
  }
  else
  {
    if ( v3 )
      *v3 = 1;
    return 0LL;
  }
}
