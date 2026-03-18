/*
 * XREFs of IsFeatureEnabledUncached @ 0x140289AE4
 * Callers:
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1403EC9D0 (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkIsVmConnectedToHost@@YA_NXZ @ 0x140071058 (-DxgkIsVmConnectedToHost@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     CheckFeatureDependencies @ 0x140288A54 (CheckFeatureDependencies.c)
 *     CheckFeatureOSSupport @ 0x140288B70 (CheckFeatureOSSupport.c)
 *     ConfigureFeature @ 0x140288C30 (ConfigureFeature.c)
 *     IsFeatureEnabledHost @ 0x1402898F4 (IsFeatureEnabledHost.c)
 *     QueryDriverFeatureSupport @ 0x140289F24 (QueryDriverFeatureSupport.c)
 */

__int64 __fastcall IsFeatureEnabledUncached(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v7; // r13
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 result; // rax
  const wchar_t *v11; // r9
  __int64 v12; // r13
  __int16 v13; // cx
  __int64 v14; // r8
  unsigned __int16 v15; // dx
  bool v16; // zf
  int v17; // ecx
  int v18; // r9d
  int v19; // r8d
  unsigned __int16 v20; // ax
  bool v21; // cc
  bool v22; // al
  __int16 v23; // cx
  char v24; // [rsp+50h] [rbp-20h] BYREF
  char v25; // [rsp+51h] [rbp-1Fh] BYREF
  char v26; // [rsp+52h] [rbp-1Eh]
  char v27; // [rsp+53h] [rbp-1Dh]
  unsigned __int16 v28; // [rsp+54h] [rbp-1Ch]
  unsigned __int16 v29; // [rsp+56h] [rbp-1Ah]
  __int128 v30; // [rsp+58h] [rbp-18h] BYREF

  v3 = a2;
  v5 = 0xFFFFFFFLL;
  *(_QWORD *)&v30 = (unsigned __int64)(unsigned int)a2 >> 28;
  v7 = a2 & 0xFFFFFFF;
  v8 = 0;
  if ( (a2 & 0xFFFFFFFu) >= dword_1400AC938[4 * (_QWORD)v30] )
  {
    v9 = 0LL;
  }
  else
  {
    v5 = 3 * v7;
    v9 = *((_QWORD *)&g_FeatureDescriptorTables + 2 * v30) + 6 * v7;
  }
  *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)a3 = DXGDEVICE::DestroyFlagsDefault;
  if ( v9 )
  {
    *(_WORD *)(a3 + 2) |= 2u;
    if ( (*(_BYTE *)(v9 + 4) & 0x20) == 0 && (*(_DWORD *)(a1 + 936) & 1) != 0 )
    {
      WdLogSingleEntry2(2LL, a2, a1);
      v11 = L"Querying an adapter-specific feature must be done on an adapter database. FeatureId=%u, Database=0x%.16x";
      WdLogGlobalForLineNumber = 963;
LABEL_12:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v3, a1, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    v27 = CheckFeatureOSSupport(v5, v9, a2);
    v26 = 1;
    v25 = 0;
    v24 = 0;
    ConfigureFeature(a1, v3, v9);
    v12 = *(_QWORD *)(a1 + 8 * v30 + 736) + 6 * v7;
    if ( (*(_BYTE *)(v9 + 4) & 0x20) != 0 && DxgkIsVmConnectedToHost() || (*(_DWORD *)(a1 + 936) & 2) != 0 )
    {
      v13 = *(_WORD *)(v9 + 4) & 0x1C;
      if ( v13 == 8 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 994;
        return 0LL;
      }
      if ( (*(_BYTE *)(v12 + 4) & 1) != 0 && v13 == 12 || v13 == 16 )
        return IsFeatureEnabledHost(a1, v3, v9, (_WORD *)v12, a3);
    }
    if ( ((unsigned int)v3 & 0xFFFFFFF) >= dword_1400AC738[4 * ((unsigned __int64)(unsigned int)v3 >> 28)] )
      v14 = 0LL;
    else
      v14 = *((_QWORD *)&g_FeatureDependencyTables + 2 * ((unsigned __int64)(unsigned int)v3 >> 28))
          + 16 * (v3 & 0xFFFFFFF);
    result = CheckFeatureDependencies(a1, v3, v14, &v25, &v24);
    if ( (int)result < 0 )
      return result;
    v15 = *(_WORD *)(v12 + 2);
    v16 = (*(_BYTE *)(v9 + 4) & 0x40) == 0;
    v28 = *(_WORD *)v12;
    v29 = v15;
    if ( v16 )
    {
      v22 = v26;
    }
    else
    {
      v17 = *(unsigned __int8 *)(v12 + 4) >> 1;
      v30 = 0LL;
      LODWORD(v30) = v3;
      DWORD1(v30) = v17 & 1;
      QueryDriverFeatureSupport(a1, &v30);
      if ( (*(_BYTE *)(v12 + 4) & 2) == 0 && (BYTE12(v30) & 4) != 0 && (BYTE12(v30) & 1) != 0 )
      {
        WdLogSingleEntry2(2LL, v3, a1);
        v11 = L"Feature %u: Driver is reporting an experimental feature, but this is disallowed. Database=0x%.16x";
        WdLogGlobalForLineNumber = 1058;
        goto LABEL_12;
      }
      v18 = BYTE12(v30) & 1;
      v19 = (HIDWORD(v30) >> 1) & 1;
      v20 = v28;
      v15 = v29;
      v21 = v28 <= WORD4(v30);
      *(_WORD *)(a3 + 2) = (32 * ((HIDWORD(v30) >> 2) & 1)) | *(_WORD *)(a3 + 2) & 0xFFD3 | (4
                                                                                           * ((unsigned __int8)(2 * ((BYTE12(v30) & 2) != 0)) | BYTE12(v30) & 1)) & 0xDF;
      if ( v21 )
        v20 = WORD4(v30);
      if ( v15 >= WORD5(v30) )
        v15 = WORD5(v30);
      v22 = v15 >= v20 && v18 && v19;
    }
    if ( v24 )
    {
      if ( v27 )
      {
        if ( v22 )
        {
          v23 = *(_WORD *)(a3 + 2) | 0x10;
          *(_WORD *)(a3 + 2) = v23;
          if ( v25 )
          {
            if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
            {
              *(_WORD *)a3 = v15;
              *(_WORD *)(a3 + 2) = v23 | 1;
            }
          }
        }
      }
    }
    WdLogSingleEntry3(4LL, v3, *(_WORD *)(a3 + 2) & 1LL, a1);
    WdLogGlobalForLineNumber = 1107;
    return 0LL;
  }
  if ( DxgkIsVmConnectedToHost() || (*(_DWORD *)(a1 + 936) & 2) != 0 )
    return (unsigned int)IsFeatureEnabledHost(a1, v3, 0LL, 0LL, a3);
  return v8;
}
