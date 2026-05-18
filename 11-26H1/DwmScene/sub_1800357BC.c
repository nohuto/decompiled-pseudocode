/*
 * XREFs of sub_1800357BC @ 0x1800357BC
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 * Callees:
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 *     unknown_libname_5 @ 0x18002F180 (unknown_libname_5.c)
 *     sub_180031F70 @ 0x180031F70 (sub_180031F70.c)
 */

void __fastcall sub_1800357BC(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rax
  __int64 *i; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx

  v1 = *(__int64 **)(a1 + 888);
  v3 = *(__int64 **)(a1 + 896);
  while ( v1 != v3 )
  {
    v4 = v1[1];
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
      break;
    v1 += 2;
  }
  if ( v1 != v3 )
  {
    for ( i = v1 + 2; i != v3; i += 2 )
    {
      v6 = i[1];
      if ( v6 && *(_DWORD *)(v6 + 8) )
      {
        sub_180031F70(v1, i);
        v1 += 2;
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 896);
  if ( v1 != (__int64 *)v7 )
  {
    v8 = unknown_libname_5(v7, *(_QWORD *)(a1 + 896), (__int64)v1);
    sub_180011964(v8, *(_QWORD *)(a1 + 896));
    *(_QWORD *)(a1 + 896) = v8;
  }
}
