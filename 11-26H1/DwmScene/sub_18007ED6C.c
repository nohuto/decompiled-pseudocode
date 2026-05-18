/*
 * XREFs of sub_18007ED6C @ 0x18007ED6C
 * Callers:
 *     sub_18007ED34 @ 0x18007ED34 (sub_18007ED34.c)
 * Callees:
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 */

float *__fastcall sub_18007ED6C(__int64 a1, unsigned __int16 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_18007E978(a1, a2, 2);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
