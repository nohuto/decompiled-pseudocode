/*
 * XREFs of ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1400BD390
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1400BB8C0 (cjIFIMetricsToOTMW.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BD04C (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjOTMAWSize(struct _IFIMETRICS *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  const WCHAR *v4; // rdx
  __int64 v5; // rdi
  __int64 v7; // rsi
  ULONG v8; // esi
  NTSTATUS v9; // eax
  NTSTATUS v10; // r15d
  __int64 v11; // rsi
  ULONG v12; // r12d
  const WCHAR *v13; // rdx
  ULONG v14; // esi
  NTSTATUS v15; // eax
  __int64 v16; // rsi
  ULONG v17; // r12d
  const WCHAR *v18; // rdx
  ULONG v19; // esi
  NTSTATUS v20; // eax
  NTSTATUS v21; // r13d
  ULONG v22; // r12d
  const WCHAR *v23; // rdx
  ULONG v24; // edi
  NTSTATUS v25; // eax
  ULONG v26; // edx
  int v27; // r15d
  ULONG v28; // edx
  ULONG BytesInMultiByteString; // [rsp+60h] [rbp+8h] BYREF
  NTSTATUS v31; // [rsp+68h] [rbp+10h]

  *a2 = 240;
  v3 = 0;
  v4 = (const WCHAR *)((char *)a1 + a1->dpwszFamilyName);
  BytesInMultiByteString = 0;
  v5 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( v4[v7] );
  v8 = 2 * v7;
  v9 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v4, v8);
  *a2 += v8;
  v10 = v9;
  v11 = -1LL;
  v12 = BytesInMultiByteString + 236;
  v13 = (const WCHAR *)((char *)a1 + a1->dpwszFaceName);
  do
    ++v11;
  while ( v13[v11] );
  v14 = 2 * v11;
  v15 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v13, v14);
  *a2 += v14;
  v16 = -1LL;
  v17 = BytesInMultiByteString + v12;
  v18 = (const WCHAR *)((char *)a1 + a1->dpwszStyleName);
  v31 = v15;
  do
    ++v16;
  while ( v18[v16] );
  v19 = 2 * v16;
  v20 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v18, v19);
  *a2 += v19;
  v21 = v20;
  v22 = BytesInMultiByteString + v17;
  v23 = (const WCHAR *)((char *)a1 + a1->dpwszUniqueName);
  do
    ++v5;
  while ( v23[v5] );
  v24 = 2 * v5;
  v25 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v23, v24);
  v26 = BytesInMultiByteString;
  v27 = v25 | v31 | v10;
  *a2 += v24;
  v28 = v22 + v26;
  if ( (v21 | v27) >= 0 )
    return v28;
  return v3;
}
