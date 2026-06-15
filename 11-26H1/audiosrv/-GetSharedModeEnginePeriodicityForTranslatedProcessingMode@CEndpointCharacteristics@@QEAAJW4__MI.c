/*
 * XREFs of ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x18004C180
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004BA2C (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18004C05C (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAud.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicityForTranslatedProcessingMode(
        __int64 a1,
        int a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        __int64 *a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  __int64 v10; // r10
  __int64 v12; // r10
  int v13; // edx
  int v14; // r11d
  __int64 v15; // rbx
  __int64 v16; // rax
  GUID *v17; // rax
  GUID v18; // xmm0
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // rcx
  __int64 v22; // rax
  unsigned __int16 ***v23; // rax
  unsigned __int16 ***v24; // rbx
  unsigned __int16 *v25; // rcx
  int v26; // edx
  unsigned __int16 v27; // ax
  __m128i v28; // xmm2
  __int64 v29; // xmm1_8
  int v30; // r8d
  __int16 v31; // di
  int v32; // edx
  unsigned __int16 v33; // ax
  __m128i v34; // xmm2
  __int64 v35; // xmm1_8
  int v36; // ecx
  __int16 v37; // r11
  __int16 v38; // r9
  int v39; // edx
  __int16 v40; // ax
  __int64 v41; // rax
  unsigned __int16 v43; // r10
  unsigned __int16 v44; // r9
  __int128 v45; // xmm0
  unsigned __int16 v46; // r9
  unsigned __int16 v47; // r8
  __int128 v48; // xmm0
  unsigned __int16 **v49; // rax
  _DWORD *v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  GUID v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _BYTE Buf2[40]; // [rsp+20h] [rbp-89h] BYREF
  _BYTE Buf1[40]; // [rsp+48h] [rbp-61h] BYREF
  GUID v60; // [rsp+70h] [rbp-39h] BYREF
  GUID v61; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int16 ***v62; // [rsp+90h] [rbp-19h]
  _DWORD *v63; // [rsp+98h] [rbp-11h]

  v10 = 296LL;
  if ( a2 != 3 )
    v10 = 272LL;
  v63 = a10;
  v12 = a1 + v10;
  v13 = 0;
  v14 = *((_DWORD *)a5 + 4);
  while ( 1 )
  {
    if ( v13 >= v14 )
      goto LABEL_9;
    v15 = *a5;
    v16 = *(_QWORD *)(*a5 + 16LL * v13) - *a4;
    if ( !v16 )
      v16 = *(_QWORD *)(v15 + 16LL * v13 + 8) - a4[1];
    if ( !v16 )
      break;
    ++v13;
  }
  if ( v13 == -1 )
  {
LABEL_9:
    v17 = &v61;
    v61 = *(GUID *)a4;
    goto LABEL_10;
  }
  v51 = 0;
  v60 = *(GUID *)a4;
  while ( 1 )
  {
    if ( v51 >= v14 )
      goto LABEL_88;
    v52 = *(_QWORD *)(v15 + 16LL * v51) - *(_QWORD *)&v60.Data1;
    if ( !v52 )
      v52 = *(_QWORD *)(v15 + 16LL * v51 + 8) - *(_QWORD *)v60.Data4;
    if ( !v52 )
      break;
    ++v51;
  }
  if ( v51 == -1 )
  {
LABEL_88:
    v53 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_86;
  }
  if ( v51 < 0 )
  {
    ATL::_AtlRaiseException(0xC000008C, 2 * v51);
    __debugbreak();
  }
  v53 = *(GUID *)(a5[1] + 16LL * v51);
LABEL_86:
  v60 = v53;
  v17 = &v60;
LABEL_10:
  v18 = *v17;
  v19 = *(_QWORD **)(v12 + 8);
  v20 = *(_QWORD **)v12;
  *(_QWORD *)&v60.Data1 = v19;
  v61 = v18;
  while ( v20 != v19 )
  {
    v21 = (_QWORD *)*v20;
    v22 = *(_QWORD *)*v20 - *(_QWORD *)&v61.Data1;
    if ( !v22 )
      v22 = v21[1] - *(_QWORD *)v61.Data4;
    if ( !v22 )
    {
      v23 = (unsigned __int16 ***)v21[3];
      v24 = (unsigned __int16 ***)v21[2];
      v62 = v23;
      while ( v24 != v23 )
      {
        v25 = **v24;
        if ( a3 )
        {
          if ( !v25 )
            goto LABEL_49;
          v26 = *a3;
          v27 = a3[8];
          memset(Buf1, 0, sizeof(Buf1));
          memset(Buf2, 0, sizeof(Buf2));
          if ( (_WORD)v26 == 0xFFFE )
          {
            if ( v27 != 22 )
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
                  goto LABEL_49;
              }
            }
            v28 = *(__m128i *)a3;
            v29 = *((_QWORD *)a3 + 4);
            *(_OWORD *)&Buf1[16] = *((_OWORD *)a3 + 1);
            v30 = *(_DWORD *)&Buf1[20];
            *(_WORD *)&Buf1[16] = 22;
            *(__m128i *)Buf1 = v28;
            *(_QWORD *)&Buf1[32] = v29;
            v31 = _mm_cvtsi128_si32(v28);
          }
          else
          {
            if ( v27 && (((_WORD)v26 - 1) & 0xFFFD) != 0 )
              goto LABEL_49;
            v46 = a3[1];
            if ( v46 != 2 && v46 != 1 )
              goto LABEL_49;
            v47 = a3[7];
            if ( v47 != 8 && (((v47 - 16) & 0xFFE7) != 0 || v47 == 40) )
              goto LABEL_49;
            v48 = *(_OWORD *)a3;
            *(_WORD *)&Buf1[18] = a3[7];
            *(_WORD *)&Buf1[16] = 22;
            *(_OWORD *)Buf1 = v48;
            *(_WORD *)Buf1 = -2;
            v30 = (v46 == 1) + 3;
            *(GUID *)&Buf1[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
            v31 = -2;
            *(_DWORD *)&Buf1[24] = v26;
          }
          v32 = *v25;
          v33 = v25[8];
          if ( (_WORD)v32 == 0xFFFE )
          {
            if ( v33 != 22 )
            {
              v56 = *((_QWORD *)v25 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( !v56 )
                v56 = *((_QWORD *)v25 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
              if ( v56 )
              {
                v57 = *((_QWORD *)v25 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( !v57 )
                  v57 = *((_QWORD *)v25 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( v57 )
                  goto LABEL_49;
              }
            }
            v34 = *(__m128i *)v25;
            v35 = *((_QWORD *)v25 + 4);
            *(_OWORD *)&Buf2[16] = *((_OWORD *)v25 + 1);
            v36 = *(_DWORD *)&Buf2[20];
            *(_WORD *)&Buf2[16] = 22;
            *(__m128i *)Buf2 = v34;
            *(_QWORD *)&Buf2[32] = v35;
            v37 = _mm_cvtsi128_si32(v34);
          }
          else
          {
            if ( v33 && (((_WORD)v32 - 1) & 0xFFFD) != 0 )
              goto LABEL_49;
            v43 = v25[1];
            if ( v43 != 2 && v43 != 1 )
              goto LABEL_49;
            v44 = v25[7];
            if ( v44 != 8 && (((v44 - 16) & 0xFFE7) != 0 || v44 == 40) )
              goto LABEL_49;
            v45 = *(_OWORD *)v25;
            *(_WORD *)&Buf2[18] = v25[7];
            *(_WORD *)&Buf2[16] = 22;
            v37 = -2;
            *(_OWORD *)Buf2 = v45;
            *(_WORD *)Buf2 = -2;
            *(GUID *)&Buf2[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
            v36 = (v43 == 1) + 3;
            *(_DWORD *)&Buf2[24] = v32;
          }
          if ( *(_WORD *)&Buf1[2] )
          {
            v38 = *(_WORD *)&Buf2[2];
          }
          else
          {
            v38 = 0;
            *(_WORD *)&Buf2[2] = 0;
            *(_DWORD *)&Buf2[8] = 0;
            *(_WORD *)&Buf2[12] = 0;
          }
          if ( *(_DWORD *)&Buf1[4] )
          {
            v39 = *(_DWORD *)&Buf2[4];
          }
          else
          {
            v39 = 0;
            *(_QWORD *)&Buf2[4] = 0LL;
          }
          if ( HIWORD(*(_QWORD *)&Buf1[8]) )
          {
            v40 = *(_WORD *)&Buf2[14];
          }
          else
          {
            v40 = 0;
            *(_DWORD *)&Buf2[12] = 0;
          }
          if ( !v30 )
            v36 = 0;
          *(_DWORD *)&Buf2[20] = v36;
          if ( !v31 )
          {
            v37 = 0;
            *(_WORD *)Buf2 = 0;
          }
          if ( !v38 )
          {
            *(_WORD *)&Buf1[2] = 0;
            *(_DWORD *)&Buf1[8] = 0;
            *(_WORD *)&Buf1[12] = 0;
          }
          if ( !v39 )
            *(_QWORD *)&Buf1[4] = 0LL;
          if ( !v40 )
            *(_DWORD *)&Buf1[12] = 0;
          if ( !v36 )
            v30 = 0;
          *(_DWORD *)&Buf1[20] = v30;
          if ( !v37 )
            *(_WORD *)Buf1 = 0;
          v41 = *(_QWORD *)&Buf1[24] - *(_QWORD *)&Buf2[24];
          if ( *(_QWORD *)&Buf1[24] == *(_QWORD *)&Buf2[24] )
            v41 = *(_QWORD *)&Buf1[32] - *(_QWORD *)&Buf2[32];
          if ( !v41 && !memcmp_0(Buf1, Buf2, 0x28uLL) )
          {
LABEL_53:
            if ( a7 )
              *a7 = *((_DWORD *)*v24 + 3);
            if ( a8 )
              *a8 = *((_DWORD *)*v24 + 2);
            if ( a9 )
              *a9 = *((_DWORD *)*v24 + 4);
            if ( v63 )
            {
              v49 = *v24;
              if ( a6 )
                v50 = v49 + 3;
              else
                v50 = (_DWORD *)v49 + 5;
              *v63 = *v50;
            }
            return 0LL;
          }
        }
        else if ( !v25 )
        {
          goto LABEL_53;
        }
LABEL_49:
        v23 = v62;
        ++v24;
      }
    }
    v19 = *(_QWORD **)&v60.Data1;
    ++v20;
  }
  return 2290679816LL;
}
