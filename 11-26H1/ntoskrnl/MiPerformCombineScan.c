/*
 * XREFs of MiPerformCombineScan @ 0x1402D63C0
 * Callers:
 *     MiComputeCombineHash @ 0x1402D5A70 (MiComputeCombineHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPerformCombineScan(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // r8
  bool v9; // zf

  v4 = (__int64)(*(_QWORD *)(a2 + 56) << 25) >> 16;
  v5 = 1;
  LODWORD(v6) = 512;
  v7 = 0xDE5DF13F878608F5uLL;
  do
  {
    v8 = __ROR8__(
           *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 7))
         + __ROR8__(
             *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 6))
           + __ROR8__(
               *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 5)) ^ __ROR8__(
                                                                  *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 4))
                                                                + __ROR8__(
                                                                    *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 3))
                                                                  + __ROR8__(
                                                                      *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 2))
                                                                    + __ROR8__(
                                                                        *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 - 1))
                                                                      + __ROR8__(v7, 2),
                                                                        3),
                                                                      5),
                                                                    7),
                                                                  11),
               13),
             17),
           19);
    v9 = (_DWORD)v6 == 8;
    v6 = (unsigned int)(v6 - 8);
    v7 = v8 + *(_QWORD *)(v4 + 8 * v6);
  }
  while ( !v9 );
  *(_QWORD *)(a4 + 8) = v7;
  if ( !v7 )
    return 0;
  return v5;
}
