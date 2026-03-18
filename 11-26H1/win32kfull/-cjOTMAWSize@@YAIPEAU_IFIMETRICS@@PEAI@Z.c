/*
 * XREFs of ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x14010F584
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x14010E0AC (cjIFIMetricsToOTMW.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C (-GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjOTMAWSize(struct _IFIMETRICS *a1, unsigned int *a2)
{
  unsigned int v3; // edi
  const WCHAR *v4; // rdx
  __int64 v5; // rsi
  __int64 v7; // rbx
  ULONG v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // rbx
  ULONG v11; // r15d
  const WCHAR *v12; // rdx
  ULONG v13; // ebx
  NTSTATUS v14; // eax
  NTSTATUS v15; // r13d
  __int64 v16; // rbx
  ULONG v17; // r15d
  const WCHAR *v18; // rdx
  ULONG v19; // ebx
  NTSTATUS v20; // eax
  NTSTATUS v21; // r12d
  ULONG v22; // r15d
  const WCHAR *v23; // rdx
  NTSTATUS v24; // eax
  ULONG BytesInMultiByteString; // [rsp+60h] [rbp+8h] BYREF
  NTSTATUS v27; // [rsp+68h] [rbp+10h]

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
  v10 = -1LL;
  v11 = BytesInMultiByteString + 236;
  v12 = (const WCHAR *)((char *)a1 + a1->dpwszFaceName);
  v27 = v9;
  do
    ++v10;
  while ( v12[v10] );
  v13 = 2 * v10;
  v14 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v12, v13);
  *a2 += v13;
  v15 = v14;
  v16 = -1LL;
  v17 = BytesInMultiByteString + v11;
  v18 = (const WCHAR *)((char *)a1 + a1->dpwszStyleName);
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
  v24 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v23, 2 * v5);
  *a2 += 2 * v5;
  if ( (v27 | v15 | v21 | v24) >= 0 )
    return v22 + BytesInMultiByteString;
  return v3;
}
