/*
 * XREFs of BvgaSetProgressBarSubset @ 0x1405C8760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BvgaSetProgressBarSubset(int a1, int a2)
{
  __int64 result; // rax

  BvgaProgressState = 100 * a1;
  result = (unsigned int)(100 * a2);
  dword_140F86AC8 = a2 - a1;
  dword_140F86AC4 = 100 * a2;
  return result;
}
