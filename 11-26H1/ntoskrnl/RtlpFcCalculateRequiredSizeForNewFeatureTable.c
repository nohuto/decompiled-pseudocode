/*
 * XREFs of RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140B1BCBC
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x140B1BA58 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpFcUpdateFeature @ 0x140778270 (RtlpFcUpdateFeature.c)
 *     RtlpFcIsUpdateModifyingOrAddingFeature @ 0x14077DCCC (RtlpFcIsUpdateModifyingOrAddingFeature.c)
 *     RtlpFcDoesFeatureHaveUniqueState @ 0x14077FC68 (RtlpFcDoesFeatureHaveUniqueState.c)
 *     RtlpFcCompareFeatureToUpdate @ 0x140B1BE00 (RtlpFcCompareFeatureToUpdate.c)
 */

NTSTATUS __fastcall RtlpFcCalculateRequiredSizeForNewFeatureTable(
        _DWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONGLONG *a4)
{
  ULONGLONG v4; // r10
  ULONGLONG v5; // rbp
  unsigned __int64 v6; // r11
  NTSTATUS result; // eax
  __int128 *v11; // rdi
  ULONGLONG v12; // r15
  __int64 v13; // rbx
  int v14; // eax
  char IsUpdateModifyingOrAddingFeature; // al
  ULONGLONG v16; // r10
  ULONGLONG v17; // rcx
  __int64 v18; // r9
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  char v22; // al
  __int64 v23; // r9
  ULONGLONG v24; // r10
  ULONGLONG v25; // rcx
  __int128 v26; // [rsp+20h] [rbp-58h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v4 = (unsigned int)*a1;
    v11 = (__int128 *)(a1 + 1);
    v12 = v4;
    if ( *a1 )
    {
      v13 = a2;
      while ( 1 )
      {
        if ( v6 >= a3 )
          goto LABEL_3;
        v14 = RtlpFcCompareFeatureToUpdate(v11, v13);
        if ( !v14 )
          break;
        if ( v14 == 1 )
        {
          IsUpdateModifyingOrAddingFeature = RtlpFcIsUpdateModifyingOrAddingFeature(v13);
          v17 = v16 + 1;
          if ( !IsUpdateModifyingOrAddingFeature )
            v17 = v16;
          v4 = v17;
LABEL_27:
          ++v6;
          v13 += 32LL;
          goto LABEL_12;
        }
        ++v5;
        ++v11;
LABEL_12:
        if ( v5 >= v12 )
          goto LABEL_2;
      }
      if ( (*(_DWORD *)(v13 + 28) & 4) != 0
        || (v26 = *v11, RtlpFcUpdateFeature(&v26, v13), !RtlpFcDoesFeatureHaveUniqueState(&v26)) )
      {
        --v4;
      }
      ++v5;
      ++v11;
      goto LABEL_27;
    }
  }
LABEL_2:
  if ( v6 < a3 )
  {
    v18 = a2 + 32 * v6;
    v19 = a3 - v6;
    do
    {
      v22 = RtlpFcIsUpdateModifyingOrAddingFeature(v18);
      v25 = v24 + 1;
      if ( !v22 )
        v25 = v24;
      v18 = v23 + 32;
      v4 = v25;
      --v19;
    }
    while ( v19 );
  }
LABEL_3:
  if ( v4 )
  {
    result = RtlULongLongMult(v4, 0x10uLL, a4);
    if ( result >= 0 )
    {
      v20 = -1LL;
      v21 = *a4 + 4;
      if ( v21 >= *a4 )
        v20 = *a4 + 4;
      result = v21 < *a4 ? 0xC0000095 : 0;
      *a4 = v20;
    }
  }
  else
  {
    *a4 = 0LL;
    return 0;
  }
  return result;
}
