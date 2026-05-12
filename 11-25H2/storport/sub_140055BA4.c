/*
 * XREFs of sub_140055BA4 @ 0x140055BA4
 * Callers:
 *     sub_140044ADC @ 0x140044ADC (sub_140044ADC.c)
 *     sub_1400AFDF4 @ 0x1400AFDF4 (sub_1400AFDF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140055BA4(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = a1 + 5096;
  result = 5LL;
  do
  {
    *(_QWORD *)(v1 - 4) = 0LL;
    *(_BYTE *)(v1 + 4) = 1;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_BYTE *)(v1 + 64) = 1;
    v1 += 12LL;
    --result;
  }
  while ( result );
  return result;
}
