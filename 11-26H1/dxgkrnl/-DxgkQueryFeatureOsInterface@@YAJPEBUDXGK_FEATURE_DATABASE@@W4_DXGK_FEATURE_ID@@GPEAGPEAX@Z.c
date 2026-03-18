/*
 * XREFs of ?DxgkQueryFeatureOsInterface@@YAJPEBUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@GPEAGPEAX@Z @ 0x140289504
 * Callers:
 *     DpiQueryFeatureOsInterface @ 0x14024EFB4 (DpiQueryFeatureOsInterface.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     IsKnownFeature @ 0x140289EE0 (IsKnownFeature.c)
 */

__int64 __fastcall DxgkQueryFeatureOsInterface(__int64 a1, unsigned int a2, __int64 a3, _WORD *a4, char *a5)
{
  __int64 v5; // r15
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rdi
  const wchar_t *v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  char *v21; // rcx
  __int64 v22; // rbp
  int v23; // edx
  unsigned int v24; // r8d
  __int64 v25; // rbx
  const void *v26; // rdx
  int v27; // eax

  v5 = (unsigned __int16)*a4;
  *a4 = 0;
  if ( !(unsigned __int8)IsKnownFeature(a2) )
  {
    v10 = (unsigned int)v8;
    v11 = v9;
    WdLogSingleEntry3(2LL, v9, (unsigned int)v8, a1);
    WdLogGlobalForLineNumber = 1485;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Attempting to query interface for unknown feature %u[v%u], Database=0x%.16x",
      v11,
      v10,
      a1,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v13 = (unsigned __int64)(unsigned int)v9 >> 28;
  v14 = v9 & 0xFFFFFFF;
  v15 = *(_QWORD *)(a1 + 8 * v13 + 736);
  if ( (*(_BYTE *)(v15 + 6 * v14 + 4) & 1) == 0 )
  {
    v16 = v8;
    v17 = v9;
    WdLogSingleEntry3(2LL, v9, v8, a1);
    v18 = L"Attempting to query interface for disabled feature %u[v%u], Database=0x%.16x";
    WdLogGlobalForLineNumber = 1495;
LABEL_23:
    v23 = 0x40000;
    goto LABEL_24;
  }
  v19 = *(unsigned __int16 *)(v15 + 6 * v14);
  if ( (unsigned __int16)v8 < (unsigned __int16)v19 || (unsigned __int16)v8 > *(_WORD *)(v15 + 6 * v14 + 2) )
  {
    v16 = v8;
    v17 = v9;
    WdLogSingleEntry3(2LL, v9, v8, a1);
    v18 = L"Attempting to query interface for invalid version of feature %u[v%u], Database=0x%.16x";
    WdLogGlobalForLineNumber = 1505;
    goto LABEL_23;
  }
  v20 = 16 * v13;
  if ( ((unsigned int)v9 & 0xFFFFFFF) >= *(_DWORD *)((char *)&g_FeatureInterfaceTables + v20 + 8) )
    v21 = 0LL;
  else
    v21 = *(char **)((char *)&g_FeatureInterfaceTables + v20) + 16 * v14;
  v22 = *(_QWORD *)v21;
  if ( !*(_QWORD *)v21 )
  {
    WdLogSingleEntry3(3LL, v9, v8, a1);
    WdLogGlobalForLineNumber = 1516;
    return 0LL;
  }
  if ( v8 - v19 < (unsigned __int64)*((unsigned int *)v21 + 2) )
  {
    v24 = v8 - v19;
    v25 = 2LL * (unsigned int)(v8 - v19);
    v26 = *(const void **)(v22 + 16LL * v24);
    if ( v26 )
    {
      if ( (unsigned int)v5 < *(_DWORD *)(v22 + 16LL * v24 + 8) )
      {
        WdLogSingleEntry4(3LL, v9, v8, v5, *(unsigned int *)(v22 + 8 * v25 + 8));
        result = 3221225507LL;
        WdLogGlobalForLineNumber = 1551;
        return result;
      }
      memmove(a5, v26, *(unsigned int *)(v22 + 8 * v25 + 8));
      v27 = *(_DWORD *)(v22 + 8 * v25 + 8);
      if ( (_DWORD)v5 != v27 )
        memset(&a5[v27], 0, (unsigned int)(v5 - v27));
      *a4 = *(_WORD *)(v22 + 8 * v25 + 8);
    }
    else
    {
      WdLogSingleEntry3(3LL, v9, v8, a1);
      WdLogGlobalForLineNumber = 1542;
    }
    return 0LL;
  }
  v16 = v8;
  v17 = v9;
  WdLogSingleEntry3(1LL, v9, v8, a1);
  v18 = L"Dxgkrnl feature interface table mismatch! Feature=%u[v%u], Database=0x%.16x";
  WdLogGlobalForLineNumber = 1530;
  v23 = 262146;
LABEL_24:
  DxgkLogInternalTriageEvent(0LL, v23, -1, (__int64)v18, v17, v16, a1, 0LL, 0LL);
  return 3221225473LL;
}
