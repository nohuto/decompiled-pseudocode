/*
 * XREFs of MiPurgeZeroListHeads @ 0x140358F40
 * Callers:
 *     <none>
 * Callees:
 *     MiWalkFreeZeroListHead @ 0x140359F50 (MiWalkFreeZeroListHead.c)
 */

__int64 __fastcall MiPurgeZeroListHeads(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  __int64 v5; // rbx

  v4 = a4;
  v5 = a3;
  if ( !*(_DWORD *)(a3 + 28) && a4 )
  {
    do
    {
      MiWalkFreeZeroListHead(a2, v5, MiPurgeZeroPage, 0LL);
      v5 += 88LL;
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
