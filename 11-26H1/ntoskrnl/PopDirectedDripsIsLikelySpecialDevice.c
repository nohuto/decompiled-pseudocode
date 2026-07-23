/*
 * XREFs of PopDirectedDripsIsLikelySpecialDevice @ 0x14077EAE8
 * Callers:
 *     PopDirectedDripsVisitPs4Device @ 0x1407E7A4C (PopDirectedDripsVisitPs4Device.c)
 * Callees:
 *     <none>
 */

char __fastcall PopDirectedDripsIsLikelySpecialDevice(__int64 a1, _DWORD *a2)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 760) & 0x10) != 0 )
  {
    result = 1;
    *a2 = 0;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0 )
  {
    result = 1;
    *a2 = 7;
  }
  else if ( (*(_DWORD *)(a1 + 760) & 0x80000) != 0 )
  {
    result = 1;
    *a2 = 6;
  }
  else
  {
    return 0;
  }
  return result;
}
