/*
 * XREFs of MiValidateMemoryRangeEntries @ 0x140A898A8
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403FE41C (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateMemoryRangeEntries(unsigned __int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r11

  v3 = a1;
  if ( a3 )
    *a3 = 0LL;
  v4 = 0LL;
  v5 = (unsigned __int64)&a1[2 * a2];
  while ( (unsigned __int64)v3 < v5 )
  {
    v7 = v3[1];
    if ( !v7 )
      return 0LL;
    v8 = *v3 + v7;
    if ( v8 <= *v3 || v8 > 0x7FFFFFFF0000LL || v4 + ((v7 + (*(_DWORD *)v3 & 0xFFF) + 4095LL) >> 12) < v4 )
      return 0LL;
    v4 += (v7 + (*(_DWORD *)v3 & 0xFFF) + 4095LL) >> 12;
    v3 += 2;
  }
  if ( a3 )
    *a3 = v4;
  return 1LL;
}
