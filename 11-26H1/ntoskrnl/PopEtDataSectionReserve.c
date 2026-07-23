/*
 * XREFs of PopEtDataSectionReserve @ 0x140AF0D98
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x140B69ED8 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopEtDataSectionReserve(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ecx
  unsigned __int64 result; // rax

  if ( *a3 >= 0x7FFFFFFFu
    || (v4 = a2 * (unsigned __int64)a1[3], v4 >= 0x7FFFFFFF)
    || (v5 = -a1[4] & (a1[4] + *a3 - 1), result = v4 + v5, result >= 0x7FFFFFFF) )
  {
    result = 0x7FFFFFFFLL;
  }
  else
  {
    *a1 = v5;
    a1[1] = v4;
    a1[2] = result;
  }
  *a3 = result;
  return result;
}
