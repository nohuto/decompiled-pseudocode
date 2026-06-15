/*
 * XREFs of ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004D2AC
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x18000C258 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180042F44 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 *     ?IsFormatSupported@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@PEBUtWAVEFORMATEX@@PEAPEAU4@@Z @ 0x1800B0F40 (-IsFormatSupported@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@W4_A.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?GetConnectorProcessingModeForFormat@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUtWAVEFORMATEX@@PEAU_GUID@@@Z @ 0x1800E2AE0 (-GetConnectorProcessingModeForFormat@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristi.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E2C44 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800E32D0 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 *     ?ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800E4E24 (-ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristi.c)
 *     _lambda_9bf885da0abb1dc890da24065742d1f0_::operator() @ 0x1800FA104 (_lambda_9bf885da0abb1dc890da24065742d1f0_--operator().c)
 *     ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x18010B180 (-ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioeng.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180115590 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

__int64 __fastcall EffectPack::GetSharedModeEnginePeriodicity(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 *a3,
        GUID *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  unsigned int v9; // ebx
  int v11; // r11d
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  GUID v14; // xmm0
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // rax
  GUID *v20; // rax
  GUID v21; // xmm0
  _QWORD *v22; // rax
  _QWORD *v23; // r12
  _QWORD *v24; // rcx
  __int64 v25; // rax
  unsigned __int16 ***v26; // rdi
  unsigned __int16 ***v27; // r13
  unsigned __int16 *v28; // rcx
  __m128i v29; // xmm2
  __int64 v30; // xmm1_8
  int v31; // r14d
  __int16 v32; // si
  __m128i v33; // xmm2
  __int64 v34; // xmm1_8
  int v35; // r10d
  __int16 v36; // r11
  __int16 v37; // r9
  int v38; // edx
  __int16 v39; // r8
  __int64 v40; // rax
  unsigned __int16 v42; // r8
  unsigned __int16 v43; // dx
  __int128 v44; // xmm0
  int v45; // eax
  int i; // eax
  _QWORD *v47; // r8
  __int64 v48; // rcx
  GUID v49; // xmm0
  unsigned __int16 v50; // r8
  unsigned __int16 v51; // dx
  __int128 v52; // xmm0
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _BYTE Buf2_8[40]; // [rsp+28h] [rbp-91h] BYREF
  _BYTE Buf1[40]; // [rsp+50h] [rbp-69h] BYREF
  GUID v60; // [rsp+78h] [rbp-41h] BYREF
  GUID v61; // [rsp+88h] [rbp-31h] BYREF
  _DWORD *v62; // [rsp+98h] [rbp-21h]
  _DWORD *v63; // [rsp+A0h] [rbp-19h]
  _DWORD *v64; // [rsp+A8h] [rbp-11h]
  _DWORD *v65; // [rsp+B0h] [rbp-9h]

  v9 = 0;
  v11 = a2;
  v64 = a8;
  v65 = a9;
  v12 = a1[236];
  v62 = a6;
  v63 = a7;
  if ( (_DWORD)a2 != 3 )
  {
    if ( v12 )
    {
      v13 = a1[237];
      goto LABEL_4;
    }
LABEL_114:
    _o_terminate(a1, a2, a3);
    __debugbreak();
    JUMPOUT(0x18004D8EDLL);
  }
  if ( v12 <= 3 )
    goto LABEL_114;
  v13 = a1[237] + 72LL;
LABEL_4:
  v14 = *a4;
  v60 = *a4;
  v15 = 0;
  v16 = 296LL;
  if ( v11 != 3 )
    v16 = 272LL;
  v17 = a1[198] + v16;
  while ( 1 )
  {
    if ( v15 >= *(_DWORD *)(v13 + 16) )
      goto LABEL_12;
    v18 = (_QWORD *)(*(_QWORD *)v13 + 16LL * v15);
    v19 = *v18 - *(_QWORD *)&v60.Data1;
    if ( *v18 == *(_QWORD *)&v60.Data1 )
      v19 = v18[1] - *(_QWORD *)v60.Data4;
    if ( !v19 )
      break;
    ++v15;
  }
  if ( v15 == -1 )
  {
LABEL_12:
    v61 = v14;
    v20 = &v61;
    goto LABEL_13;
  }
  v60 = v14;
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(v13 + 16) )
      goto LABEL_88;
    v47 = (_QWORD *)(*(_QWORD *)v13 + 16LL * i);
    v48 = *v47 - *(_QWORD *)&v60.Data1;
    if ( *v47 == *(_QWORD *)&v60.Data1 )
      v48 = v47[1] - *(_QWORD *)v60.Data4;
    if ( !v48 )
      break;
  }
  if ( i == -1 )
  {
LABEL_88:
    v49 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_81;
  }
  if ( i < 0 )
  {
    ATL::_AtlRaiseException(0xC000008C, v13);
    __debugbreak();
  }
  v49 = *(GUID *)(*(_QWORD *)(v13 + 8) + 16LL * i);
LABEL_81:
  v60 = v49;
  v20 = &v60;
LABEL_13:
  v21 = *v20;
  v22 = *(_QWORD **)(v17 + 8);
  v23 = *(_QWORD **)v17;
  *(_QWORD *)&v60.Data1 = v22;
  v61 = v21;
  while ( v23 != v22 )
  {
    v24 = (_QWORD *)*v23;
    v25 = *(_QWORD *)*v23 - *(_QWORD *)&v61.Data1;
    if ( !v25 )
      v25 = v24[1] - *(_QWORD *)v61.Data4;
    if ( !v25 )
    {
      v26 = (unsigned __int16 ***)v24[2];
      v27 = (unsigned __int16 ***)v24[3];
      while ( v26 != v27 )
      {
        v28 = **v26;
        if ( a3 )
        {
          if ( !v28 )
            goto LABEL_65;
          memset(Buf1, 0, sizeof(Buf1));
          memset(Buf2_8, 0, sizeof(Buf2_8));
          if ( *a3 == 0xFFFE )
          {
            if ( a3[8] != 22 )
            {
              v54 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( !v54 )
                v54 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
              if ( v54 )
              {
                v55 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( !v55 )
                  v55 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( v55 )
                  goto LABEL_65;
              }
            }
            v29 = *(__m128i *)a3;
            v30 = *((_QWORD *)a3 + 4);
            *(_OWORD *)&Buf1[16] = *((_OWORD *)a3 + 1);
            v31 = *(_DWORD *)&Buf1[20];
            *(__m128i *)Buf1 = v29;
            *(_QWORD *)&Buf1[32] = v30;
            v32 = _mm_cvtsi128_si32(v29);
          }
          else
          {
            if ( a3[8] && ((*a3 - 1) & 0xFFFD) != 0 )
              goto LABEL_65;
            v42 = a3[1];
            if ( v42 != 2 && v42 != 1 )
              goto LABEL_65;
            v43 = a3[7];
            if ( v43 != 8 && (((v43 - 16) & 0xFFE7) != 0 || v43 == 40) )
              goto LABEL_65;
            v44 = *(_OWORD *)a3;
            v45 = *a3;
            *(_WORD *)&Buf1[18] = a3[7];
            v32 = -2;
            *(_OWORD *)Buf1 = v44;
            *(_WORD *)Buf1 = -2;
            *(GUID *)&Buf1[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
            v31 = 4 - (v42 != 1);
            *(_DWORD *)&Buf1[24] = v45;
          }
          *(_WORD *)&Buf1[16] = 22;
          if ( *v28 == 0xFFFE )
          {
            if ( v28[8] != 22 )
            {
              v56 = *((_QWORD *)v28 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( !v56 )
                v56 = *((_QWORD *)v28 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
              if ( v56 )
              {
                v57 = *((_QWORD *)v28 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( !v57 )
                  v57 = *((_QWORD *)v28 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( v57 )
                  goto LABEL_65;
              }
            }
            v33 = *(__m128i *)v28;
            v34 = *((_QWORD *)v28 + 4);
            *(_OWORD *)&Buf2_8[16] = *((_OWORD *)v28 + 1);
            v35 = *(_DWORD *)&Buf2_8[20];
            *(__m128i *)Buf2_8 = v33;
            *(_QWORD *)&Buf2_8[32] = v34;
            v36 = _mm_cvtsi128_si32(v33);
          }
          else
          {
            if ( v28[8] && ((*v28 - 1) & 0xFFFD) != 0 )
              goto LABEL_65;
            v50 = v28[1];
            if ( v50 != 2 && v50 != 1 )
              goto LABEL_65;
            v51 = v28[7];
            if ( v51 != 8 && (((v51 - 16) & 0xFFE7) != 0 || v51 == 40) )
              goto LABEL_65;
            v52 = *(_OWORD *)v28;
            *(_WORD *)&Buf2_8[18] = v28[7];
            v36 = -2;
            *(_OWORD *)Buf2_8 = v52;
            *(_WORD *)Buf2_8 = -2;
            v53 = *v28;
            v35 = 4 - (v50 != 1);
            *(GUID *)&Buf2_8[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
            *(_DWORD *)&Buf2_8[24] = v53;
          }
          *(_WORD *)&Buf2_8[16] = 22;
          if ( *(_WORD *)&Buf1[2] )
          {
            v37 = *(_WORD *)&Buf2_8[2];
          }
          else
          {
            v37 = 0;
            *(_WORD *)&Buf2_8[2] = 0;
            *(_DWORD *)&Buf2_8[8] = 0;
            *(_WORD *)&Buf2_8[12] = 0;
          }
          if ( *(_DWORD *)&Buf1[4] )
          {
            v38 = *(_DWORD *)&Buf2_8[4];
          }
          else
          {
            v38 = 0;
            *(_QWORD *)&Buf2_8[4] = 0LL;
          }
          if ( *(_WORD *)&Buf1[14] )
          {
            v39 = *(_WORD *)&Buf2_8[14];
          }
          else
          {
            v39 = 0;
            *(_DWORD *)&Buf2_8[12] = 0;
          }
          *(_DWORD *)&Buf2_8[20] = v31 != 0 ? v35 : 0;
          if ( !v32 )
          {
            v36 = 0;
            *(_WORD *)Buf2_8 = 0;
          }
          if ( !v37 )
          {
            *(_WORD *)&Buf1[2] = 0;
            *(_DWORD *)&Buf1[8] = 0;
            *(_WORD *)&Buf1[12] = 0;
          }
          if ( !v38 )
            *(_QWORD *)&Buf1[4] = 0LL;
          if ( !v39 )
            *(_DWORD *)&Buf1[12] = 0;
          *(_DWORD *)&Buf1[20] = (v31 != 0 ? v35 : 0) != 0 ? v31 : 0;
          if ( !v36 )
            *(_WORD *)Buf1 = 0;
          v40 = *(_QWORD *)&Buf1[24] - *(_QWORD *)&Buf2_8[24];
          if ( *(_QWORD *)&Buf1[24] == *(_QWORD *)&Buf2_8[24] )
            v40 = *(_QWORD *)&Buf1[32] - *(_QWORD *)&Buf2_8[32];
          if ( !v40 && !memcmp_0(Buf1, Buf2_8, 0x28uLL) )
          {
LABEL_55:
            if ( v62 )
              *v62 = *((_DWORD *)*v26 + 3);
            if ( v63 )
              *v63 = *((_DWORD *)*v26 + 2);
            if ( v64 )
              *v64 = *((_DWORD *)*v26 + 4);
            if ( v65 )
              *v65 = *(_DWORD *)((char *)*v26 + (a5 != 0 ? 4 : 0) + 20);
            return v9;
          }
        }
        else if ( !v28 )
        {
          goto LABEL_55;
        }
LABEL_65:
        ++v26;
      }
    }
    v22 = *(_QWORD **)&v60.Data1;
    ++v23;
  }
  return (unsigned int)-2004287480;
}
