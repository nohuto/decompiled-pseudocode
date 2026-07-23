/*
 * XREFs of GetPropertyFromPropArray @ 0x140AC6290
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 */

__int64 __fastcall GetPropertyFromPropArray(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v9; // r14d
  __int64 i; // rbx
  __int64 v12; // r8
  __int64 v13; // rcx
  const wchar_t *v14; // rcx
  _QWORD *v15; // r8
  const wchar_t *v16; // rdx

  *a3 = 0;
  *a4 = 0;
  v9 = -1073741275;
  *a5 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; i = (unsigned int)(i + 1) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(v12 + 48 * i + 16) == *(_DWORD *)(a2 + 16) )
    {
      v13 = *(_QWORD *)(v12 + 48 * i) - *(_QWORD *)a2;
      if ( !v13 )
        v13 = *(_QWORD *)(v12 + 48 * i + 8) - *(_QWORD *)(a2 + 8);
      if ( !v13 && *(_DWORD *)(v12 + 48 * i + 20) == *(_DWORD *)(a2 + 20) )
      {
        v14 = *(const wchar_t **)(v12 + 48 * i + 24);
        v15 = (_QWORD *)(a1 + 8);
        v16 = *(const wchar_t **)(a2 + 24);
        if ( v14 == v16 )
          goto LABEL_11;
        if ( v14 && v16 && !wcsicmp(v14, v16) )
        {
          v15 = (_QWORD *)(a1 + 8);
LABEL_11:
          *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 48 * i + 32);
          *a4 = *(_DWORD *)(*v15 + 48 * i + 36);
          v9 = 0;
          *a5 = *(_QWORD *)(*v15 + 48 * i + 40);
          return v9;
        }
      }
    }
  }
  return v9;
}
