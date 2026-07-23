/*
 * XREFs of PopPepGetReadyActivityType @ 0x140457288
 * Callers:
 *     PopPepWork @ 0x1403B84E0 (PopPepWork.c)
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepGetReadyActivityType(__int64 a1, unsigned int a2, int a3)
{
  __int64 i; // r9
  int v5; // ecx

  for ( i = (int)a2; i <= a3; ++i )
  {
    v5 = **(_DWORD **)(a1 + 8 * i);
    if ( (v5 & 2) != 0 || (v5 & 8) != 0 )
      return a2;
    ++a2;
  }
  return 6;
}
