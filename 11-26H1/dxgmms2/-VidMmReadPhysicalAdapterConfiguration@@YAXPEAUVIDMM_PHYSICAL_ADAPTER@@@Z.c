/*
 * XREFs of ?VidMmReadPhysicalAdapterConfiguration@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400A6C3C
 * Callers:
 *     ??0VIDMM_PHYSICAL_ADAPTER@@QEAA@PEAVVIDMM_GLOBAL@@GPEBUDXGK_PHYSICALADAPTERINFO@@PEBUDXGADAPTER_GPUMMUCAPS@@@Z @ 0x1400B39AC (--0VIDMM_PHYSICAL_ADAPTER@@QEAA@PEAVVIDMM_GLOBAL@@GPEBUDXGK_PHYSICALADAPTERINFO@@PEBUDXGADAPTER_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x14004D014 (DpiGetPnpRegistryKeyName.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ??1?$PagedPoolArray@UPBMM_SEGMENT_DESC@@$03@@QEAA@XZ @ 0x1400A69E8 (--1-$PagedPoolArray@UPBMM_SEGMENT_DESC@@$03@@QEAA@XZ.c)
 */

void __fastcall VidMmReadPhysicalAdapterConfiguration(struct VIDMM_PHYSICAL_ADAPTER *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  _BYTE *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // r8d
  unsigned int v10; // eax
  char v11; // dl
  unsigned int v12; // edi
  char v13; // r10
  char v14; // r11
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  char v17; // al
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+5Ch] [rbp-A4h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+64h] [rbp-9Ch] BYREF
  PCUNICODE_STRING Source; // [rsp+68h] [rbp-98h]
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v34; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v35[256]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v36; // [rsp+188h] [rbp+88h]
  __int64 v37; // [rsp+190h] [rbp+90h] BYREF
  int v38; // [rsp+198h] [rbp+98h]
  const wchar_t *v39; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v40; // [rsp+1A8h] [rbp+A8h]
  int v41; // [rsp+1B0h] [rbp+B0h]
  int *v42; // [rsp+1B8h] [rbp+B8h]
  int v43; // [rsp+1C0h] [rbp+C0h]
  __int64 v44; // [rsp+1C8h] [rbp+C8h]
  int v45; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v46; // [rsp+1D8h] [rbp+D8h]
  unsigned int *v47; // [rsp+1E0h] [rbp+E0h]
  int v48; // [rsp+1E8h] [rbp+E8h]
  int *v49; // [rsp+1F0h] [rbp+F0h]
  int v50; // [rsp+1F8h] [rbp+F8h]
  __int64 v51; // [rsp+200h] [rbp+100h]
  int v52; // [rsp+208h] [rbp+108h]
  const wchar_t *v53; // [rsp+210h] [rbp+110h]
  int *v54; // [rsp+218h] [rbp+118h]
  int v55; // [rsp+220h] [rbp+120h]
  int *v56; // [rsp+228h] [rbp+128h]
  int v57; // [rsp+230h] [rbp+130h]
  __int64 v58; // [rsp+238h] [rbp+138h]
  int v59; // [rsp+240h] [rbp+140h]
  const wchar_t *v60; // [rsp+248h] [rbp+148h]
  int *v61; // [rsp+250h] [rbp+150h]
  int v62; // [rsp+258h] [rbp+158h]
  int *v63; // [rsp+260h] [rbp+160h]
  int v64; // [rsp+268h] [rbp+168h]
  __int64 v65; // [rsp+270h] [rbp+170h]
  int v66; // [rsp+278h] [rbp+178h]
  const wchar_t *v67; // [rsp+280h] [rbp+180h]
  int *v68; // [rsp+288h] [rbp+188h]
  int v69; // [rsp+290h] [rbp+190h]
  int *v70; // [rsp+298h] [rbp+198h]
  int v71; // [rsp+2A0h] [rbp+1A0h]
  __int64 v72; // [rsp+2A8h] [rbp+1A8h]
  int v73; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v74; // [rsp+2B8h] [rbp+1B8h]
  int *v75; // [rsp+2C0h] [rbp+1C0h]
  int v76; // [rsp+2C8h] [rbp+1C8h]
  int *v77; // [rsp+2D0h] [rbp+1D0h]
  int v78; // [rsp+2D8h] [rbp+1D8h]
  __int64 v79; // [rsp+2E0h] [rbp+1E0h]
  int v80; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v81; // [rsp+2F0h] [rbp+1F0h]
  int *v82; // [rsp+2F8h] [rbp+1F8h]
  int v83; // [rsp+300h] [rbp+200h]
  int *v84; // [rsp+308h] [rbp+208h]
  int v85; // [rsp+310h] [rbp+210h]
  __int128 v86; // [rsp+318h] [rbp+218h]
  __int128 v87; // [rsp+328h] [rbp+228h]
  __int128 v88; // [rsp+338h] [rbp+238h]
  __int64 v89; // [rsp+348h] [rbp+248h]

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 8) + 8LL);
  Source = 0LL;
  DpiGetPnpRegistryKeyName(v2);
  v3 = (MEMORY[0] >> 1) + 16;
  v34 = 0LL;
  v36 = 0;
  if ( v3 <= 0x80 )
  {
    v4 = v35;
    v34 = v35;
    if ( MEMORY[0] >> 1 != -16 )
    {
      v6 = 0LL;
      v7 = v3;
      do
      {
        *(_WORD *)&v4[v6] = 0;
        v6 += 2LL;
        v4 = v34;
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < 2 )
    {
      v4 = 0LL;
      goto LABEL_12;
    }
    v5 = 2LL * v3;
    if ( !is_mul_ok(v3, 2uLL) )
      v5 = -1LL;
    v4 = (_BYTE *)operator new[](v5, 0x4B677844u, 256LL);
    v34 = v4;
  }
  v36 = v3;
  if ( v4 )
  {
    *(&Destination.MaximumLength + 2) = 0;
    *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(2 * v3);
    Destination.Buffer = (PWSTR)v4;
    Destination.Length = 0;
    RtlAppendUnicodeStringToString(&Destination, Source);
    RtlAppendUnicodeToString(&Destination, L"\\MemoryManager");
  }
LABEL_12:
  v8 = 0LL;
  v9 = 900;
  v19 = 0;
  v10 = 0;
  v18 = 0;
  v11 = 1;
  v27 = 900;
  v12 = 900;
  v20 = 900;
  v13 = 0;
  v28 = 900;
  v14 = 0;
  v21 = 900;
  v24 = 1;
  v25 = 0;
  v26 = 0;
  v29 = 0;
  v22 = 0;
  v30 = 0;
  v23 = 0;
  v31 = 1;
  if ( v4 )
  {
    v37 = 0LL;
    v38 = 288;
    v41 = 67108868;
    v43 = 4;
    v39 = L"MaxLocalSegmentSize";
    v44 = 0LL;
    v40 = &v18;
    v42 = &v25;
    v46 = L"MaxNonLocalSegmentSize";
    v47 = &v19;
    v49 = &v26;
    v53 = L"SelfRefreshVramForceEvictionTimerDC";
    v54 = &v20;
    v56 = &v27;
    v60 = L"SelfRefreshVramForceEvictionTimerAC";
    v61 = &v21;
    v63 = &v28;
    v67 = L"Supports64KBPages";
    v68 = &v22;
    v70 = &v29;
    v74 = L"PerPtePageSize";
    v75 = &v23;
    v77 = &v30;
    v81 = L"EnablePromotion";
    v82 = &v24;
    v84 = &v31;
    v89 = 0LL;
    v45 = 288;
    v48 = 67108868;
    v50 = 4;
    v51 = 0LL;
    v52 = 288;
    v55 = 67108868;
    v57 = 4;
    v58 = 0LL;
    v59 = 288;
    v62 = 67108868;
    v64 = 4;
    v65 = 0LL;
    v66 = 288;
    v69 = 67108868;
    v71 = 4;
    v72 = 0LL;
    v73 = 288;
    v76 = 67108868;
    v78 = 4;
    v79 = 0LL;
    v80 = 288;
    v83 = 67108868;
    v85 = 4;
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    RtlQueryRegistryValuesEx(0LL, v4, &v37, 0LL, 0LL);
    v10 = v18;
    v8 = v19;
    v9 = v20;
    v13 = v22;
    v14 = v23;
    v11 = v24;
    v12 = v21;
  }
  v15 = (unsigned __int64)v10 << 20;
  v16 = v8 << 20;
  if ( v15 && v15 <= 0x10000000 )
    v15 = 0x10000000LL;
  *((_QWORD *)a1 + 1) = v15;
  *((_DWORD *)a1 + 10) = 0;
  if ( (unsigned __int64)(v16 - 1) <= 0x1FFFFFFF )
    v16 = 0x20000000LL;
  *((_QWORD *)a1 + 3) = 10000000LL * v9;
  v17 = *((_BYTE *)a1 + 44);
  *((_QWORD *)a1 + 4) = 10000000LL * v12;
  *((_QWORD *)a1 + 2) = v16;
  *((_BYTE *)a1 + 44) = v17 & 0xF8 | v13 & 1 | (2 * (v14 & 1 | (2 * (v11 & 1))));
  PagedPoolArray<PBMM_SEGMENT_DESC,4>::~PagedPoolArray<PBMM_SEGMENT_DESC,4>((void **)&v34);
}
