/*
 * XREFs of MiPreemptivePageDemote @ 0x140434608
 * Callers:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 * Callees:
 *     MiDemoteLocalLargePage @ 0x1402844A0 (MiDemoteLocalLargePage.c)
 *     MiObtainedPageIsGood @ 0x14043467C (MiObtainedPageIsGood.c)
 */

__int64 __fastcall MiPreemptivePageDemote(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rsi

  v6 = (a2 ^ (a4 << 18)) & 0xC0000 ^ a2;
  while ( 1 )
  {
    result = MiDemoteLocalLargePage(a1, v6, a3);
    v8 = result;
    if ( !result )
      break;
    if ( (unsigned int)MiObtainedPageIsGood(result) )
      return v8;
  }
  return result;
}
