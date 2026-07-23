/*
 * XREFs of PiPnpRtlObjectEventCompareObjects @ 0x140A89960
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCompareObjects(_RTL_AVL_TABLE *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // r9d
  const wchar_t *v9; // r8
  const wchar_t *v10; // rax
  const wchar_t *v11; // rcx
  const wchar_t *v12; // rdx
  int v13; // ecx
  int v14; // eax

  v3 = *a3;
  v4 = *a2;
  if ( *a2 == v3 )
    return 2LL;
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_DWORD *)(v5 + 24);
  if ( *(_DWORD *)(v6 + 24) < v7 )
    return 0LL;
  if ( *(_DWORD *)(v6 + 24) <= v7 )
  {
    v8 = *(_DWORD *)(v6 + 28);
    if ( v8 < *(_DWORD *)(v5 + 28) )
      return 0LL;
    if ( v8 <= *(_DWORD *)(v5 + 28) )
    {
      v9 = *(const wchar_t **)(v6 + 16);
      v10 = *(const wchar_t **)(v5 + 16);
      v11 = v9 + 4;
      v12 = v10 + 4;
      if ( v8 != 3 )
      {
        v11 = v9;
        v12 = v10;
      }
      v13 = wcsicmp(v11, v12);
      v14 = 0;
      if ( v13 >= 0 )
      {
        LOBYTE(v14) = v13 <= 0;
        return (unsigned int)(v14 + 1);
      }
      return 0LL;
    }
  }
  return 1LL;
}
