/*
 * XREFs of EtwpCheckPoolTagFilters @ 0x1406C7464
 * Callers:
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x14042D60C (ExCheckSingleFilter.c)
 */

char __fastcall EtwpCheckPoolTagFilters(unsigned int a1, int a2)
{
  __int64 v2; // r9
  int v3; // r11d
  unsigned int v4; // r8d
  unsigned int v5; // r10d
  int v6; // r8d

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = *(unsigned __int16 *)&stru_140F03830.ApcStateFill[20 * a1 + 24];
  while ( v4 < v5 )
  {
    if ( (unsigned int)ExCheckSingleFilter(v3, *(_DWORD *)&stru_140F03830.ApcStateFill[20 * v2 + 28 + 4 * v4]) )
      return 1;
    v4 = v6 + 1;
  }
  return 0;
}
