/*
 * XREFs of CmpSortByTag @ 0x140CF6520
 * Callers:
 *     CmpDoSort @ 0x140CF5068 (CmpDoSort.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpSortByTag(__int64 **a1)
{
  __int64 *v1; // r8
  __int64 *v3; // r9
  __int64 *v4; // r11
  __int64 *v5; // rbx
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 **v8; // rax
  __int64 *i; // rax
  __int64 **v10; // rcx

  v1 = *a1;
  v3 = a1[1];
LABEL_13:
  v7 = (__int64 *)*v1;
  while ( v1 != v3 )
  {
    v4 = v3;
    v5 = v3;
    v6 = (__int64 *)*v7;
    if ( *((_DWORD *)v1 + 34) > *((_DWORD *)v7 + 34) )
    {
      v3 = v1;
      if ( v7 != v4 )
        v3 = v5;
      if ( (__int64 *)v6[1] != v7 )
        goto LABEL_16;
      v8 = (__int64 **)v7[1];
      if ( *v8 != v7 )
        goto LABEL_16;
      *v8 = v6;
      v6[1] = (__int64)v8;
      for ( i = *a1; i != v1; i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i + 34) >= *((_DWORD *)v7 + 34) )
          break;
      }
      v10 = (__int64 **)i[1];
      if ( *v10 != i )
LABEL_16:
        __fastfail(3u);
      *v7 = (__int64)i;
      v7[1] = (__int64)v10;
      *v10 = v7;
      i[1] = (__int64)v7;
      goto LABEL_13;
    }
    v1 = v7;
    v7 = (__int64 *)*v7;
  }
  return 1;
}
