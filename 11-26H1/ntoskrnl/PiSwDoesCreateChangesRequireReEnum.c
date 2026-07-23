/*
 * XREFs of PiSwDoesCreateChangesRequireReEnum @ 0x140B3E494
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PnpCompareMultiSz @ 0x140A8BF3C (PnpCompareMultiSz.c)
 */

char __fastcall PiSwDoesCreateChangesRequireReEnum(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  char v5; // bl
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rcx
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rcx
  unsigned int v12; // eax
  const WCHAR *v13; // rdx
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rdx
  const WCHAR *v16; // rcx

  if ( *(_DWORD *)(a1 + 64) != *(_DWORD *)(a2 + 64) )
    return 1;
  v4 = *(_QWORD **)(a2 + 56);
  v5 = 0;
  v6 = *(_QWORD **)(a1 + 40);
  if ( v6 != v4 )
  {
    if ( !v6 || !v4 )
      return 1;
    v7 = *v6 - *v4;
    if ( *v6 == *v4 )
      v7 = v6[1] - v4[1];
    if ( v7 )
      return 1;
  }
  if ( wcsicmp(*(const wchar_t **)(*(_QWORD *)(a1 + 112) + 8LL), *(const wchar_t **)(a2 + 8)) )
    return 1;
  v8 = *(const wchar_t **)(a2 + 72);
  v9 = *(const wchar_t **)(a1 + 48);
  if ( v9 != v8 && (!v9 || !v8 || wcsicmp(v9, v8)) )
    return 1;
  v10 = *(const wchar_t **)(a2 + 80);
  v11 = *(const wchar_t **)(a1 + 56);
  if ( v11 != v10 && (!v11 || !v10 || wcsicmp(v11, v10)) )
    return 1;
  v12 = *(_DWORD *)(a1 + 160);
  if ( v12 != *(_DWORD *)(a2 + 88) || v12 && memcmp(*(const void **)(a1 + 152), *(const void **)(a2 + 96), v12) )
    return 1;
  v13 = *(const WCHAR **)(a2 + 32);
  v14 = *(const WCHAR **)(a1 + 24);
  if ( v14 != v13 && (!v14 || !v13 || !PnpCompareMultiSz(v14, v13, 1u)) )
    return 1;
  v15 = *(const WCHAR **)(a2 + 48);
  v16 = *(const WCHAR **)(a1 + 32);
  if ( v16 != v15 && (!v16 || !v15 || !PnpCompareMultiSz(v16, v15, 1u)) )
    return 1;
  return v5;
}
