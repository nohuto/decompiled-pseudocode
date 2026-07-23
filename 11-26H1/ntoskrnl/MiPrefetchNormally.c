/*
 * XREFs of MiPrefetchNormally @ 0x140375C8C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiPrefetchPagesViable @ 0x1404BD9E4 (MiPrefetchPagesViable.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPrefetchNormally(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8

  v3 = a3;
  if ( a1[2816] < (signed __int64)(a2 + 49)
    || ((a1[2931] - a1[2888]) & (unsigned __int64)-(__int64)(a1[2888] < a1[2931])) < a2 + 4223 )
  {
    return 0LL;
  }
  v5 = (unsigned __int64)(a1 + 456);
  v6 = a1[426] + a1[410];
  while ( v5 < (unsigned __int64)&a1[11 * v3 + 456] )
  {
    v6 += *(_QWORD *)(v5 + 16);
    v5 += 88LL;
  }
  return v6 >= a2;
}
