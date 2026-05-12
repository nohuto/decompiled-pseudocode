/*
 * XREFs of sub_1400E9554 @ 0x1400E9554
 * Callers:
 *     sub_1400E96A0 @ 0x1400E96A0 (sub_1400E96A0.c)
 * Callees:
 *     sub_1401222E8 @ 0x1401222E8 (sub_1401222E8.c)
 */

__int64 __fastcall sub_1400E9554(__int64 a1, unsigned __int16 a2)
{
  union _SLIST_HEADER *v3; // rcx
  unsigned __int16 v5; // bx
  __int64 result; // rax
  struct _SLIST_ENTRY *v7; // rax

  v3 = *(union _SLIST_HEADER **)(a1 + 1416);
  v5 = 0;
  if ( !v3 )
    return 0LL;
  InitializeSListHead(v3 + 1);
  if ( a2 )
  {
    do
    {
      v7 = (struct _SLIST_ENTRY *)sub_1401222E8(a1);
      if ( !v7 )
        break;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) + 8LL * v5) = v7;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1416) + 16LL), v7 + 1);
      ++v5;
    }
    while ( v5 < a2 );
  }
  result = v5;
  **(_WORD **)(a1 + 1416) = v5;
  return result;
}
