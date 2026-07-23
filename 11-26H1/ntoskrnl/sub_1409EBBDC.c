/*
 * XREFs of sub_1409EBBDC @ 0x1409EBBDC
 * Callers:
 *     sub_1409EB860 @ 0x1409EB860 (sub_1409EB860.c)
 *     sub_1409EBBA4 @ 0x1409EBBA4 (sub_1409EBBA4.c)
 * Callees:
 *     sub_1409E99A0 @ 0x1409E99A0 (sub_1409E99A0.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409E9D3C @ 0x1409E9D3C (sub_1409E9D3C.c)
 *     sub_1409EBD34 @ 0x1409EBD34 (sub_1409EBD34.c)
 *     sub_1409EC968 @ 0x1409EC968 (sub_1409EC968.c)
 *     sub_140B3BEB4 @ 0x140B3BEB4 (sub_140B3BEB4.c)
 */

__int64 __fastcall sub_1409EBBDC(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  unsigned int j; // esi
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 92); ++i )
      sub_1409E9D3C(a1, *(_QWORD *)(*(_DWORD *)(a1 + 88) * i + *(_QWORD *)(a1 + 104)));
    sub_1409EBD34(a1 + 88);
    for ( j = 0; j < *(_DWORD *)(a1 + 12); ++j )
      sub_1409E99A0(a1, *(_QWORD *)(*(_DWORD *)(a1 + 8) * j + *(_QWORD *)(a1 + 24)));
    sub_1409EBD34(a1 + 8);
    v5 = (__int64 *)(a1 + 64);
    while ( 1 )
    {
      v6 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( (__int64 *)v6 == v5 )
        break;
      sub_1409E99A0(a1, v6);
    }
    for ( k = 0; k < *(_DWORD *)(a1 + 140); ++k )
      sub_140B3BEB4(*(_QWORD *)(*(_DWORD *)(a1 + 136) * k + *(_QWORD *)(a1 + 152)));
    sub_1409EBD34(a1 + 136);
    if ( *(_DWORD *)(a1 + 188) )
    {
      do
        sub_1409EC968(*(PVOID **)(*(_DWORD *)(a1 + 184) * v1++ + *(_QWORD *)(a1 + 200)));
      while ( v1 < *(_DWORD *)(a1 + 188) );
    }
    sub_1409EBD34(a1 + 184);
    SddlpFree((void *)a1);
  }
  return 0LL;
}
