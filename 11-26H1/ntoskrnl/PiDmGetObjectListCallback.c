/*
 * XREFs of PiDmGetObjectListCallback @ 0x140A42230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiDmGetObjectListCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rax
  unsigned int v6; // r10d
  unsigned int v7; // eax
  char *v8; // r11
  __int64 v9; // rdx
  const WCHAR *v10; // r9
  _WORD *v11; // rax
  __int64 v12; // rcx
  signed __int64 v13; // r9
  __int16 v14; // r8
  _WORD *v15; // rcx

  *a3 = 0;
  if ( *(_QWORD *)a2 )
    return guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a2 + 8));
  v4 = -1LL;
  while ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v4++ + 2) != 0 )
    ;
  v6 = v4 + 1;
  v7 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 28) += v6;
  if ( v7 > v6 )
  {
    v8 = *(char **)(a2 + 16);
    v9 = v7;
    v10 = *(const WCHAR **)(a1 + 16);
    if ( !v8 && v7 || v7 > 0x7FFFFFFF )
      goto LABEL_21;
    if ( !v10 )
      v10 = &SourceString;
    if ( v7 )
    {
      v11 = *(_WORD **)(a2 + 16);
      v12 = 2147483646LL;
      v13 = (char *)v10 - v8;
      do
      {
        if ( !v12 )
          break;
        v14 = *(_WORD *)((char *)v11 + v13);
        if ( !v14 )
          break;
        *v11 = v14;
        --v12;
        ++v11;
        --v9;
      }
      while ( v9 );
      v15 = v11 - 1;
      if ( v9 )
        v15 = v11;
      *v15 = 0;
      if ( !v9 )
LABEL_21:
        *(_WORD *)v8 = 0;
    }
    *(_QWORD *)(a2 + 16) += 2LL * v6;
    *(_DWORD *)(a2 + 24) -= v6;
  }
  return 0LL;
}
