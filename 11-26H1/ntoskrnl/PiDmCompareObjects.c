/*
 * XREFs of PiDmCompareObjects @ 0x140A2FCA0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 */

__int64 __fastcall PiDmCompareObjects(struct _RTL_AVL_TABLE *Table, __int64 *FirstStruct, __int64 *SecondStruct)
{
  __int64 v3; // r10
  __int64 v4; // r9
  unsigned int v5; // ecx
  int v6; // r8d
  const wchar_t *v7; // r9
  const wchar_t *v8; // rcx
  const wchar_t *v9; // rdx
  int v10; // ecx

  v3 = *SecondStruct;
  v4 = *FirstStruct;
  if ( *FirstStruct == *SecondStruct )
    return 2LL;
  v5 = *(_DWORD *)(v3 + 24);
  if ( *(_DWORD *)(v4 + 24) < v5 )
    return 0LL;
  if ( *(_DWORD *)(v4 + 24) > v5 )
    return 1LL;
  v6 = *(_DWORD *)(v4 + 28);
  v7 = *(const wchar_t **)(v4 + 16);
  v8 = v7 + 4;
  v9 = (const wchar_t *)(*(_QWORD *)(v3 + 16) + 8LL);
  if ( v6 != 3 )
  {
    v8 = v7;
    v9 = *(const wchar_t **)(v3 + 16);
  }
  v10 = wcsicmp(v8, v9);
  if ( v10 < 0 )
    return 0LL;
  return (unsigned int)(v10 <= 0) + 1;
}
