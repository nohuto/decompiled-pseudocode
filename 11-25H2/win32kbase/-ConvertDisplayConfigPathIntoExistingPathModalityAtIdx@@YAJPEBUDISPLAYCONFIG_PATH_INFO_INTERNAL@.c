/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x140112470
 * Callers:
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x140111C64 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x140111E40 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14019E0D8 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 * Callees:
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x140112B24 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x140112C34 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x140112F1C (-ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@P.c)
 */

__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        bool a5,
        bool a6,
        struct D3DKMT_GETPATHSMODALITY *a7,
        bool *a8)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 i; // rsi
  __int64 result; // rax
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  int TargetVirtualization; // eax
  unsigned int v18; // r14d
  unsigned __int8 v19; // r11
  int v20; // r8d
  unsigned __int8 v21; // r10
  int v22; // eax
  char v23; // r9
  bool v24; // al
  unsigned int v25; // ecx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // esi
  __int64 v29; // rax
  int v30; // ebx
  int v31; // edx
  int v32; // eax
  unsigned __int8 v33; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 v34; // [rsp+41h] [rbp-27h] BYREF
  unsigned __int8 v35[14]; // [rsp+42h] [rbp-26h] BYREF

  v9 = a3;
  v10 = a2;
  v35[0] = 0;
  v34 = 0;
  v33 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1096LL); ; i = *(_QWORD *)(i + 128) )
  {
    if ( !i )
    {
      WdLogSingleEntry3(2LL, *((int *)a1 + 5), *((unsigned int *)a1 + 4), v9);
      WdLogGlobalForLineNumber = 13990;
      return 3221225485LL;
    }
    if ( (*(_DWORD *)(i + 160) & 0x800000) != 0
      && *(_DWORD *)(i + 240) == *((_DWORD *)a1 + 4)
      && *(_DWORD *)(i + 244) == *((_DWORD *)a1 + 5) )
    {
      break;
    }
  }
  v14 = (char *)a7 + 296 * v10;
  *((_QWORD *)v14 + 7) = *(_QWORD *)a1;
  *((_QWORD *)v14 + 8) = *((_QWORD *)a1 + 1);
  v15 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
  {
    WdLogSingleEntry1(2LL, v15);
    WdLogGlobalForLineNumber = 14003;
    return 3221225485LL;
  }
  if ( (~(((unsigned __int64)a6 << 55) - 0x7FD30E6FFE7CF071LL) & v15) != 0 )
  {
    WdLogSingleEntry1(2LL, v15);
    WdLogGlobalForLineNumber = 14011;
    return 3221225485LL;
  }
  v16 = *((_QWORD *)a1 + 1);
  if ( (v16 & 0xFFFFFE7FFE7DF470uLL) != 0 || (v15 & v16) != v16 )
  {
    WdLogSingleEntry2(2LL, v15, v16);
    WdLogGlobalForLineNumber = 14019;
    return 3221225485LL;
  }
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)((char *)a1 + 16),
                           *((_DWORD *)a1 + 7),
                           v35,
                           &v34,
                           &v33,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v14 + 36,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v14 + 37,
                           (enum _D3DKMT_DISPLAY_TARGET_USAGE *)(v14 + 268));
  v18 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    WdLogSingleEntry1(2LL, TargetVirtualization);
    result = v18;
    WdLogGlobalForLineNumber = 14034;
    return result;
  }
  v19 = v34;
  *((_QWORD *)v14 + 7) |= 0x800000000000uLL;
  v20 = 4;
  v21 = v35[0];
  *((_QWORD *)v14 + 9) = *(_QWORD *)(i + 240);
  *((_DWORD *)v14 + 20) = *((_DWORD *)a1 + 6);
  *((_DWORD *)v14 + 21) = *((_DWORD *)a1 + 7);
  v22 = *((_DWORD *)a1 + 39);
  *((_QWORD *)v14 + 7) |= 0x8000000000000uLL;
  *((_DWORD *)v14 + 60) = v22;
  v23 = (v33 == 0 ? 4 : 0) | (v19 == 0 ? 2 : 0) | (v21 == 0);
  v14[185] = v23;
  if ( a5 )
  {
    *((_DWORD *)v14 + 78) |= 0x80u;
    v24 = !v19 && v21;
    v14[344] = v24;
  }
  if ( (*(_QWORD *)a1 & 0x8000000000000LL) != 0 && v23 != *((_BYTE *)a1 + 101) )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 14061;
    return 3221225485LL;
  }
  *((_QWORD *)v14 + 38) = 0LL;
  if ( (*(_BYTE *)a1 & 0x87) != 0 )
  {
    *((_DWORD *)v14 + 22) = (unsigned __int16)*((_DWORD *)a1 + 18);
    *((_DWORD *)v14 + 23) = *((_DWORD *)a1 + 16);
    *((_DWORD *)v14 + 24) = *((_DWORD *)a1 + 17);
    *((_DWORD *)v14 + 25) = *((_DWORD *)a1 + 14);
    *((_DWORD *)v14 + 26) = *((_DWORD *)a1 + 15);
    *((_DWORD *)v14 + 27) = *((_DWORD *)a1 + 12);
    *((_DWORD *)v14 + 28) = *((_DWORD *)a1 + 13);
    *((_DWORD *)v14 + 29) = *((_DWORD *)a1 + 10);
    *((_DWORD *)v14 + 30) = *((_DWORD *)a1 + 11);
    *((_QWORD *)v14 + 16) = *((_QWORD *)a1 + 4);
    v25 = *((_DWORD *)a1 + 19) ^ (*((_DWORD *)v14 + 34) ^ *((_DWORD *)a1 + 19)) & 0xFFFFFFF8;
    *((_DWORD *)v14 + 34) = v25;
    *((_DWORD *)v14 + 34) = (v25 & 7 ^ (*((_DWORD *)a1 + 18) >> 13) & 0xFFF8) & 0x1FF;
  }
  v26 = *((_QWORD *)v14 + 7);
  if ( (v26 & 2) != 0 && !*((_DWORD *)v14 + 28) )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 14078;
    return 3221225485LL;
  }
  if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
  {
    if ( !*((_DWORD *)a1 + 53) )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 14092;
      return 3221225485LL;
    }
    if ( !*((_DWORD *)a1 + 50) )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 14098;
      return 3221225485LL;
    }
    *((_DWORD *)v14 + 70) = *((_DWORD *)a1 + 49);
    *((_DWORD *)v14 + 71) = *((_DWORD *)a1 + 50);
    *((_DWORD *)v14 + 74) = *((_DWORD *)a1 + 53);
    goto LABEL_45;
  }
  if ( (*((_QWORD *)v14 + 7) & 2LL) != 0 )
  {
    v31 = *((_DWORD *)v14 + 28);
    *((_DWORD *)v14 + 70) = *((_DWORD *)v14 + 27);
    *((_DWORD *)v14 + 71) = v31;
    if ( (*((_WORD *)a1 + 37) & 0x3F) != 0 )
      *((_DWORD *)v14 + 71) = v31 * (*((_WORD *)a1 + 37) & 0x3F);
    *((_DWORD *)v14 + 74) = 1;
LABEL_45:
    v26 |= 0x1000000uLL;
    *((_QWORD *)v14 + 7) = v26;
  }
  if ( (*(_DWORD *)a1 & 0x20000) != 0 )
  {
    *((_QWORD *)v14 + 26) = *(_QWORD *)((char *)a1 + 124);
    if ( !a4 || v21 && v19 )
      v29 = 0LL;
    else
      v29 = 0x20000000000000LL;
    v26 |= v29;
    *((_QWORD *)v14 + 7) = v26;
  }
  if ( (*(_DWORD *)a1 & 0x800LL) != 0 )
    *((_QWORD *)v14 + 25) = *(_QWORD *)((char *)a1 + 116);
  if ( (*(_DWORD *)a1 & 0x100LL) != 0 )
  {
    *((_DWORD *)v14 + 38) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v14 + 39) = *((_DWORD *)a1 + 23);
    *((_DWORD *)v14 + 40) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v14 + 41) = *((_DWORD *)a1 + 23);
    v27 = *((_DWORD *)a1 + 24);
    *((_DWORD *)v14 + 44) = 0;
    *((_DWORD *)v14 + 45) = 0;
    *((_DWORD *)v14 + 43) = v27;
    v26 |= 0x100uLL;
    LOBYTE(v27) = *((_BYTE *)a1 + 100);
    *((_QWORD *)v14 + 7) = v26;
    v14[184] = v27;
  }
  if ( (*(_QWORD *)a1 & 0x8000000000LL) != 0 )
  {
    v32 = *((_DWORD *)a1 + 24);
    v26 |= 0x8000000000uLL;
    *((_QWORD *)v14 + 7) = v26;
    *((_DWORD *)v14 + 43) = v32;
  }
  if ( (*(_QWORD *)a1 & 0x10000000000LL) != 0 )
  {
    v14[184] = *((_BYTE *)a1 + 100);
    *((_QWORD *)v14 + 7) = v26 | 0x10000000000LL;
  }
  if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    *((_OWORD *)v14 + 14) = *(_OWORD *)((char *)a1 + 140);
  if ( (*(_DWORD *)a1 & 0x200LL) != 0 )
  {
    switch ( *((_DWORD *)a1 + 26) )
    {
      case 1:
        v20 = 1;
        break;
      case 2:
        v20 = 2;
        break;
      case 3:
        v20 = 3;
        break;
      default:
        if ( *((_DWORD *)a1 + 26) != 4 )
          v20 = 0;
        break;
    }
    *((_DWORD *)v14 + 47) = v20;
  }
  v28 = ConvertDisplayConfigScalingToPathModalityForPath(a1, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 56), a8);
  if ( v28 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    result = (unsigned int)v28;
    WdLogGlobalForLineNumber = 14187;
  }
  else
  {
    *((_DWORD *)v14 + 62) = 0;
    if ( (*(_BYTE *)a1 & 8) != 0
      && (v30 = ConvertDisplayConfigWireFormatToPathModalityForPath(
                  a1,
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 56)),
          v30 < 0) )
    {
      WdLogSingleEntry1(2LL, v9);
      result = (unsigned int)v30;
      WdLogGlobalForLineNumber = 14198;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
