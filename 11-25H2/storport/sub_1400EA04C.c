/*
 * XREFs of sub_1400EA04C @ 0x1400EA04C
 * Callers:
 *     sub_1400EA0D4 @ 0x1400EA0D4 (sub_1400EA0D4.c)
 * Callees:
 *     sub_140122570 @ 0x140122570 (sub_140122570.c)
 */

void __fastcall sub_1400EA04C(__int64 a1)
{
  union _SLIST_HEADER *v2; // rcx
  unsigned __int16 *v3; // rdx
  unsigned int i; // edi
  __int64 v5; // rdx

  v2 = *(union _SLIST_HEADER **)(a1 + 1416);
  if ( v2 && v2->Region )
  {
    InitializeSListHead(v2 + 1);
    v3 = *(unsigned __int16 **)(a1 + 1416);
    for ( i = 0; i < *v3; ++i )
    {
      v5 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL * i);
      if ( v5 )
        sub_140122570(a1, v5);
      v3 = *(unsigned __int16 **)(a1 + 1416);
    }
    *((_QWORD *)v3 + 1) = 0LL;
  }
}
