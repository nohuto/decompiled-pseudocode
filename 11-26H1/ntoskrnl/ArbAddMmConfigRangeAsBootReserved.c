/*
 * XREFs of ArbAddMmConfigRangeAsBootReserved @ 0x14078A7D4
 * Callers:
 *     IopMemInitialize @ 0x1407A94C8 (IopMemInitialize.c)
 * Callees:
 *     RtlAddRange @ 0x140B123A0 (RtlAddRange.c)
 */

__int64 __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, int a2)
{
  int v2; // r9d
  unsigned __int64 i; // rbx
  int v7; // eax
  int v8; // ecx

  v2 = 0;
  if ( !ArbMmConfigRange )
    return 0LL;
  for ( i = ArbMmConfigRange + 8;
        i < ArbMmConfigRange + 32 * (unsigned __int64)*(unsigned int *)(ArbMmConfigRange + 4) + 8;
        i += 32LL )
  {
    v7 = *(unsigned __int8 *)(i + 1);
    v8 = *(_DWORD *)(a1 + 32);
    if ( v7 == v8 || (_BYTE)v7 == 7 && v8 == 3 )
    {
      LOBYTE(v2) = 1;
      v2 = RtlAddRange(a2, *(_QWORD *)(i + 16), *(_QWORD *)(i + 24), v2, 1, 0LL, 0LL);
      if ( v2 < 0 )
        break;
    }
  }
  return (unsigned int)v2;
}
