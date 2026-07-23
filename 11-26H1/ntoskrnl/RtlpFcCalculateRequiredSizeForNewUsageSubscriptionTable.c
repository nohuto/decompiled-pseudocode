/*
 * XREFs of RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140AC1430
 * Callers:
 *     RtlpFcUpdateUsageTriggers @ 0x140AC0FD8 (RtlpFcUpdateUsageTriggers.c)
 * Callees:
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x1404E1C04 (RtlpFcCompareUsageSubscriptionToUsageSubscription.c)
 */

NTSTATUS __fastcall RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable(
        _DWORD *a1,
        _DWORD *a2,
        unsigned __int64 a3,
        ULONGLONG *a4)
{
  ULONGLONG v4; // r10
  ULONGLONG v5; // rbx
  unsigned __int64 v6; // r11
  NTSTATUS result; // eax
  __int64 v9; // rdi
  ULONGLONG v10; // rbp
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  ULONGLONG v14; // rcx
  unsigned __int64 v15; // r8
  _DWORD *v16; // rdx
  __int64 *v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  bool v20; // zf
  ULONGLONG v21; // rcx

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v4 = (unsigned int)*a1;
    v9 = (__int64)(a1 + 1);
    v10 = v4;
    if ( *a1 )
    {
      v11 = a2;
      v12 = (__int64)(a2 + 1);
      while ( 1 )
      {
        if ( v6 >= a3 )
          goto LABEL_3;
        v13 = RtlpFcCompareUsageSubscriptionToUsageSubscription(v9, v12);
        if ( !v13 )
          break;
        if ( v13 == 1 )
        {
          v14 = v4 + 1;
          if ( *v11 )
            v14 = v4;
LABEL_25:
          ++v6;
          v11 += 5;
          v12 += 20LL;
          v4 = v14;
          goto LABEL_12;
        }
        ++v5;
        v9 += 16LL;
LABEL_12:
        if ( v5 >= v10 )
          goto LABEL_2;
      }
      v14 = v4 - 1;
      if ( !*v11 )
        v14 = v4;
      ++v5;
      v9 += 16LL;
      goto LABEL_25;
    }
  }
LABEL_2:
  if ( v6 < a3 )
  {
    v15 = a3 - v6;
    v16 = &a2[5 * v6];
    do
    {
      v20 = *v16 == 0;
      v21 = v4 + 1;
      v16 += 5;
      if ( !v20 )
        v21 = v4;
      v4 = v21;
      --v15;
    }
    while ( v15 );
  }
LABEL_3:
  if ( v4 )
  {
    result = RtlULongLongMult(v4, 0x10uLL, a4);
    if ( result >= 0 )
    {
      v18 = -1LL;
      v19 = *v17 + 4;
      if ( v19 >= *v17 )
        v18 = *v17 + 4;
      result = v19 < *v17 ? 0xC0000095 : 0;
      *v17 = v18;
    }
  }
  else
  {
    *a4 = 0LL;
    return 0;
  }
  return result;
}
