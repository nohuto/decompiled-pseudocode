/*
 * XREFs of sub_1401224B4 @ 0x1401224B4
 * Callers:
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400F045C @ 0x1400F045C (sub_1400F045C.c)
 *     sub_1400F1128 @ 0x1400F1128 (sub_1400F1128.c)
 * Callees:
 *     sub_140122570 @ 0x140122570 (sub_140122570.c)
 */

PSLIST_ENTRY __fastcall sub_1401224B4(__int64 a1)
{
  union _SLIST_HEADER *v1; // rdi
  PSLIST_ENTRY result; // rax
  unsigned int v4; // esi
  union _SLIST_HEADER *v5; // rdi
  PSLIST_ENTRY v6; // rax

  v1 = (union _SLIST_HEADER *)(a1 + 1152);
  for ( result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1152)); result; result = ExpInterlockedPopEntrySList(v1) )
    sub_140122570(a1, &result[-1]);
  if ( *(_QWORD *)(a1 + 1168) )
  {
    v4 = 0;
    if ( *(_WORD *)(a1 + 22) )
    {
      do
      {
        v5 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 1168) + 16LL * v4);
        if ( v5 )
        {
          while ( 1 )
          {
            v6 = ExpInterlockedPopEntrySList(v5);
            if ( !v6 )
              break;
            sub_140122570(a1, &v6[-1]);
          }
        }
        result = (PSLIST_ENTRY)*(unsigned __int16 *)(a1 + 22);
        ++v4;
      }
      while ( v4 < (unsigned int)result );
    }
  }
  return result;
}
