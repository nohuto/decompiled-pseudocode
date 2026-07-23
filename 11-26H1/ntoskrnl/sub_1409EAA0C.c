/*
 * XREFs of sub_1409EAA0C @ 0x1409EAA0C
 * Callers:
 *     sub_1409E8440 @ 0x1409E8440 (sub_1409E8440.c)
 *     sub_1409EA080 @ 0x1409EA080 (sub_1409EA080.c)
 * Callees:
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409E9A1C @ 0x1409E9A1C (sub_1409E9A1C.c)
 */

__int64 __fastcall sub_1409EAA0C(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx

  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 40);
    if ( v5 )
    {
      sub_1409E9A1C(a1, v5, a3, a4);
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_DWORD *)(a2 + 72) = 0;
    }
    SddlpFree((void *)a2);
  }
  return 0LL;
}
