/*
 * XREFs of sub_1400E0960 @ 0x1400E0960
 * Callers:
 *     sub_1400DC21C @ 0x1400DC21C (sub_1400DC21C.c)
 *     sub_1400DCB68 @ 0x1400DCB68 (sub_1400DCB68.c)
 * Callees:
 *     sub_1400F37C8 @ 0x1400F37C8 (sub_1400F37C8.c)
 */

void __fastcall sub_1400E0960(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rsi

  if ( *(_QWORD *)(a1 + 728) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 20); ++i )
    {
      v3 = 192LL * i;
      if ( *(_QWORD *)(v3 + *(_QWORD *)(a1 + 728) + 96) )
      {
        sub_1400F37C8();
        ExFreePoolWithTag(*(PVOID *)(v3 + *(_QWORD *)(a1 + 728) + 96), 0x414E6152u);
        *(_QWORD *)(v3 + *(_QWORD *)(a1 + 728) + 96) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 728), 0x52436152u);
    *(_QWORD *)(a1 + 728) = 0LL;
  }
}
