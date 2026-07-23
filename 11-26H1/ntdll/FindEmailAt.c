/*
 * XREFs of FindEmailAt @ 0x1800AE33C
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800AD6E0 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindEmailAt(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  _WORD *v3; // r9

  v2 = a2 - 1;
  v3 = (_WORD *)(a1 + 2LL * (int)(a2 - 1));
  while ( v2 >= 0 )
  {
    if ( *v3 == 64 )
      return (unsigned int)(v2 + 1);
    --v2;
    --v3;
  }
  return a2;
}
