/*
 * XREFs of ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1401919F8
 * Callers:
 *     _InitPwSB @ 0x14018FBCC (_InitPwSB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(_QWORD *a1, __int64 a2)
{
  if ( a2 )
    *(_QWORD *)(*(a1 - 14) + 144LL) = a2 + *(a1 - 13) - *(a1 - 14);
  else
    *(_QWORD *)(*(a1 - 14) + 144LL) = 0LL;
  *a1 = a2;
  return a2;
}
