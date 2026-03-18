/*
 * XREFs of sub_140909DF0 @ 0x140909DF0
 * Callers:
 *     sub_140908780 @ 0x140908780 (sub_140908780.c)
 *     sub_140908DF4 @ 0x140908DF4 (sub_140908DF4.c)
 *     sub_140909DB8 @ 0x140909DB8 (sub_140909DB8.c)
 * Callees:
 *     sub_1409077D4 @ 0x1409077D4 (sub_1409077D4.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_1409E1778 @ 0x1409E1778 (sub_1409E1778.c)
 *     sub_140A014D8 @ 0x140A014D8 (sub_140A014D8.c)
 *     sub_140A755F8 @ 0x140A755F8 (sub_140A755F8.c)
 *     sub_140A8FFC8 @ 0x140A8FFC8 (sub_140A8FFC8.c)
 */

__int64 __fastcall sub_140909DF0(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  unsigned int j; // ebp
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 92); ++i )
      sub_140A014D8(a1, *(_QWORD *)(*(_DWORD *)(a1 + 88) * i + *(_QWORD *)(a1 + 104)));
    sub_140A755F8(a1 + 88);
    for ( j = 0; j < *(_DWORD *)(a1 + 12); ++j )
      sub_1409077D4(a1, *(_QWORD *)(*(_DWORD *)(a1 + 8) * j + *(_QWORD *)(a1 + 24)));
    sub_140A755F8(a1 + 8);
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
      sub_1409077D4(a1, v6);
    }
    for ( k = 0; k < *(_DWORD *)(a1 + 140); ++k )
      sub_140A8FFC8(*(_QWORD *)(*(_DWORD *)(a1 + 136) * k + *(_QWORD *)(a1 + 152)));
    sub_140A755F8(a1 + 136);
    if ( *(_DWORD *)(a1 + 188) )
    {
      do
        sub_1409E1778(*(PVOID **)(*(_DWORD *)(a1 + 184) * v1++ + *(_QWORD *)(a1 + 200)));
      while ( v1 < *(_DWORD *)(a1 + 188) );
    }
    sub_140A755F8(a1 + 184);
    SddlpFree((void *)a1);
  }
  return 0LL;
}
