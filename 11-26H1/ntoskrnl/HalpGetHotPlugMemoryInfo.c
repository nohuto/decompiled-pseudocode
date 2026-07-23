/*
 * XREFs of HalpGetHotPlugMemoryInfo @ 0x140CB46F4
 * Callers:
 *     HalpDpInitDiscard @ 0x140CB50AC (HalpDpInitDiscard.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalpGetHotPlugMemoryInfo(__int64 a1)
{
  __int64 Table; // rdi
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx

  Table = HalpAcpiGetTable(a1, 1413567059, 0, 0);
  result = HalpAcpiGetTable(a1, 1413698381, 0, 0);
  v4 = result;
  if ( Table )
  {
    v5 = Table + 48;
    v6 = Table + *(unsigned int *)(Table + 4);
    if ( Table + 50 <= v6 )
    {
      do
      {
        v7 = *(unsigned __int8 *)(v5 + 1);
        if ( (unsigned __int8)v7 < 2u )
          break;
        v8 = v5 + v7;
        if ( v5 + v7 > v6 )
          break;
        if ( *(_BYTE *)v5 == 1 && (unsigned __int8)v7 >= 0x28u && (*(_BYTE *)(v5 + 28) & 3) == 3 )
        {
          v9 = *(_QWORD *)(v5 + 16);
          if ( v9 )
          {
            if ( v9 + *(_QWORD *)(v5 + 8) - 1LL > (__int64)HalpPmuArbiter.ApcState.ApcListHead[0].Blink )
              HalpPmuArbiter.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)(v9 + *(_QWORD *)(v5 + 8) - 1LL);
          }
        }
        result = v8 + 2;
        v5 = v8;
      }
      while ( v8 + 2 <= v6 );
    }
    if ( v4 )
    {
      result = *(_QWORD *)(v4 + 48);
      if ( result > (__int64)HalpPmuArbiter.ApcState.ApcListHead[0].Blink )
        HalpPmuArbiter.ApcState.ApcListHead[0].Blink = *(struct _LIST_ENTRY **)(v4 + 48);
    }
  }
  return result;
}
