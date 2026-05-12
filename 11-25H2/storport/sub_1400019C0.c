/*
 * XREFs of sub_1400019C0 @ 0x1400019C0
 * Callers:
 *     sub_140001010 @ 0x140001010 (sub_140001010.c)
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 * Callees:
 *     sub_1400535EC @ 0x1400535EC (sub_1400535EC.c)
 */

__int64 __fastcall sub_1400019C0(__int64 a1, ULONG *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( a2 )
    *a2 = ActiveProcessorCount;
  if ( (unsigned __int8)sub_1400535EC(a1, v5, ActiveProcessorCount) && v6 > dword_1401688A4 )
    return dword_1401688A4 * ((v6 + dword_1401688A4 - 1) / dword_1401688A4) / dword_1401688A4;
  else
    return 1LL;
}
