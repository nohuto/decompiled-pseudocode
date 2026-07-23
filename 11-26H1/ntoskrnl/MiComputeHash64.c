/*
 * XREFs of MiComputeHash64 @ 0x1403DD3F0
 * Callers:
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeHash64(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // rax

  v1 = 510;
  v2 = 0xDE5DF13F878608F5uLL;
  do
  {
    v3 = __ROR8__(
           *(_QWORD *)(a1 + 8LL * (v1 - 16))
         + __ROR8__(
             *(_QWORD *)(a1 + 8LL * (v1 - 15))
           + __ROR8__(
               *(_QWORD *)(a1 + 8LL * (v1 - 14))
             + __ROR8__(
                 *(_QWORD *)(a1 + 8LL * (v1 - 13))
               + __ROR8__(
                   *(_QWORD *)(a1 + 8LL * (v1 - 12))
                 + __ROR8__(
                     *(_QWORD *)(a1 + 8LL * (v1 - 11)) ^ __ROR8__(
                                                           *(_QWORD *)(a1 + 8LL * (v1 - 10))
                                                         + __ROR8__(
                                                             *(_QWORD *)(a1 + 8LL * (v1 - 9))
                                                           + __ROR8__(
                                                               *(_QWORD *)(a1 + 8LL * (v1 - 8))
                                                             + __ROR8__(
                                                                 *(_QWORD *)(a1 + 8LL * (v1 - 7))
                                                               + __ROR8__(
                                                                   *(_QWORD *)(a1 + 8LL * (v1 - 6))
                                                                 + __ROR8__(
                                                                     *(_QWORD *)(a1 + 8LL * (v1 - 5))
                                                                   + __ROR8__(
                                                                       *(_QWORD *)(a1 + 8LL * (v1 - 4))
                                                                     + __ROR8__(
                                                                         *(_QWORD *)(a1 + 8LL * (v1 - 3)) ^ __ROR8__(*(_QWORD *)(a1 + 8LL * (v1 - 2)) + __ROR8__(*(_QWORD *)(a1 + 8LL * (v1 - 1)) + __ROR8__(*(_QWORD *)(a1 + 8LL * v1) + __ROR8__(*(_QWORD *)(a1 + 8LL * (v1 + 1)) + __ROR8__(v2, 2), 3), 5), 7), 11),
                                                                         13),
                                                                       17),
                                                                     19),
                                                                   2),
                                                                 3),
                                                               5),
                                                             7),
                                                           11),
                     13),
                   17),
                 19),
               2),
             3),
           5);
    v4 = *(_QWORD *)(a1 + 8LL * (v1 - 29))
       + __ROR8__(
           *(_QWORD *)(a1 + 8LL * (v1 - 28))
         + __ROR8__(
             *(_QWORD *)(a1 + 8LL * (v1 - 27)) ^ __ROR8__(
                                                   *(_QWORD *)(a1 + 8LL * (v1 - 26))
                                                 + __ROR8__(
                                                     *(_QWORD *)(a1 + 8LL * (v1 - 25))
                                                   + __ROR8__(
                                                       *(_QWORD *)(a1 + 8LL * (v1 - 24))
                                                     + __ROR8__(
                                                         *(_QWORD *)(a1 + 8LL * (v1 - 23))
                                                       + __ROR8__(
                                                           *(_QWORD *)(a1 + 8LL * (v1 - 22))
                                                         + __ROR8__(
                                                             *(_QWORD *)(a1 + 8LL * (v1 - 21))
                                                           + __ROR8__(
                                                               *(_QWORD *)(a1 + 8LL * (v1 - 20))
                                                             + __ROR8__(
                                                                 *(_QWORD *)(a1 + 8LL * (v1 - 19)) ^ __ROR8__(*(_QWORD *)(a1 + 8LL * (v1 - 18)) + __ROR8__(*(_QWORD *)(a1 + 8LL * (v1 - 17)) + v3, 7), 11),
                                                                 13),
                                                               17),
                                                             19),
                                                           2),
                                                         3),
                                                       5),
                                                     7),
                                                   11),
             13),
           17);
    v5 = v1 - 30;
    v1 -= 32;
    v2 = *(_QWORD *)(a1 + 8 * v5) + __ROR8__(v4, 19);
  }
  while ( v1 != -2 );
  return v2;
}
