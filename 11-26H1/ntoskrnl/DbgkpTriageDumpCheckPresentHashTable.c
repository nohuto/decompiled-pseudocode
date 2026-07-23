/*
 * XREFs of DbgkpTriageDumpCheckPresentHashTable @ 0x1405B6F88
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1405B7010 (DbgkpTriageDumpSnapData.c)
 *     DbgkpTriageDumpIsMemoryBlockPresent @ 0x14078F540 (DbgkpTriageDumpIsMemoryBlockPresent.c)
 * Callees:
 *     <none>
 */

char __fastcall DbgkpTriageDumpCheckPresentHashTable(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4)
{
  __int64 i; // r10
  __int64 v5; // rax

  if ( a4 )
    *a4 = -1LL;
  for ( i = (a2 >> 4) - 3571 * ((unsigned __int64)(((a2 >> 4) * (unsigned __int128)0x92D1795E69F4AC57uLL) >> 64) >> 11);
        ;
        i = (i + 1) & -(__int64)((unsigned __int64)(i + 1) < 0xDF3) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    if ( !v5 )
      break;
    if ( *(_QWORD *)v5 == a2 && (!a3 || *(_DWORD *)(v5 + 12) == a3) )
    {
      if ( a4 )
        *a4 = i;
      return 1;
    }
  }
  if ( a4 )
    *a4 = i;
  return 0;
}
