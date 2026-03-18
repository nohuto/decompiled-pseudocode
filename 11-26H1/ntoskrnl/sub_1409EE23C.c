/*
 * XREFs of sub_1409EE23C @ 0x1409EE23C
 * Callers:
 *     sub_1409EBC70 @ 0x1409EBC70 (sub_1409EBC70.c)
 *     sub_1409ED8B0 @ 0x1409ED8B0 (sub_1409ED8B0.c)
 * Callees:
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     sub_1409ED24C @ 0x1409ED24C (sub_1409ED24C.c)
 */

__int64 __fastcall sub_1409EE23C(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx

  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 40);
    if ( v5 )
    {
      sub_1409ED24C(a1, v5, a3, a4);
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_DWORD *)(a2 + 72) = 0;
    }
    SddlpFree((void *)a2);
  }
  return 0LL;
}
